# cmake_learning

## Introduction

CMake is a cross-platform build system generator that simplifies the compilation and linking of C++ projects. It uses platform-independent configuration files to generate native build files for various compilers and IDEs.

## Build Process

1. **Configuration**: CMake reads `CMakeLists.txt` and generates build files (Makefiles, Visual Studio projects, etc.)
2. **Compilation**: The native build system compiles source files into object files
3. **Linking**: Object files are linked together with libraries to create executables or libraries
4. **Installation**: Built artifacts are optionally installed to system directories

## Execution Flow

```
CMakeLists.txt → cmake → Build Files → make/ninja → Executables
```

## Key Commands

- `cmake .` - Generate build files in the current directory
- `cmake --build .` - Compile the project
- `cmake --install .` - Install built artifacts
