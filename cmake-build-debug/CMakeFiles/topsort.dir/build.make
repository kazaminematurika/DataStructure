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
include CMakeFiles/topsort.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/topsort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/topsort.dir/flags.make

CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.obj: CMakeFiles/topsort.dir/flags.make
CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.obj: ../Weed11_Test/topsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.obj"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\topsort.dir\Weed11_Test\topsort.cpp.obj -c C:\cliongongzuodian\Weed11_Test\topsort.cpp

CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.i"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cliongongzuodian\Weed11_Test\topsort.cpp > CMakeFiles\topsort.dir\Weed11_Test\topsort.cpp.i

CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.s"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cliongongzuodian\Weed11_Test\topsort.cpp -o CMakeFiles\topsort.dir\Weed11_Test\topsort.cpp.s

# Object files for target topsort
topsort_OBJECTS = \
"CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.obj"

# External object files for target topsort
topsort_EXTERNAL_OBJECTS =

topsort.exe: CMakeFiles/topsort.dir/Weed11_Test/topsort.cpp.obj
topsort.exe: CMakeFiles/topsort.dir/build.make
topsort.exe: CMakeFiles/topsort.dir/linklibs.rsp
topsort.exe: CMakeFiles/topsort.dir/objects1.rsp
topsort.exe: CMakeFiles/topsort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable topsort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\topsort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/topsort.dir/build: topsort.exe
.PHONY : CMakeFiles/topsort.dir/build

CMakeFiles/topsort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\topsort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/topsort.dir/clean

CMakeFiles/topsort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cliongongzuodian C:\cliongongzuodian C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug\CMakeFiles\topsort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/topsort.dir/depend

