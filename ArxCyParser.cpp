
// Generated from ArxCy.g4 by ANTLR 4.13.2


#include "ArxCyListener.h"
#include "ArxCyVisitor.h"

#include "ArxCyParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ArxCyParserStaticData final {
  ArxCyParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ArxCyParserStaticData(const ArxCyParserStaticData&) = delete;
  ArxCyParserStaticData(ArxCyParserStaticData&&) = delete;
  ArxCyParserStaticData& operator=(const ArxCyParserStaticData&) = delete;
  ArxCyParserStaticData& operator=(ArxCyParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag arxcyParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ArxCyParserStaticData> arxcyParserStaticData = nullptr;

void arxcyParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (arxcyParserStaticData != nullptr) {
    return;
  }
#else
  assert(arxcyParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ArxCyParserStaticData>(
    std::vector<std::string>{
      "program", "declaration", "array_literal", "function_decl", "parameters", 
      "parameter", "statement", "block", "if_statement", "for_statement", 
      "while_statement", "do_while_statement", "return_statement", "expression_statement", 
      "expression", "assignment", "logical_or", "logical_and", "equality", 
      "comparison", "term", "factor", "unary", "postfix", "primary", "arguments", 
      "type"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'{'", "','", "'}'", "'func'", "'if'", "'then'", 
      "'else-if'", "'else'", "'for'", "'while'", "'do'", "'return'", "'||'", 
      "'&&'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'!'", "'++'", "'--'", "'length'", "'int'", "'str'", 
      "'flt'", "'bool'", "'char'", "", "", "", "", "", "", "'('", "')'", 
      "'['", "']'", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "FLOAT_LITERAL", 
      "INT_LITERAL", "IDENTIFIER", "LPAREN", "RPAREN", "LBRACK", "RBRACK", 
      "DOT", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,296,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,5,0,
  	58,8,0,10,0,12,0,61,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,83,8,1,1,2,1,2,1,2,1,2,5,2,89,8,
  	2,10,2,12,2,92,9,2,3,2,94,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,3,3,103,8,3,
  	1,3,1,3,1,3,1,4,1,4,1,4,5,4,111,8,4,10,4,12,4,114,9,4,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,3,6,126,8,6,1,7,1,7,5,7,130,8,7,10,7,12,7,133,
  	9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,150,
  	8,8,10,8,12,8,153,9,8,1,8,1,8,3,8,157,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,3,
  	15,194,8,15,1,16,1,16,1,16,5,16,199,8,16,10,16,12,16,202,9,16,1,17,1,
  	17,1,17,5,17,207,8,17,10,17,12,17,210,9,17,1,18,1,18,1,18,5,18,215,8,
  	18,10,18,12,18,218,9,18,1,19,1,19,1,19,5,19,223,8,19,10,19,12,19,226,
  	9,19,1,20,1,20,1,20,5,20,231,8,20,10,20,12,20,234,9,20,1,21,1,21,1,21,
  	5,21,239,8,21,10,21,12,21,242,9,21,1,22,1,22,1,22,3,22,247,8,22,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,260,8,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,5,23,268,8,23,10,23,12,23,271,9,23,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,284,8,24,1,25,1,25,
  	1,25,5,25,289,8,25,10,25,12,25,292,9,25,1,26,1,26,1,26,0,1,46,27,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,0,7,1,0,17,18,1,0,19,22,1,0,23,24,1,0,25,27,2,0,23,24,28,30,1,0,29,
  	30,1,0,32,36,307,0,59,1,0,0,0,2,82,1,0,0,0,4,84,1,0,0,0,6,97,1,0,0,0,
  	8,107,1,0,0,0,10,115,1,0,0,0,12,125,1,0,0,0,14,127,1,0,0,0,16,136,1,0,
  	0,0,18,158,1,0,0,0,20,167,1,0,0,0,22,173,1,0,0,0,24,181,1,0,0,0,26,185,
  	1,0,0,0,28,188,1,0,0,0,30,190,1,0,0,0,32,195,1,0,0,0,34,203,1,0,0,0,36,
  	211,1,0,0,0,38,219,1,0,0,0,40,227,1,0,0,0,42,235,1,0,0,0,44,246,1,0,0,
  	0,46,248,1,0,0,0,48,283,1,0,0,0,50,285,1,0,0,0,52,293,1,0,0,0,54,58,3,
  	2,1,0,55,58,3,6,3,0,56,58,3,12,6,0,57,54,1,0,0,0,57,55,1,0,0,0,57,56,
  	1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,62,1,0,0,0,61,59,
  	1,0,0,0,62,63,5,0,0,1,63,1,1,0,0,0,64,65,3,52,26,0,65,66,5,42,0,0,66,
  	67,5,1,0,0,67,83,1,0,0,0,68,69,3,52,26,0,69,70,5,42,0,0,70,71,5,2,0,0,
  	71,72,3,28,14,0,72,73,5,1,0,0,73,83,1,0,0,0,74,75,3,52,26,0,75,76,5,45,
  	0,0,76,77,5,46,0,0,77,78,5,42,0,0,78,79,5,2,0,0,79,80,3,4,2,0,80,81,5,
  	1,0,0,81,83,1,0,0,0,82,64,1,0,0,0,82,68,1,0,0,0,82,74,1,0,0,0,83,3,1,
  	0,0,0,84,93,5,3,0,0,85,90,3,28,14,0,86,87,5,4,0,0,87,89,3,28,14,0,88,
  	86,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,94,1,0,0,0,92,
  	90,1,0,0,0,93,85,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,96,5,5,0,0,96,
  	5,1,0,0,0,97,98,5,6,0,0,98,99,3,52,26,0,99,100,5,42,0,0,100,102,5,43,
  	0,0,101,103,3,8,4,0,102,101,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,
  	105,5,44,0,0,105,106,3,14,7,0,106,7,1,0,0,0,107,112,3,10,5,0,108,109,
  	5,4,0,0,109,111,3,10,5,0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,
  	0,0,112,113,1,0,0,0,113,9,1,0,0,0,114,112,1,0,0,0,115,116,3,52,26,0,116,
  	117,5,42,0,0,117,11,1,0,0,0,118,126,3,14,7,0,119,126,3,16,8,0,120,126,
  	3,18,9,0,121,126,3,20,10,0,122,126,3,22,11,0,123,126,3,26,13,0,124,126,
  	3,24,12,0,125,118,1,0,0,0,125,119,1,0,0,0,125,120,1,0,0,0,125,121,1,0,
  	0,0,125,122,1,0,0,0,125,123,1,0,0,0,125,124,1,0,0,0,126,13,1,0,0,0,127,
  	131,5,3,0,0,128,130,3,12,6,0,129,128,1,0,0,0,130,133,1,0,0,0,131,129,
  	1,0,0,0,131,132,1,0,0,0,132,134,1,0,0,0,133,131,1,0,0,0,134,135,5,5,0,
  	0,135,15,1,0,0,0,136,137,5,7,0,0,137,138,5,43,0,0,138,139,3,28,14,0,139,
  	140,5,44,0,0,140,141,5,8,0,0,141,151,3,14,7,0,142,143,5,9,0,0,143,144,
  	5,43,0,0,144,145,3,28,14,0,145,146,5,44,0,0,146,147,5,8,0,0,147,148,3,
  	14,7,0,148,150,1,0,0,0,149,142,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,
  	0,151,152,1,0,0,0,152,156,1,0,0,0,153,151,1,0,0,0,154,155,5,10,0,0,155,
  	157,3,14,7,0,156,154,1,0,0,0,156,157,1,0,0,0,157,17,1,0,0,0,158,159,5,
  	11,0,0,159,160,5,43,0,0,160,161,3,2,1,0,161,162,3,28,14,0,162,163,5,1,
  	0,0,163,164,3,28,14,0,164,165,5,44,0,0,165,166,3,14,7,0,166,19,1,0,0,
  	0,167,168,5,12,0,0,168,169,5,43,0,0,169,170,3,28,14,0,170,171,5,44,0,
  	0,171,172,3,14,7,0,172,21,1,0,0,0,173,174,5,13,0,0,174,175,3,14,7,0,175,
  	176,5,12,0,0,176,177,5,43,0,0,177,178,3,28,14,0,178,179,5,44,0,0,179,
  	180,5,1,0,0,180,23,1,0,0,0,181,182,5,14,0,0,182,183,3,28,14,0,183,184,
  	5,1,0,0,184,25,1,0,0,0,185,186,3,28,14,0,186,187,5,1,0,0,187,27,1,0,0,
  	0,188,189,3,30,15,0,189,29,1,0,0,0,190,193,3,32,16,0,191,192,5,2,0,0,
  	192,194,3,30,15,0,193,191,1,0,0,0,193,194,1,0,0,0,194,31,1,0,0,0,195,
  	200,3,34,17,0,196,197,5,15,0,0,197,199,3,34,17,0,198,196,1,0,0,0,199,
  	202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,33,1,0,0,0,202,200,1,
  	0,0,0,203,208,3,36,18,0,204,205,5,16,0,0,205,207,3,36,18,0,206,204,1,
  	0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,35,1,0,0,0,
  	210,208,1,0,0,0,211,216,3,38,19,0,212,213,7,0,0,0,213,215,3,38,19,0,214,
  	212,1,0,0,0,215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,37,1,
  	0,0,0,218,216,1,0,0,0,219,224,3,40,20,0,220,221,7,1,0,0,221,223,3,40,
  	20,0,222,220,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,
  	225,39,1,0,0,0,226,224,1,0,0,0,227,232,3,42,21,0,228,229,7,2,0,0,229,
  	231,3,42,21,0,230,228,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,232,233,
  	1,0,0,0,233,41,1,0,0,0,234,232,1,0,0,0,235,240,3,44,22,0,236,237,7,3,
  	0,0,237,239,3,44,22,0,238,236,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,
  	240,241,1,0,0,0,241,43,1,0,0,0,242,240,1,0,0,0,243,244,7,4,0,0,244,247,
  	3,44,22,0,245,247,3,46,23,0,246,243,1,0,0,0,246,245,1,0,0,0,247,45,1,
  	0,0,0,248,249,6,23,-1,0,249,250,3,48,24,0,250,269,1,0,0,0,251,252,10,
  	4,0,0,252,253,5,45,0,0,253,254,3,28,14,0,254,255,5,46,0,0,255,268,1,0,
  	0,0,256,257,10,3,0,0,257,259,5,43,0,0,258,260,3,50,25,0,259,258,1,0,0,
  	0,259,260,1,0,0,0,260,261,1,0,0,0,261,268,5,44,0,0,262,263,10,2,0,0,263,
  	268,7,5,0,0,264,265,10,1,0,0,265,266,5,47,0,0,266,268,5,31,0,0,267,251,
  	1,0,0,0,267,256,1,0,0,0,267,262,1,0,0,0,267,264,1,0,0,0,268,271,1,0,0,
  	0,269,267,1,0,0,0,269,270,1,0,0,0,270,47,1,0,0,0,271,269,1,0,0,0,272,
  	284,5,41,0,0,273,284,5,40,0,0,274,284,5,37,0,0,275,284,5,38,0,0,276,284,
  	5,39,0,0,277,284,5,42,0,0,278,279,5,43,0,0,279,280,3,28,14,0,280,281,
  	5,44,0,0,281,284,1,0,0,0,282,284,3,4,2,0,283,272,1,0,0,0,283,273,1,0,
  	0,0,283,274,1,0,0,0,283,275,1,0,0,0,283,276,1,0,0,0,283,277,1,0,0,0,283,
  	278,1,0,0,0,283,282,1,0,0,0,284,49,1,0,0,0,285,290,3,28,14,0,286,287,
  	5,4,0,0,287,289,3,28,14,0,288,286,1,0,0,0,289,292,1,0,0,0,290,288,1,0,
  	0,0,290,291,1,0,0,0,291,51,1,0,0,0,292,290,1,0,0,0,293,294,7,6,0,0,294,
  	53,1,0,0,0,24,57,59,82,90,93,102,112,125,131,151,156,193,200,208,216,
  	224,232,240,246,259,267,269,283,290
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  arxcyParserStaticData = std::move(staticData);
}

}

ArxCyParser::ArxCyParser(TokenStream *input) : ArxCyParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ArxCyParser::ArxCyParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ArxCyParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *arxcyParserStaticData->atn, arxcyParserStaticData->decisionToDFA, arxcyParserStaticData->sharedContextCache, options);
}

