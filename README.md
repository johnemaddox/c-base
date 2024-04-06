# C/C++ Base Project

This is a base project for C/C++ projects using Google Test and cmake.

- The project name comes from the base directory name and is used in 3 locations. Be aware of this when creating a base project directory.
    - .vscode/launch.json
    - build
    - CMakeLists.txt

## Build Commands

- **./build test:** Compiles with debug flags and runs tests.
- **./build debug:** Compiles with debug flags.
- **./build release:** Compiles without debug flags.
- **./build run:** Runs compiled program.
- **./build clean:** Removes ./out (build) directory.

## External Libraries

- gtest

## Ubuntu Packages

```bash
sudo apt install build-essential gdb cmake
```
