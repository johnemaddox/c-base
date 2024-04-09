# C/C++ Base Project

This is a base C/C++ project Google Test, cmake, and docker by way of the VScode dev containers extension. The Dockerfile can be found in .devcontainer.

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

## Container Packages

- vim
- gcc
- gdb
- make
- cmake
- googletest

## Setup

- Install Docker
- Add user to docker group
    - sudo usermod -aG docker $USER
- VScode Extensions
    - Dev Containers (Microsoft)
    - C/C++ (Microsoft)
- Remote Explorer, "open folder in container".
    - First run takes longer because environment needs to be set up.
    - C/C++ Extension should automatically install on the remote.
