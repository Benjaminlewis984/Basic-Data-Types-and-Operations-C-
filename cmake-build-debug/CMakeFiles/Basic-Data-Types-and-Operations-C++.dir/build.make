# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/flags.make

CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o: CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/flags.make
CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o -c "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/main.cpp"

CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/main.cpp" > CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.i

CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/main.cpp" -o CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.s

# Object files for target Basic-Data-Types-and-Operations-C++
Basic__Data__Types__and__Operations__C_______OBJECTS = \
"CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o"

# External object files for target Basic-Data-Types-and-Operations-C++
Basic__Data__Types__and__Operations__C_______EXTERNAL_OBJECTS =

Basic-Data-Types-and-Operations-C++: CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/main.cpp.o
Basic-Data-Types-and-Operations-C++: CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/build.make
Basic-Data-Types-and-Operations-C++: CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Basic-Data-Types-and-Operations-C++"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/build: Basic-Data-Types-and-Operations-C++

.PHONY : CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/build

CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/clean

CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/depend:
	cd "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-" "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-" "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug" "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug" "/Users/benjaminlewis/CSC 600/Basic-Data-Types-and-Operations-C-/cmake-build-debug/CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Basic-Data-Types-and-Operations-C++.dir/depend
