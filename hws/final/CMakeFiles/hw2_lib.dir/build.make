# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.8.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.8.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ronaldsardarian/Documents/git/cs148-final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldsardarian/Documents/git/cs148-final

# Include any dependencies generated for this target.
include hws/hw2/CMakeFiles/hw2_lib.dir/depend.make

# Include the progress variables for this target.
include hws/hw2/CMakeFiles/hw2_lib.dir/progress.make

# Include the compile flags for this target's objects.
include hws/hw2/CMakeFiles/hw2_lib.dir/flags.make

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o: hws/hw2/CMakeFiles/hw2_lib.dir/flags.make
hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o: hws/hw2/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldsardarian/Documents/git/cs148-final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o"
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw2_lib.dir/main.cpp.o -c /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2/main.cpp

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw2_lib.dir/main.cpp.i"
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2/main.cpp > CMakeFiles/hw2_lib.dir/main.cpp.i

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw2_lib.dir/main.cpp.s"
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2/main.cpp -o CMakeFiles/hw2_lib.dir/main.cpp.s

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.requires:

.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.requires

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.provides: hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.requires
	$(MAKE) -f hws/hw2/CMakeFiles/hw2_lib.dir/build.make hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.provides.build
.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.provides

hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.provides.build: hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o


# Object files for target hw2_lib
hw2_lib_OBJECTS = \
"CMakeFiles/hw2_lib.dir/main.cpp.o"

# External object files for target hw2_lib
hw2_lib_EXTERNAL_OBJECTS =

lib/libhw2.a: hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o
lib/libhw2.a: hws/hw2/CMakeFiles/hw2_lib.dir/build.make
lib/libhw2.a: hws/hw2/CMakeFiles/hw2_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ronaldsardarian/Documents/git/cs148-final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libhw2.a"
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && $(CMAKE_COMMAND) -P CMakeFiles/hw2_lib.dir/cmake_clean_target.cmake
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw2_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
hws/hw2/CMakeFiles/hw2_lib.dir/build: lib/libhw2.a

.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/build

hws/hw2/CMakeFiles/hw2_lib.dir/requires: hws/hw2/CMakeFiles/hw2_lib.dir/main.cpp.o.requires

.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/requires

hws/hw2/CMakeFiles/hw2_lib.dir/clean:
	cd /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 && $(CMAKE_COMMAND) -P CMakeFiles/hw2_lib.dir/cmake_clean.cmake
.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/clean

hws/hw2/CMakeFiles/hw2_lib.dir/depend:
	cd /Users/ronaldsardarian/Documents/git/cs148-final && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldsardarian/Documents/git/cs148-final /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 /Users/ronaldsardarian/Documents/git/cs148-final /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2 /Users/ronaldsardarian/Documents/git/cs148-final/hws/hw2/CMakeFiles/hw2_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hws/hw2/CMakeFiles/hw2_lib.dir/depend

