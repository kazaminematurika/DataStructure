# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\clionanzhuangchu\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\clionanzhuangchu\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\cliongongzuodian

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\cliongongzuodian\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sort2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Sort2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort2.dir/flags.make

CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.obj: CMakeFiles/Sort2.dir/flags.make
CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.obj: ../Weed16_Test/Sort2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.obj"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sort2.dir\Weed16_Test\Sort2.cpp.obj -c C:\cliongongzuodian\Weed16_Test\Sort2.cpp

CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.i"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cliongongzuodian\Weed16_Test\Sort2.cpp > CMakeFiles\Sort2.dir\Weed16_Test\Sort2.cpp.i

CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.s"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cliongongzuodian\Weed16_Test\Sort2.cpp -o CMakeFiles\Sort2.dir\Weed16_Test\Sort2.cpp.s

# Object files for target Sort2
Sort2_OBJECTS = \
"CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.obj"

# External object files for target Sort2
Sort2_EXTERNAL_OBJECTS =

Sort2.exe: CMakeFiles/Sort2.dir/Weed16_Test/Sort2.cpp.obj
Sort2.exe: CMakeFiles/Sort2.dir/build.make
Sort2.exe: CMakeFiles/Sort2.dir/linklibs.rsp
Sort2.exe: CMakeFiles/Sort2.dir/objects1.rsp
Sort2.exe: CMakeFiles/Sort2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sort2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort2.dir/build: Sort2.exe
.PHONY : CMakeFiles/Sort2.dir/build

CMakeFiles/Sort2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sort2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sort2.dir/clean

CMakeFiles/Sort2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cliongongzuodian C:\cliongongzuodian C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug\CMakeFiles\Sort2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sort2.dir/depend
