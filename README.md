
# ArxCy Language Transpiler

A simple, educational transpiler for the ArxCy language, built with C++ and ANTLR4. This project takes source code written in ArxCy (`.arx` files) and translates it into standard C code.

## About The Project

ArxCy is a small, C-like language that supports a variety of modern features, including:
* **Static Typing**: `int`, `flt`, `char`, `bool`, `str`
* **Control Flow**: `if-then-else`, `for`, `while`, `do-while` loops
* **Arrays**: Declaration, initialization, element access, and a `.length` property
* **Expressions**: Full support for arithmetic, logical, and comparison operators
* **Built-in Functions**: A `print()` function with support for basic string concatenation

This project serves as a practical example of compiler construction principles, using the powerful ANTLR4 parser generator to handle syntax analysis and a custom C++ visitor to perform the code generation.

### Built With
* [C++17](https://isocpp.org/)
* [ANTLR4 C++ Runtime](https://github.com/antlr/antlr4/tree/master/runtime/Cpp)
* [CMake](https://cmake.org/)

## Getting Started

Follow these instructions to get a local copy up and running for development and testing.

### Prerequisites

You will need the following tools installed on your system:
* **A C++ Compiler**:
    * **Windows**: Visual Studio (with "Desktop development with C++" workload)
    * **macOS**: Xcode Command Line Tools
    * **Linux**: `build-essential` (or GCC/Clang)
* **CMake**: Version 3.10 or higher. [Download here](https://cmake.org/download/).
* **Java Development Kit (JDK)**: Version 8 or higher (required by the ANTLR tool). [Download here](https://adoptium.net/).

### Installation & Build

1.  **Clone the repository:**
    ```sh
    git clone https://github.com/cyborgwastaken/ArxCy.git
    cd ArxCy
    ```

2.  **Initialize the ANTLR4 C++ Runtime Submodule:**
    The ANTLR4 runtime is included as a Git submodule. Initialize it with this command:
    ```sh
    git submodule update --init --recursive
    ```

3.  **Configure and Build with CMake:**
    ```sh
    # Create a build directory
    mkdir build
    cd build

    # Configure the project
    cmake ..

    # Compile the 'arxcy' executable
    # On Windows (from a Developer Command Prompt for VS)
    cmake --build . --config Release
    # On macOS/Linux
    make
    ```
    The final `arxcy` executable will be in the `build` directory.

## Usage

1.  **Write some ArxCy code** in a file (e.g., `test.arx`).
    ```cpp
    // test.arx
    int[] my_array = {10, 20, 30};
    print("The length of the array is: " + my_array.length);

    for (int i = 0; i < my_array.length; i++) {
        my_array[i] = my_array[i] * 2;
        print(my_array[i]);
    }
    ```

2.  **Run the transpiler** from the `build` directory:
    ```sh
    ./arxcy ../test.arx
    ```

3.  **Compile and run the generated C code:**
    This will create an `output.c` file. Compile it with your C compiler:
    ```sh
    gcc output.c -o output
    ./output
    ```

## License

Distributed under the MIT License. See `LICENSE.txt` for more information.