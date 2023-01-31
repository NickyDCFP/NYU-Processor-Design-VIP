* Author: Nicky Kriplani
* Date: January 30, 2023

Answer the following:

1) The paths used by `target_sources` and `target_include_directories` are relative to the directory that contains the CMakeLists.txt file.

2) `cmake` is a meta-build system, meaning that it generates the files necessary for build systems like `make` and `ninja` to actually build the final binaries. While `cmake` does have a build command, this command calls on build systems to help it actually build the files.

3) It is important to run `cmake` in its own directory so that the files that it dumps don't dirty the source code directories.