ArxCyParser::~ArxCyParser() {
  delete _interpreter;
}

const atn::ATN& ArxCyParser::getATN() const {
  return *arxcyParserStaticData->atn;
}

std::string ArxCyParser::getGrammarFileName() const {
  return "ArxCy.g4";
}

const std::vector<std::string>& ArxCyParser::getRuleNames() const {
  return arxcyParserStaticData->ruleNames;
}

const dfa::Vocabulary& ArxCyParser::getVocabulary() const {
  return arxcyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ArxCyParser::getSerializedATN() const {
  return arxcyParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ArxCyParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArxCyParser::ProgramContext::EOF() {
  return getToken(ArxCyParser::EOF, 0);
}

std::vector<ArxCyParser::DeclarationContext *> ArxCyParser::ProgramContext::declaration() {
  return getRuleContexts<ArxCyParser::DeclarationContext>();
}

ArxCyParser::DeclarationContext* ArxCyParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<ArxCyParser::DeclarationContext>(i);
}

std::vector<ArxCyParser::Function_declContext *> ArxCyParser::ProgramContext::function_decl() {
  return getRuleContexts<ArxCyParser::Function_declContext>();
}

ArxCyParser::Function_declContext* ArxCyParser::ProgramContext::function_decl(size_t i) {
  return getRuleContext<ArxCyParser::Function_declContext>(i);
}

std::vector<ArxCyParser::StatementContext *> ArxCyParser::ProgramContext::statement() {
  return getRuleContexts<ArxCyParser::StatementContext>();
}

ArxCyParser::StatementContext* ArxCyParser::ProgramContext::statement(size_t i) {
  return getRuleContext<ArxCyParser::StatementContext>(i);
}


size_t ArxCyParser::ProgramContext::getRuleIndex() const {
  return ArxCyParser::RuleProgram;
}

void ArxCyParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ArxCyParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any ArxCyParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ProgramContext* ArxCyParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ArxCyParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17589795322056) != 0)) {
      setState(57);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ArxCyParser::T__31:
        case ArxCyParser::T__32:
        case ArxCyParser::T__33:
        case ArxCyParser::T__34:
        case ArxCyParser::T__35: {
          setState(54);
          declaration();
          break;
        }

        case ArxCyParser::T__5: {
          setState(55);
          function_decl();
          break;
        }

        case ArxCyParser::T__2:
        case ArxCyParser::T__6:
        case ArxCyParser::T__10:
        case ArxCyParser::T__11:
        case ArxCyParser::T__12:
        case ArxCyParser::T__13:
        case ArxCyParser::T__22:
        case ArxCyParser::T__23:
        case ArxCyParser::T__27:
        case ArxCyParser::T__28:
        case ArxCyParser::T__29:
        case ArxCyParser::BOOL_LITERAL:
        case ArxCyParser::CHAR_LITERAL:
        case ArxCyParser::STRING_LITERAL:
        case ArxCyParser::FLOAT_LITERAL:
        case ArxCyParser::INT_LITERAL:
        case ArxCyParser::IDENTIFIER:
        case ArxCyParser::LPAREN: {
          setState(56);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(ArxCyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ArxCyParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::TypeContext* ArxCyParser::DeclarationContext::type() {
  return getRuleContext<ArxCyParser::TypeContext>(0);
}

tree::TerminalNode* ArxCyParser::DeclarationContext::IDENTIFIER() {
  return getToken(ArxCyParser::IDENTIFIER, 0);
}

ArxCyParser::ExpressionContext* ArxCyParser::DeclarationContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}

ArxCyParser::Array_literalContext* ArxCyParser::DeclarationContext::array_literal() {
  return getRuleContext<ArxCyParser::Array_literalContext>(0);
}

tree::TerminalNode* ArxCyParser::DeclarationContext::LBRACK() {
  return getToken(ArxCyParser::LBRACK, 0);
}

tree::TerminalNode* ArxCyParser::DeclarationContext::RBRACK() {
  return getToken(ArxCyParser::RBRACK, 0);
}


size_t ArxCyParser::DeclarationContext::getRuleIndex() const {
  return ArxCyParser::RuleDeclaration;
}

void ArxCyParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ArxCyParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any ArxCyParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::DeclarationContext* ArxCyParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, ArxCyParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(64);
      type();
      setState(65);
      match(ArxCyParser::IDENTIFIER);
      setState(66);
      match(ArxCyParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(68);
      type();
      setState(69);
      match(ArxCyParser::IDENTIFIER);
      setState(70);
      match(ArxCyParser::T__1);
      setState(71);
      expression();
      setState(72);
      match(ArxCyParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      type();
      setState(75);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->lb = match(ArxCyParser::LBRACK);
      setState(76);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->rb = match(ArxCyParser::RBRACK);
      setState(77);
      match(ArxCyParser::IDENTIFIER);
      setState(78);
      match(ArxCyParser::T__1);
      setState(79);
      array_literal();
      setState(80);
      match(ArxCyParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_literalContext ------------------------------------------------------------------

ArxCyParser::Array_literalContext::Array_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::ExpressionContext *> ArxCyParser::Array_literalContext::expression() {
  return getRuleContexts<ArxCyParser::ExpressionContext>();
}

ArxCyParser::ExpressionContext* ArxCyParser::Array_literalContext::expression(size_t i) {
  return getRuleContext<ArxCyParser::ExpressionContext>(i);
}


size_t ArxCyParser::Array_literalContext::getRuleIndex() const {
  return ArxCyParser::RuleArray_literal;
}

void ArxCyParser::Array_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_literal(this);
}

void ArxCyParser::Array_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_literal(this);
}


std::any ArxCyParser::Array_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitArray_literal(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Array_literalContext* ArxCyParser::array_literal() {
  Array_literalContext *_localctx = _tracker.createInstance<Array_literalContext>(_ctx, getState());
  enterRule(_localctx, 4, ArxCyParser::RuleArray_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(ArxCyParser::T__2);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17456651304968) != 0)) {
      setState(85);
      expression();
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ArxCyParser::T__3) {
        setState(86);
        match(ArxCyParser::T__3);
        setState(87);
        expression();
        setState(92);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(95);
    match(ArxCyParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declContext ------------------------------------------------------------------

ArxCyParser::Function_declContext::Function_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::TypeContext* ArxCyParser::Function_declContext::type() {
  return getRuleContext<ArxCyParser::TypeContext>(0);
}

tree::TerminalNode* ArxCyParser::Function_declContext::IDENTIFIER() {
  return getToken(ArxCyParser::IDENTIFIER, 0);
}

tree::TerminalNode* ArxCyParser::Function_declContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

tree::TerminalNode* ArxCyParser::Function_declContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}

ArxCyParser::BlockContext* ArxCyParser::Function_declContext::block() {
  return getRuleContext<ArxCyParser::BlockContext>(0);
}

ArxCyParser::ParametersContext* ArxCyParser::Function_declContext::parameters() {
  return getRuleContext<ArxCyParser::ParametersContext>(0);
}


size_t ArxCyParser::Function_declContext::getRuleIndex() const {
  return ArxCyParser::RuleFunction_decl;
}

void ArxCyParser::Function_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_decl(this);
}

void ArxCyParser::Function_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_decl(this);
}


std::any ArxCyParser::Function_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitFunction_decl(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Function_declContext* ArxCyParser::function_decl() {
  Function_declContext *_localctx = _tracker.createInstance<Function_declContext>(_ctx, getState());
  enterRule(_localctx, 6, ArxCyParser::RuleFunction_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(ArxCyParser::T__5);
    setState(98);
    type();
    setState(99);
    match(ArxCyParser::IDENTIFIER);
    setState(100);
    match(ArxCyParser::LPAREN);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 133143986176) != 0)) {
      setState(101);
      parameters();
    }
    setState(104);
    match(ArxCyParser::RPAREN);
    setState(105);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

ArxCyParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::ParameterContext *> ArxCyParser::ParametersContext::parameter() {
  return getRuleContexts<ArxCyParser::ParameterContext>();
}

ArxCyParser::ParameterContext* ArxCyParser::ParametersContext::parameter(size_t i) {
  return getRuleContext<ArxCyParser::ParameterContext>(i);
}


size_t ArxCyParser::ParametersContext::getRuleIndex() const {
  return ArxCyParser::RuleParameters;
}

void ArxCyParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void ArxCyParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


std::any ArxCyParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ParametersContext* ArxCyParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 8, ArxCyParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    parameter();
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__3) {
      setState(108);
      match(ArxCyParser::T__3);
      setState(109);
      parameter();
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

ArxCyParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::TypeContext* ArxCyParser::ParameterContext::type() {
  return getRuleContext<ArxCyParser::TypeContext>(0);
}

tree::TerminalNode* ArxCyParser::ParameterContext::IDENTIFIER() {
  return getToken(ArxCyParser::IDENTIFIER, 0);
}


size_t ArxCyParser::ParameterContext::getRuleIndex() const {
  return ArxCyParser::RuleParameter;
}

void ArxCyParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void ArxCyParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any ArxCyParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ParameterContext* ArxCyParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, ArxCyParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    type();
    setState(116);
    match(ArxCyParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ArxCyParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::BlockContext* ArxCyParser::StatementContext::block() {
  return getRuleContext<ArxCyParser::BlockContext>(0);
}

ArxCyParser::If_statementContext* ArxCyParser::StatementContext::if_statement() {
  return getRuleContext<ArxCyParser::If_statementContext>(0);
}

ArxCyParser::For_statementContext* ArxCyParser::StatementContext::for_statement() {
  return getRuleContext<ArxCyParser::For_statementContext>(0);
}

ArxCyParser::While_statementContext* ArxCyParser::StatementContext::while_statement() {
  return getRuleContext<ArxCyParser::While_statementContext>(0);
}

ArxCyParser::Do_while_statementContext* ArxCyParser::StatementContext::do_while_statement() {
  return getRuleContext<ArxCyParser::Do_while_statementContext>(0);
}

ArxCyParser::Expression_statementContext* ArxCyParser::StatementContext::expression_statement() {
  return getRuleContext<ArxCyParser::Expression_statementContext>(0);
}

ArxCyParser::Return_statementContext* ArxCyParser::StatementContext::return_statement() {
  return getRuleContext<ArxCyParser::Return_statementContext>(0);
}


size_t ArxCyParser::StatementContext::getRuleIndex() const {
  return ArxCyParser::RuleStatement;
}

void ArxCyParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ArxCyParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any ArxCyParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::StatementContext* ArxCyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, ArxCyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      for_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(121);
      while_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(122);
      do_while_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(123);
      expression_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(124);
      return_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ArxCyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::StatementContext *> ArxCyParser::BlockContext::statement() {
  return getRuleContexts<ArxCyParser::StatementContext>();
}

ArxCyParser::StatementContext* ArxCyParser::BlockContext::statement(size_t i) {
  return getRuleContext<ArxCyParser::StatementContext>(i);
}


size_t ArxCyParser::BlockContext::getRuleIndex() const {
  return ArxCyParser::RuleBlock;
}

void ArxCyParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ArxCyParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ArxCyParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::BlockContext* ArxCyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 14, ArxCyParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(ArxCyParser::T__2);
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17456651335816) != 0)) {
      setState(128);
      statement();
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    match(ArxCyParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

ArxCyParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ArxCyParser::If_statementContext::LPAREN() {
  return getTokens(ArxCyParser::LPAREN);
}

tree::TerminalNode* ArxCyParser::If_statementContext::LPAREN(size_t i) {
  return getToken(ArxCyParser::LPAREN, i);
}

std::vector<ArxCyParser::ExpressionContext *> ArxCyParser::If_statementContext::expression() {
  return getRuleContexts<ArxCyParser::ExpressionContext>();
}

ArxCyParser::ExpressionContext* ArxCyParser::If_statementContext::expression(size_t i) {
  return getRuleContext<ArxCyParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ArxCyParser::If_statementContext::RPAREN() {
  return getTokens(ArxCyParser::RPAREN);
}

tree::TerminalNode* ArxCyParser::If_statementContext::RPAREN(size_t i) {
  return getToken(ArxCyParser::RPAREN, i);
}

std::vector<ArxCyParser::BlockContext *> ArxCyParser::If_statementContext::block() {
  return getRuleContexts<ArxCyParser::BlockContext>();
}

ArxCyParser::BlockContext* ArxCyParser::If_statementContext::block(size_t i) {
  return getRuleContext<ArxCyParser::BlockContext>(i);
}


size_t ArxCyParser::If_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleIf_statement;
}

void ArxCyParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void ArxCyParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any ArxCyParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::If_statementContext* ArxCyParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, ArxCyParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(ArxCyParser::T__6);
    setState(137);
    match(ArxCyParser::LPAREN);
    setState(138);
    expression();
    setState(139);
    match(ArxCyParser::RPAREN);
    setState(140);
    match(ArxCyParser::T__7);
    setState(141);
    block();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__8) {
      setState(142);
      match(ArxCyParser::T__8);
      setState(143);
      match(ArxCyParser::LPAREN);
      setState(144);
      expression();
      setState(145);
      match(ArxCyParser::RPAREN);
      setState(146);
      match(ArxCyParser::T__7);
      setState(147);
      block();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ArxCyParser::T__9) {
      setState(154);
      antlrcpp::downCast<If_statementContext *>(_localctx)->el = match(ArxCyParser::T__9);
      setState(155);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

ArxCyParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArxCyParser::For_statementContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

ArxCyParser::DeclarationContext* ArxCyParser::For_statementContext::declaration() {
  return getRuleContext<ArxCyParser::DeclarationContext>(0);
}

std::vector<ArxCyParser::ExpressionContext *> ArxCyParser::For_statementContext::expression() {
  return getRuleContexts<ArxCyParser::ExpressionContext>();
}

ArxCyParser::ExpressionContext* ArxCyParser::For_statementContext::expression(size_t i) {
  return getRuleContext<ArxCyParser::ExpressionContext>(i);
}

tree::TerminalNode* ArxCyParser::For_statementContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}

ArxCyParser::BlockContext* ArxCyParser::For_statementContext::block() {
  return getRuleContext<ArxCyParser::BlockContext>(0);
}


size_t ArxCyParser::For_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleFor_statement;
}

void ArxCyParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void ArxCyParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


std::any ArxCyParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::For_statementContext* ArxCyParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, ArxCyParser::RuleFor_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(ArxCyParser::T__10);
    setState(159);
    match(ArxCyParser::LPAREN);
    setState(160);
    declaration();
    setState(161);
    expression();
    setState(162);
    match(ArxCyParser::T__0);
    setState(163);
    expression();
    setState(164);
    match(ArxCyParser::RPAREN);
    setState(165);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

ArxCyParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArxCyParser::While_statementContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

ArxCyParser::ExpressionContext* ArxCyParser::While_statementContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}

tree::TerminalNode* ArxCyParser::While_statementContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}

ArxCyParser::BlockContext* ArxCyParser::While_statementContext::block() {
  return getRuleContext<ArxCyParser::BlockContext>(0);
}


size_t ArxCyParser::While_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleWhile_statement;
}

void ArxCyParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void ArxCyParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


std::any ArxCyParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::While_statementContext* ArxCyParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, ArxCyParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(ArxCyParser::T__11);
    setState(168);
    match(ArxCyParser::LPAREN);
    setState(169);
    expression();
    setState(170);
    match(ArxCyParser::RPAREN);
    setState(171);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_statementContext ------------------------------------------------------------------

