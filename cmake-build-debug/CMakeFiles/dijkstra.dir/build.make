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
include CMakeFiles/dijkstra.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dijkstra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dijkstra.dir/flags.make

CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.obj: CMakeFiles/dijkstra.dir/flags.make
CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.obj: ../Weed11_Test/dijkstra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.obj"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dijkstra.dir\Weed11_Test\dijkstra.cpp.obj -c C:\cliongongzuodian\Weed11_Test\dijkstra.cpp

CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.i"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\cliongongzuodian\Weed11_Test\dijkstra.cpp > CMakeFiles\dijkstra.dir\Weed11_Test\dijkstra.cpp.i

CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.s"
	C:\gccanfangdian\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\cliongongzuodian\Weed11_Test\dijkstra.cpp -o CMakeFiles\dijkstra.dir\Weed11_Test\dijkstra.cpp.s

# Object files for target dijkstra
dijkstra_OBJECTS = \
"CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.obj"

# External object files for target dijkstra
dijkstra_EXTERNAL_OBJECTS =

dijkstra.exe: CMakeFiles/dijkstra.dir/Weed11_Test/dijkstra.cpp.obj
dijkstra.exe: CMakeFiles/dijkstra.dir/build.make
dijkstra.exe: CMakeFiles/dijkstra.dir/linklibs.rsp
dijkstra.exe: CMakeFiles/dijkstra.dir/objects1.rsp
dijkstra.exe: CMakeFiles/dijkstra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\cliongongzuodian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dijkstra.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dijkstra.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dijkstra.dir/build: dijkstra.exe

.PHONY : CMakeFiles/dijkstra.dir/build

CMakeFiles/dijkstra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dijkstra.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dijkstra.dir/clean

CMakeFiles/dijkstra.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\cliongongzuodian C:\cliongongzuodian C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug C:\cliongongzuodian\cmake-build-debug\CMakeFiles\dijkstra.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dijkstra.dir/depend
