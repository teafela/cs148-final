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
CMAKE_SOURCE_DIR = /Users/ronaldsardarian/Documents/git/cs148-student-repo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldsardarian/Documents/git/cs148-student-repo

# Utility rule file for hw3_copy_resources.

# Include the progress variables for this target.
include hws/hw3/CMakeFiles/hw3_copy_resources.dir/progress.make

hws/hw3/CMakeFiles/hw3_copy_resources:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/ronaldsardarian/Documents/git/cs148-student-repo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying resources "
	cd /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3 && /usr/local/Cellar/cmake/3.8.2/bin/cmake -E copy_directory /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3/resources /Users/ronaldsardarian/Documents/git/cs148-student-repo/bin

hw3_copy_resources: hws/hw3/CMakeFiles/hw3_copy_resources
hw3_copy_resources: hws/hw3/CMakeFiles/hw3_copy_resources.dir/build.make

.PHONY : hw3_copy_resources

# Rule to build all files generated by this target.
hws/hw3/CMakeFiles/hw3_copy_resources.dir/build: hw3_copy_resources

.PHONY : hws/hw3/CMakeFiles/hw3_copy_resources.dir/build

hws/hw3/CMakeFiles/hw3_copy_resources.dir/clean:
	cd /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3 && $(CMAKE_COMMAND) -P CMakeFiles/hw3_copy_resources.dir/cmake_clean.cmake
.PHONY : hws/hw3/CMakeFiles/hw3_copy_resources.dir/clean

hws/hw3/CMakeFiles/hw3_copy_resources.dir/depend:
	cd /Users/ronaldsardarian/Documents/git/cs148-student-repo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldsardarian/Documents/git/cs148-student-repo /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3 /Users/ronaldsardarian/Documents/git/cs148-student-repo /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3 /Users/ronaldsardarian/Documents/git/cs148-student-repo/hws/hw3/CMakeFiles/hw3_copy_resources.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hws/hw3/CMakeFiles/hw3_copy_resources.dir/depend

