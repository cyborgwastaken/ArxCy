# CMakeLists.txt using pkg-config for reliability
cmake_minimum_required(VERSION 3.10)
project(ArxCy)

# Use the C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find PkgConfig, which will find ANTLR4 for us
find_package(PkgConfig REQUIRED)

# Use PkgConfig to find the antlr4-runtime package
# This sets the ANTLR4_INCLUDE_DIRS and ANTLR4_LIBRARIES variables
pkg_check_modules(ANTLR4 REQUIRED antlr4-runtime)

# Add all your .cpp files to the project
# This includes the generated ANTLR files and your visitor
file(GLOB_RECURSE SOURCES "*.cpp")

# Create the executable
add_executable(arxcy ${SOURCES})

# Link the executable against the ANTLR4 runtime
# using the variables found by PkgConfig
target_include_directories(arxcy PRIVATE ${ANTLR4_INCLUDE_DIRS})
target_link_libraries(arxcy PRIVATE ${ANTLR4_LIBRARIES})


# --- CPack Installer Configuration ---
# This part remains the same
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_CONTACT "Cyborg mrcyborgpro@gmail.com")

install(TARGETS arxcy DESTINATION bin)

include(CPack)
