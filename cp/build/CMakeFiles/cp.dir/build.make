# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ani/Рабочий стол/linux_cmd/cp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ani/Рабочий стол/linux_cmd/cp/build"

# Include any dependencies generated for this target.
include CMakeFiles/cp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cp.dir/flags.make

CMakeFiles/cp.dir/cp.c.o: CMakeFiles/cp.dir/flags.make
CMakeFiles/cp.dir/cp.c.o: ../cp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ani/Рабочий стол/linux_cmd/cp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cp.dir/cp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cp.dir/cp.c.o   -c "/home/ani/Рабочий стол/linux_cmd/cp/cp.c"

CMakeFiles/cp.dir/cp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cp.dir/cp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/ani/Рабочий стол/linux_cmd/cp/cp.c" > CMakeFiles/cp.dir/cp.c.i

CMakeFiles/cp.dir/cp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cp.dir/cp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/ani/Рабочий стол/linux_cmd/cp/cp.c" -o CMakeFiles/cp.dir/cp.c.s

# Object files for target cp
cp_OBJECTS = \
"CMakeFiles/cp.dir/cp.c.o"

# External object files for target cp
cp_EXTERNAL_OBJECTS =

cp: CMakeFiles/cp.dir/cp.c.o
cp: CMakeFiles/cp.dir/build.make
cp: CMakeFiles/cp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ani/Рабочий стол/linux_cmd/cp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cp.dir/build: cp

.PHONY : CMakeFiles/cp.dir/build

CMakeFiles/cp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cp.dir/clean

CMakeFiles/cp.dir/depend:
	cd "/home/ani/Рабочий стол/linux_cmd/cp/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ani/Рабочий стол/linux_cmd/cp" "/home/ani/Рабочий стол/linux_cmd/cp" "/home/ani/Рабочий стол/linux_cmd/cp/build" "/home/ani/Рабочий стол/linux_cmd/cp/build" "/home/ani/Рабочий стол/linux_cmd/cp/build/CMakeFiles/cp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cp.dir/depend
