# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab04.dir/flags.make

CMakeFiles/Lab04.dir/main.c.o: CMakeFiles/Lab04.dir/flags.make
CMakeFiles/Lab04.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab04.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab04.dir/main.c.o   -c "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/main.c"

CMakeFiles/Lab04.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab04.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/main.c" > CMakeFiles/Lab04.dir/main.c.i

CMakeFiles/Lab04.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab04.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/main.c" -o CMakeFiles/Lab04.dir/main.c.s

CMakeFiles/Lab04.dir/queue.c.o: CMakeFiles/Lab04.dir/flags.make
CMakeFiles/Lab04.dir/queue.c.o: ../queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lab04.dir/queue.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab04.dir/queue.c.o   -c "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/queue.c"

CMakeFiles/Lab04.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab04.dir/queue.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/queue.c" > CMakeFiles/Lab04.dir/queue.c.i

CMakeFiles/Lab04.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab04.dir/queue.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/queue.c" -o CMakeFiles/Lab04.dir/queue.c.s

# Object files for target Lab04
Lab04_OBJECTS = \
"CMakeFiles/Lab04.dir/main.c.o" \
"CMakeFiles/Lab04.dir/queue.c.o"

# External object files for target Lab04
Lab04_EXTERNAL_OBJECTS =

Lab04: CMakeFiles/Lab04.dir/main.c.o
Lab04: CMakeFiles/Lab04.dir/queue.c.o
Lab04: CMakeFiles/Lab04.dir/build.make
Lab04: CMakeFiles/Lab04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Lab04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab04.dir/build: Lab04

.PHONY : CMakeFiles/Lab04.dir/build

CMakeFiles/Lab04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab04.dir/clean

CMakeFiles/Lab04.dir/depend:
	cd "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04" "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04" "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug" "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug" "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab04/cmake-build-debug/CMakeFiles/Lab04.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab04.dir/depend

