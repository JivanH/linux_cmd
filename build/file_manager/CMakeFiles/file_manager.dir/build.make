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
CMAKE_SOURCE_DIR = /home/ines/linux_cmd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ines/linux_cmd/build

# Include any dependencies generated for this target.
include file_manager/CMakeFiles/file_manager.dir/depend.make

# Include the progress variables for this target.
include file_manager/CMakeFiles/file_manager.dir/progress.make

# Include the compile flags for this target's objects.
include file_manager/CMakeFiles/file_manager.dir/flags.make

file_manager/CMakeFiles/file_manager.dir/file_manager.c.o: file_manager/CMakeFiles/file_manager.dir/flags.make
file_manager/CMakeFiles/file_manager.dir/file_manager.c.o: ../file_manager/file_manager.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ines/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object file_manager/CMakeFiles/file_manager.dir/file_manager.c.o"
	cd /home/ines/linux_cmd/build/file_manager && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/file_manager.dir/file_manager.c.o   -c /home/ines/linux_cmd/file_manager/file_manager.c

file_manager/CMakeFiles/file_manager.dir/file_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/file_manager.dir/file_manager.c.i"
	cd /home/ines/linux_cmd/build/file_manager && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ines/linux_cmd/file_manager/file_manager.c > CMakeFiles/file_manager.dir/file_manager.c.i

file_manager/CMakeFiles/file_manager.dir/file_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/file_manager.dir/file_manager.c.s"
	cd /home/ines/linux_cmd/build/file_manager && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ines/linux_cmd/file_manager/file_manager.c -o CMakeFiles/file_manager.dir/file_manager.c.s

# Object files for target file_manager
file_manager_OBJECTS = \
"CMakeFiles/file_manager.dir/file_manager.c.o"

# External object files for target file_manager
file_manager_EXTERNAL_OBJECTS =

file_manager/file_manager: file_manager/CMakeFiles/file_manager.dir/file_manager.c.o
file_manager/file_manager: file_manager/CMakeFiles/file_manager.dir/build.make
file_manager/file_manager: file_manager/CMakeFiles/file_manager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ines/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable file_manager"
	cd /home/ines/linux_cmd/build/file_manager && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file_manager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
file_manager/CMakeFiles/file_manager.dir/build: file_manager/file_manager

.PHONY : file_manager/CMakeFiles/file_manager.dir/build

file_manager/CMakeFiles/file_manager.dir/clean:
	cd /home/ines/linux_cmd/build/file_manager && $(CMAKE_COMMAND) -P CMakeFiles/file_manager.dir/cmake_clean.cmake
.PHONY : file_manager/CMakeFiles/file_manager.dir/clean

file_manager/CMakeFiles/file_manager.dir/depend:
	cd /home/ines/linux_cmd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ines/linux_cmd /home/ines/linux_cmd/file_manager /home/ines/linux_cmd/build /home/ines/linux_cmd/build/file_manager /home/ines/linux_cmd/build/file_manager/CMakeFiles/file_manager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : file_manager/CMakeFiles/file_manager.dir/depend