ArxCyParser::Do_while_statementContext::Do_while_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::BlockContext* ArxCyParser::Do_while_statementContext::block() {
  return getRuleContext<ArxCyParser::BlockContext>(0);
}

tree::TerminalNode* ArxCyParser::Do_while_statementContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

ArxCyParser::ExpressionContext* ArxCyParser::Do_while_statementContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}

tree::TerminalNode* ArxCyParser::Do_while_statementContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}


size_t ArxCyParser::Do_while_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleDo_while_statement;
}

void ArxCyParser::Do_while_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_while_statement(this);
}

void ArxCyParser::Do_while_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_while_statement(this);
}


std::any ArxCyParser::Do_while_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitDo_while_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Do_while_statementContext* ArxCyParser::do_while_statement() {
  Do_while_statementContext *_localctx = _tracker.createInstance<Do_while_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, ArxCyParser::RuleDo_while_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(ArxCyParser::T__12);
    setState(174);
    block();
    setState(175);
    match(ArxCyParser::T__11);
    setState(176);
    match(ArxCyParser::LPAREN);
    setState(177);
    expression();
    setState(178);
    match(ArxCyParser::RPAREN);
    setState(179);
    match(ArxCyParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

ArxCyParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::ExpressionContext* ArxCyParser::Return_statementContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}


size_t ArxCyParser::Return_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleReturn_statement;
}

void ArxCyParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void ArxCyParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


std::any ArxCyParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Return_statementContext* ArxCyParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, ArxCyParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(ArxCyParser::T__13);
    setState(182);
    expression();
    setState(183);
    match(ArxCyParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

ArxCyParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::ExpressionContext* ArxCyParser::Expression_statementContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}


size_t ArxCyParser::Expression_statementContext::getRuleIndex() const {
  return ArxCyParser::RuleExpression_statement;
}

void ArxCyParser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void ArxCyParser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}


std::any ArxCyParser::Expression_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitExpression_statement(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Expression_statementContext* ArxCyParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, ArxCyParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    expression();
    setState(186);
    match(ArxCyParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ArxCyParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::AssignmentContext* ArxCyParser::ExpressionContext::assignment() {
  return getRuleContext<ArxCyParser::AssignmentContext>(0);
}


size_t ArxCyParser::ExpressionContext::getRuleIndex() const {
  return ArxCyParser::RuleExpression;
}

void ArxCyParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ArxCyParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any ArxCyParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ExpressionContext* ArxCyParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, ArxCyParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ArxCyParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::Logical_orContext* ArxCyParser::AssignmentContext::logical_or() {
  return getRuleContext<ArxCyParser::Logical_orContext>(0);
}

ArxCyParser::AssignmentContext* ArxCyParser::AssignmentContext::assignment() {
  return getRuleContext<ArxCyParser::AssignmentContext>(0);
}


size_t ArxCyParser::AssignmentContext::getRuleIndex() const {
  return ArxCyParser::RuleAssignment;
}

void ArxCyParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void ArxCyParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any ArxCyParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::AssignmentContext* ArxCyParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 30, ArxCyParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    logical_or();
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ArxCyParser::T__1) {
      setState(191);
      match(ArxCyParser::T__1);
      setState(192);
      assignment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_orContext ------------------------------------------------------------------

ArxCyParser::Logical_orContext::Logical_orContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::Logical_andContext *> ArxCyParser::Logical_orContext::logical_and() {
  return getRuleContexts<ArxCyParser::Logical_andContext>();
}

ArxCyParser::Logical_andContext* ArxCyParser::Logical_orContext::logical_and(size_t i) {
  return getRuleContext<ArxCyParser::Logical_andContext>(i);
}


size_t ArxCyParser::Logical_orContext::getRuleIndex() const {
  return ArxCyParser::RuleLogical_or;
}

void ArxCyParser::Logical_orContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_or(this);
}

void ArxCyParser::Logical_orContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_or(this);
}


