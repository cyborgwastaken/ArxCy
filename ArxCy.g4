/**
 * ANTLR v4 grammar converted from the provided EBNF.
 * Grammar name: ArxCy
 */
grammar ArxCy;

// =========================
//  Parser Rules (Grammar Structure)
// =========================

program: (declaration | function_decl | statement)* EOF;

declaration
    : type IDENTIFIER ';'
    | type IDENTIFIER '=' expression ';'
    | type lb='[' rb=']' IDENTIFIER '=' array_literal ';'
    ;

array_literal: '{' (expression (',' expression)*)? '}';

function_decl: 'func' type IDENTIFIER '(' parameters? ')' block;

parameters: parameter (',' parameter)*;

parameter: type IDENTIFIER;

statement
    : block
    | if_statement
    | for_statement
    | while_statement
    | do_while_statement
    | expression_statement
    | return_statement
    ;

block: '{' statement* '}';

if_statement
    : 'if' '(' expression ')' 'then' block
      ('else-if' '(' expression ')' 'then' block)*
      (el='else' block)?
    ;

for_statement: 'for' '(' declaration expression ';' expression ')' block;

while_statement: 'while' '(' expression ')' block;

do_while_statement: 'do' block 'while' '(' expression ')' ';';

return_statement: 'return' expression ';';

expression_statement: expression ';';

expression: assignment;

assignment: logical_or ('=' assignment)?;

logical_or: logical_and (op='||' logical_and)*;

logical_and: equality (op='&&' equality)*;

equality: comparison (op=('==' | '!=') comparison)*;

comparison: term (op=('<' | '>' | '<=' | '>=') term)*;

term: factor (op=('+' | '-') factor)*;

factor: unary (op=('*' | '/' | '%') unary)*;

unary
    : op=('+' | '-' | '!' | '++' | '--') unary
    | postfix
    ;

// POSTFIX now includes the .length property for arrays.
postfix
    : primary
    | postfix LBRACK expression RBRACK      // Array access
    | postfix LPAREN arguments? RPAREN      // Function call
    | postfix op=('++' | '--')              // Post-increment/decrement
    | postfix '.' 'length'                  // Array length property
    ;

primary
    : INT_LITERAL
    | FLOAT_LITERAL
    | BOOL_LITERAL
    | CHAR_LITERAL
    | STRING_LITERAL
    | IDENTIFIER
    | LPAREN expression RPAREN
    | array_literal
    ;

arguments: expression (',' expression)*;

type: 'int' | 'str' | 'flt' | 'bool' | 'char';


// =========================
//  Lexer Rules (Tokens)
// =========================

BOOL_LITERAL: 'true' | 'false';
CHAR_LITERAL: '\'' (LETTER | DIGIT) '\'';
STRING_LITERAL: '"' ~["]* '"';
FLOAT_LITERAL: DIGIT+ '.' DIGIT+;
INT_LITERAL: DIGIT+;

IDENTIFIER: LETTER (LETTER | DIGIT)*;

LPAREN: '(';
RPAREN: ')';
LBRACK: '[';
RBRACK: ']';
DOT: '.'; // Added for the .length property

WS: [ \t\r\n]+ -> skip;
LINE_COMMENT: '//' ~[\r\n]* -> skip;

// =========================
//  Fragments
// =========================
fragment LETTER: [a-zA-Z_];
fragment DIGIT: [0-9];
