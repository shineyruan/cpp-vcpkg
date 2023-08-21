# cpp-vcpkg

Template for creating a CMake/C++ project with Vcpkg management tool.

## Usage

Use this repository as a template following the [Github template repository guideline](https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-repository-from-a-template).

## How to build (Unix/Linux)

In the project root directory, follow the standardized CMake build procedure:

```bash
mkdir build; cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1
make -j
```