std::any ArxCyParser::Logical_orContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitLogical_or(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Logical_orContext* ArxCyParser::logical_or() {
  Logical_orContext *_localctx = _tracker.createInstance<Logical_orContext>(_ctx, getState());
  enterRule(_localctx, 32, ArxCyParser::RuleLogical_or);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    logical_and();
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__14) {
      setState(196);
      antlrcpp::downCast<Logical_orContext *>(_localctx)->op = match(ArxCyParser::T__14);
      setState(197);
      logical_and();
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_andContext ------------------------------------------------------------------

ArxCyParser::Logical_andContext::Logical_andContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::EqualityContext *> ArxCyParser::Logical_andContext::equality() {
  return getRuleContexts<ArxCyParser::EqualityContext>();
}

ArxCyParser::EqualityContext* ArxCyParser::Logical_andContext::equality(size_t i) {
  return getRuleContext<ArxCyParser::EqualityContext>(i);
}


size_t ArxCyParser::Logical_andContext::getRuleIndex() const {
  return ArxCyParser::RuleLogical_and;
}

void ArxCyParser::Logical_andContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_and(this);
}

void ArxCyParser::Logical_andContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_and(this);
}


std::any ArxCyParser::Logical_andContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitLogical_and(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::Logical_andContext* ArxCyParser::logical_and() {
  Logical_andContext *_localctx = _tracker.createInstance<Logical_andContext>(_ctx, getState());
  enterRule(_localctx, 34, ArxCyParser::RuleLogical_and);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    equality();
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__15) {
      setState(204);
      antlrcpp::downCast<Logical_andContext *>(_localctx)->op = match(ArxCyParser::T__15);
      setState(205);
      equality();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

ArxCyParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::ComparisonContext *> ArxCyParser::EqualityContext::comparison() {
  return getRuleContexts<ArxCyParser::ComparisonContext>();
}

ArxCyParser::ComparisonContext* ArxCyParser::EqualityContext::comparison(size_t i) {
  return getRuleContext<ArxCyParser::ComparisonContext>(i);
}


size_t ArxCyParser::EqualityContext::getRuleIndex() const {
  return ArxCyParser::RuleEquality;
}

void ArxCyParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void ArxCyParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}


std::any ArxCyParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::EqualityContext* ArxCyParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 36, ArxCyParser::RuleEquality);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    comparison();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__16

    || _la == ArxCyParser::T__17) {
      setState(212);
      antlrcpp::downCast<EqualityContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ArxCyParser::T__16

      || _la == ArxCyParser::T__17)) {
        antlrcpp::downCast<EqualityContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(213);
      comparison();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

ArxCyParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::TermContext *> ArxCyParser::ComparisonContext::term() {
  return getRuleContexts<ArxCyParser::TermContext>();
}

ArxCyParser::TermContext* ArxCyParser::ComparisonContext::term(size_t i) {
  return getRuleContext<ArxCyParser::TermContext>(i);
}


size_t ArxCyParser::ComparisonContext::getRuleIndex() const {
  return ArxCyParser::RuleComparison;
}

void ArxCyParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void ArxCyParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}


