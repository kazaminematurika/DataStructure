# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
include CMakeFiles/Test2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test2.dir/flags.make

CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj: CMakeFiles/Test2.dir/flags.make
CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj: CMakeFiles/Test2.dir/includes_CXX.rsp
CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj: ../Weed2_Test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test2.dir\Weed2_Test\main.cpp.obj -c C:\cliongongzuodian\Weed2_Test\main.cpp

CMakeFiles/Test2.dir/Weed2_Test/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test2.dir/Weed2_Test/main.cpp.i"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cliongongzuodian\Weed2_Test\main.cpp > CMakeFiles\Test2.dir\Weed2_Test\main.cpp.i

CMakeFiles/Test2.dir/Weed2_Test/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test2.dir/Weed2_Test/main.cpp.s"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cliongongzuodian\Weed2_Test\main.cpp -o CMakeFiles\Test2.dir\Weed2_Test\main.cpp.s

# Object files for target Test2
Test2_OBJECTS = \
"CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj"

# External object files for target Test2
Test2_EXTERNAL_OBJECTS =

Test2.exe: CMakeFiles/Test2.dir/Weed2_Test/main.cpp.obj
Test2.exe: CMakeFiles/Test2.dir/build.make
Test2.exe: libcliongongzuodian.a
Test2.exe: CMakeFiles/Test2.dir/linklibs.rsp
Test2.exe: CMakeFiles/Test2.dir/objects1.rsp
Test2.exe: CMakeFiles/Test2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test2.dir/build: Test2.exe

.PHONY : CMakeFiles/Test2.dir/build

CMakeFiles/Test2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test2.dir/clean

CMakeFiles/Test2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cliongongzuodian C:\cliongongzuodian C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug\CMakeFiles\Test2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test2.dir/depend
