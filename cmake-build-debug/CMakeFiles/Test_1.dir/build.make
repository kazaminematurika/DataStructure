# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
include CMakeFiles/Test_1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Test_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_1.dir/flags.make

CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.obj: CMakeFiles/Test_1.dir/flags.make
CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.obj: ../Weed1_Test/Test_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.obj"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test_1.dir\Weed1_Test\Test_1.cpp.obj -c C:\cliongongzuodian\Weed1_Test\Test_1.cpp

CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.i"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cliongongzuodian\Weed1_Test\Test_1.cpp > CMakeFiles\Test_1.dir\Weed1_Test\Test_1.cpp.i

CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.s"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cliongongzuodian\Weed1_Test\Test_1.cpp -o CMakeFiles\Test_1.dir\Weed1_Test\Test_1.cpp.s

# Object files for target Test_1
Test_1_OBJECTS = \
"CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.obj"

# External object files for target Test_1
Test_1_EXTERNAL_OBJECTS =

Test_1.exe: CMakeFiles/Test_1.dir/Weed1_Test/Test_1.cpp.obj
Test_1.exe: CMakeFiles/Test_1.dir/build.make
Test_1.exe: CMakeFiles/Test_1.dir/linklibs.rsp
Test_1.exe: CMakeFiles/Test_1.dir/objects1.rsp
Test_1.exe: CMakeFiles/Test_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_1.dir/build: Test_1.exe
.PHONY : CMakeFiles/Test_1.dir/build

CMakeFiles/Test_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test_1.dir/clean

CMakeFiles/Test_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cliongongzuodian C:\cliongongzuodian C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug\CMakeFiles\Test_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test_1.dir/depend