std::any ArxCyParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ComparisonContext* ArxCyParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 38, ArxCyParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    term();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7864320) != 0)) {
      setState(220);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7864320) != 0))) {
        antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(221);
      term();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

ArxCyParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::FactorContext *> ArxCyParser::TermContext::factor() {
  return getRuleContexts<ArxCyParser::FactorContext>();
}

ArxCyParser::FactorContext* ArxCyParser::TermContext::factor(size_t i) {
  return getRuleContext<ArxCyParser::FactorContext>(i);
}


size_t ArxCyParser::TermContext::getRuleIndex() const {
  return ArxCyParser::RuleTerm;
}

void ArxCyParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void ArxCyParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any ArxCyParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::TermContext* ArxCyParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 40, ArxCyParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    factor();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__22

    || _la == ArxCyParser::T__23) {
      setState(228);
      antlrcpp::downCast<TermContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ArxCyParser::T__22

      || _la == ArxCyParser::T__23)) {
        antlrcpp::downCast<TermContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(229);
      factor();
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

ArxCyParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::UnaryContext *> ArxCyParser::FactorContext::unary() {
  return getRuleContexts<ArxCyParser::UnaryContext>();
}

ArxCyParser::UnaryContext* ArxCyParser::FactorContext::unary(size_t i) {
  return getRuleContext<ArxCyParser::UnaryContext>(i);
}


size_t ArxCyParser::FactorContext::getRuleIndex() const {
  return ArxCyParser::RuleFactor;
}

void ArxCyParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void ArxCyParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


std::any ArxCyParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::FactorContext* ArxCyParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 42, ArxCyParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    unary();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 234881024) != 0)) {
      setState(236);
      antlrcpp::downCast<FactorContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 234881024) != 0))) {
        antlrcpp::downCast<FactorContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(237);
      unary();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

ArxCyParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::UnaryContext* ArxCyParser::UnaryContext::unary() {
  return getRuleContext<ArxCyParser::UnaryContext>(0);
}

ArxCyParser::PostfixContext* ArxCyParser::UnaryContext::postfix() {
  return getRuleContext<ArxCyParser::PostfixContext>(0);
}


size_t ArxCyParser::UnaryContext::getRuleIndex() const {
  return ArxCyParser::RuleUnary;
}

void ArxCyParser::UnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary(this);
}

void ArxCyParser::UnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary(this);
}


std::any ArxCyParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::UnaryContext* ArxCyParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 44, ArxCyParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ArxCyParser::T__22:
      case ArxCyParser::T__23:
      case ArxCyParser::T__27:
      case ArxCyParser::T__28:
      case ArxCyParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(243);
        antlrcpp::downCast<UnaryContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1904214016) != 0))) {
          antlrcpp::downCast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(244);
        unary();
        break;
      }

      case ArxCyParser::T__2:
      case ArxCyParser::BOOL_LITERAL:
      case ArxCyParser::CHAR_LITERAL:
      case ArxCyParser::STRING_LITERAL:
      case ArxCyParser::FLOAT_LITERAL:
      case ArxCyParser::INT_LITERAL:
      case ArxCyParser::IDENTIFIER:
      case ArxCyParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(245);
        postfix(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixContext ------------------------------------------------------------------

ArxCyParser::PostfixContext::PostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArxCyParser::PrimaryContext* ArxCyParser::PostfixContext::primary() {
  return getRuleContext<ArxCyParser::PrimaryContext>(0);
}

ArxCyParser::PostfixContext* ArxCyParser::PostfixContext::postfix() {
  return getRuleContext<ArxCyParser::PostfixContext>(0);
}

tree::TerminalNode* ArxCyParser::PostfixContext::LBRACK() {
  return getToken(ArxCyParser::LBRACK, 0);
}

ArxCyParser::ExpressionContext* ArxCyParser::PostfixContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}

tree::TerminalNode* ArxCyParser::PostfixContext::RBRACK() {
  return getToken(ArxCyParser::RBRACK, 0);
}

tree::TerminalNode* ArxCyParser::PostfixContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

tree::TerminalNode* ArxCyParser::PostfixContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}

