# Travis-CI-cpp14-clang-on-Linux

## TL;DR
Get Clang working with C++14 on Linux on Travis-CI.

## About
Travis uses Ubuntu 12.04 which has old C++ headers.

Getting clang to use modern C++ feautures needs newer headers, this seems like
a hard problem to solve on Travis-CI. 

This project is intended to provide an environment to find solution to this
problem by modifying the travis and CMake build config files only (no changes
to the source file).

## Build
I've set up a Python script to build the project by triggering CMake (Swift
does this too):

```
python ./scripts/build.py
```

will run CMake and create a build. 

## Getting involved
I've spent more time than I'd care to admit to trying to solve this problem -
please take a look and have a go!

Steps:

1) Fork this repository
2) Create a named branch.
3) Make changes to CMakeLists.txt and/or .travis.yml
4) Add a PR.
5) SUCCESS = Travis-CI builds pass.
6) WHILE NOT SUCCESS GOTO 2
7) Write article for Overload.

