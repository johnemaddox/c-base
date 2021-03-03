# C/C++ Base Project

This is a base project for C/C++ projects using Google Test and cmake.

- The project name is in 3 locations, search for "base_project".
- ring_buffer.h is a part of the common code library.

## Build Commands

- **./build test:** Compiles with debug flags and runs tests.
- **./build debug:** Compiles with debug flags.
- **./build release:** Compiles without debug flags.
- **./build install:** Builds release and copies headers and library files to /usr/local.
- **./build run:** Runs compiled program.
- **./build clean:** Removes ./out (build) directory.

## External Libraries

- gtest
- pthread
- common_lib (Common Code Library)

## Ubuntu Packages

```bash
sudo apt install build-essential libc6-dev-i386 gdb cmake
```