ArxCyParser::ArgumentsContext* ArxCyParser::PostfixContext::arguments() {
  return getRuleContext<ArxCyParser::ArgumentsContext>(0);
}

tree::TerminalNode* ArxCyParser::PostfixContext::DOT() {
  return getToken(ArxCyParser::DOT, 0);
}


size_t ArxCyParser::PostfixContext::getRuleIndex() const {
  return ArxCyParser::RulePostfix;
}

void ArxCyParser::PostfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix(this);
}

void ArxCyParser::PostfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix(this);
}


std::any ArxCyParser::PostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitPostfix(this);
  else
    return visitor->visitChildren(this);
}


ArxCyParser::PostfixContext* ArxCyParser::postfix() {
   return postfix(0);
}

ArxCyParser::PostfixContext* ArxCyParser::postfix(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ArxCyParser::PostfixContext *_localctx = _tracker.createInstance<PostfixContext>(_ctx, parentState);
  ArxCyParser::PostfixContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, ArxCyParser::RulePostfix, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(269);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(267);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix);
          setState(251);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(252);
          match(ArxCyParser::LBRACK);
          setState(253);
          expression();
          setState(254);
          match(ArxCyParser::RBRACK);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix);
          setState(256);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(257);
          match(ArxCyParser::LPAREN);
          setState(259);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 17456651304968) != 0)) {
            setState(258);
            arguments();
          }
          setState(261);
          match(ArxCyParser::RPAREN);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix);
          setState(262);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(263);
          antlrcpp::downCast<PostfixContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ArxCyParser::T__28

          || _la == ArxCyParser::T__29)) {
            antlrcpp::downCast<PostfixContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix);
          setState(264);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(265);
          match(ArxCyParser::DOT);
          setState(266);
          match(ArxCyParser::T__30);
          break;
        }

        default:
          break;
        } 
      }
      setState(271);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

ArxCyParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArxCyParser::PrimaryContext::INT_LITERAL() {
  return getToken(ArxCyParser::INT_LITERAL, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::FLOAT_LITERAL() {
  return getToken(ArxCyParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::BOOL_LITERAL() {
  return getToken(ArxCyParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::CHAR_LITERAL() {
  return getToken(ArxCyParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::STRING_LITERAL() {
  return getToken(ArxCyParser::STRING_LITERAL, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::IDENTIFIER() {
  return getToken(ArxCyParser::IDENTIFIER, 0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::LPAREN() {
  return getToken(ArxCyParser::LPAREN, 0);
}

ArxCyParser::ExpressionContext* ArxCyParser::PrimaryContext::expression() {
  return getRuleContext<ArxCyParser::ExpressionContext>(0);
}

tree::TerminalNode* ArxCyParser::PrimaryContext::RPAREN() {
  return getToken(ArxCyParser::RPAREN, 0);
}

ArxCyParser::Array_literalContext* ArxCyParser::PrimaryContext::array_literal() {
  return getRuleContext<ArxCyParser::Array_literalContext>(0);
}


size_t ArxCyParser::PrimaryContext::getRuleIndex() const {
  return ArxCyParser::RulePrimary;
}

void ArxCyParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void ArxCyParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


std::any ArxCyParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::PrimaryContext* ArxCyParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 48, ArxCyParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ArxCyParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(272);
        match(ArxCyParser::INT_LITERAL);
        break;
      }

      case ArxCyParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(273);
        match(ArxCyParser::FLOAT_LITERAL);
        break;
      }

      case ArxCyParser::BOOL_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(274);
        match(ArxCyParser::BOOL_LITERAL);
        break;
      }

      case ArxCyParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(275);
        match(ArxCyParser::CHAR_LITERAL);
        break;
      }

      case ArxCyParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(276);
        match(ArxCyParser::STRING_LITERAL);
        break;
      }

      case ArxCyParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 6);
        setState(277);
        match(ArxCyParser::IDENTIFIER);
        break;
      }

      case ArxCyParser::LPAREN: {
        enterOuterAlt(_localctx, 7);
        setState(278);
        match(ArxCyParser::LPAREN);
        setState(279);
        expression();
        setState(280);
        match(ArxCyParser::RPAREN);
        break;
      }

      case ArxCyParser::T__2: {
        enterOuterAlt(_localctx, 8);
        setState(282);
        array_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

ArxCyParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArxCyParser::ExpressionContext *> ArxCyParser::ArgumentsContext::expression() {
  return getRuleContexts<ArxCyParser::ExpressionContext>();
}

ArxCyParser::ExpressionContext* ArxCyParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<ArxCyParser::ExpressionContext>(i);
}


size_t ArxCyParser::ArgumentsContext::getRuleIndex() const {
  return ArxCyParser::RuleArguments;
}

void ArxCyParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void ArxCyParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


std::any ArxCyParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::ArgumentsContext* ArxCyParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 50, ArxCyParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    expression();
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArxCyParser::T__3) {
      setState(286);
      match(ArxCyParser::T__3);
      setState(287);
      expression();
      setState(292);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ArxCyParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ArxCyParser::TypeContext::getRuleIndex() const {
  return ArxCyParser::RuleType;
}

void ArxCyParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void ArxCyParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArxCyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any ArxCyParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArxCyVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ArxCyParser::TypeContext* ArxCyParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 52, ArxCyParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 133143986176) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ArxCyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return postfixSempred(antlrcpp::downCast<PostfixContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ArxCyParser::postfixSempred(PostfixContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void ArxCyParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  arxcyParserInitialize();
#else
  ::antlr4::internal::call_once(arxcyParserOnceFlag, arxcyParserInitialize);
#endif
}
