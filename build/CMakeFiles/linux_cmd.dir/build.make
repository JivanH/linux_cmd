# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vardan/linux_cmd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vardan/linux_cmd/build

# Include any dependencies generated for this target.
include CMakeFiles/linux_cmd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/linux_cmd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/linux_cmd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linux_cmd.dir/flags.make

CMakeFiles/linux_cmd.dir/cd/cd.cpp.o: CMakeFiles/linux_cmd.dir/flags.make
CMakeFiles/linux_cmd.dir/cd/cd.cpp.o: ../cd/cd.cpp
CMakeFiles/linux_cmd.dir/cd/cd.cpp.o: CMakeFiles/linux_cmd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linux_cmd.dir/cd/cd.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linux_cmd.dir/cd/cd.cpp.o -MF CMakeFiles/linux_cmd.dir/cd/cd.cpp.o.d -o CMakeFiles/linux_cmd.dir/cd/cd.cpp.o -c /home/vardan/linux_cmd/cd/cd.cpp

CMakeFiles/linux_cmd.dir/cd/cd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linux_cmd.dir/cd/cd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardan/linux_cmd/cd/cd.cpp > CMakeFiles/linux_cmd.dir/cd/cd.cpp.i

CMakeFiles/linux_cmd.dir/cd/cd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linux_cmd.dir/cd/cd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardan/linux_cmd/cd/cd.cpp -o CMakeFiles/linux_cmd.dir/cd/cd.cpp.s

CMakeFiles/linux_cmd.dir/cp/cp.cpp.o: CMakeFiles/linux_cmd.dir/flags.make
CMakeFiles/linux_cmd.dir/cp/cp.cpp.o: ../cp/cp.cpp
CMakeFiles/linux_cmd.dir/cp/cp.cpp.o: CMakeFiles/linux_cmd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linux_cmd.dir/cp/cp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linux_cmd.dir/cp/cp.cpp.o -MF CMakeFiles/linux_cmd.dir/cp/cp.cpp.o.d -o CMakeFiles/linux_cmd.dir/cp/cp.cpp.o -c /home/vardan/linux_cmd/cp/cp.cpp

CMakeFiles/linux_cmd.dir/cp/cp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linux_cmd.dir/cp/cp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardan/linux_cmd/cp/cp.cpp > CMakeFiles/linux_cmd.dir/cp/cp.cpp.i

CMakeFiles/linux_cmd.dir/cp/cp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linux_cmd.dir/cp/cp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardan/linux_cmd/cp/cp.cpp -o CMakeFiles/linux_cmd.dir/cp/cp.cpp.s

CMakeFiles/linux_cmd.dir/rm/rm.cpp.o: CMakeFiles/linux_cmd.dir/flags.make
CMakeFiles/linux_cmd.dir/rm/rm.cpp.o: ../rm/rm.cpp
CMakeFiles/linux_cmd.dir/rm/rm.cpp.o: CMakeFiles/linux_cmd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/linux_cmd.dir/rm/rm.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linux_cmd.dir/rm/rm.cpp.o -MF CMakeFiles/linux_cmd.dir/rm/rm.cpp.o.d -o CMakeFiles/linux_cmd.dir/rm/rm.cpp.o -c /home/vardan/linux_cmd/rm/rm.cpp

CMakeFiles/linux_cmd.dir/rm/rm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linux_cmd.dir/rm/rm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardan/linux_cmd/rm/rm.cpp > CMakeFiles/linux_cmd.dir/rm/rm.cpp.i

CMakeFiles/linux_cmd.dir/rm/rm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linux_cmd.dir/rm/rm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardan/linux_cmd/rm/rm.cpp -o CMakeFiles/linux_cmd.dir/rm/rm.cpp.s

CMakeFiles/linux_cmd.dir/mv/mv.cpp.o: CMakeFiles/linux_cmd.dir/flags.make
CMakeFiles/linux_cmd.dir/mv/mv.cpp.o: ../mv/mv.cpp
CMakeFiles/linux_cmd.dir/mv/mv.cpp.o: CMakeFiles/linux_cmd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/linux_cmd.dir/mv/mv.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linux_cmd.dir/mv/mv.cpp.o -MF CMakeFiles/linux_cmd.dir/mv/mv.cpp.o.d -o CMakeFiles/linux_cmd.dir/mv/mv.cpp.o -c /home/vardan/linux_cmd/mv/mv.cpp

CMakeFiles/linux_cmd.dir/mv/mv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linux_cmd.dir/mv/mv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardan/linux_cmd/mv/mv.cpp > CMakeFiles/linux_cmd.dir/mv/mv.cpp.i

CMakeFiles/linux_cmd.dir/mv/mv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linux_cmd.dir/mv/mv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardan/linux_cmd/mv/mv.cpp -o CMakeFiles/linux_cmd.dir/mv/mv.cpp.s

CMakeFiles/linux_cmd.dir/grep/grep.cpp.o: CMakeFiles/linux_cmd.dir/flags.make
CMakeFiles/linux_cmd.dir/grep/grep.cpp.o: ../grep/grep.cpp
CMakeFiles/linux_cmd.dir/grep/grep.cpp.o: CMakeFiles/linux_cmd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/linux_cmd.dir/grep/grep.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linux_cmd.dir/grep/grep.cpp.o -MF CMakeFiles/linux_cmd.dir/grep/grep.cpp.o.d -o CMakeFiles/linux_cmd.dir/grep/grep.cpp.o -c /home/vardan/linux_cmd/grep/grep.cpp

CMakeFiles/linux_cmd.dir/grep/grep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linux_cmd.dir/grep/grep.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vardan/linux_cmd/grep/grep.cpp > CMakeFiles/linux_cmd.dir/grep/grep.cpp.i

CMakeFiles/linux_cmd.dir/grep/grep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linux_cmd.dir/grep/grep.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vardan/linux_cmd/grep/grep.cpp -o CMakeFiles/linux_cmd.dir/grep/grep.cpp.s

# Object files for target linux_cmd
linux_cmd_OBJECTS = \
"CMakeFiles/linux_cmd.dir/cd/cd.cpp.o" \
"CMakeFiles/linux_cmd.dir/cp/cp.cpp.o" \
"CMakeFiles/linux_cmd.dir/rm/rm.cpp.o" \
"CMakeFiles/linux_cmd.dir/mv/mv.cpp.o" \
"CMakeFiles/linux_cmd.dir/grep/grep.cpp.o"

# External object files for target linux_cmd
linux_cmd_EXTERNAL_OBJECTS =

linux_cmd: CMakeFiles/linux_cmd.dir/cd/cd.cpp.o
linux_cmd: CMakeFiles/linux_cmd.dir/cp/cp.cpp.o
linux_cmd: CMakeFiles/linux_cmd.dir/rm/rm.cpp.o
linux_cmd: CMakeFiles/linux_cmd.dir/mv/mv.cpp.o
linux_cmd: CMakeFiles/linux_cmd.dir/grep/grep.cpp.o
linux_cmd: CMakeFiles/linux_cmd.dir/build.make
linux_cmd: CMakeFiles/linux_cmd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vardan/linux_cmd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable linux_cmd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linux_cmd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linux_cmd.dir/build: linux_cmd
.PHONY : CMakeFiles/linux_cmd.dir/build

CMakeFiles/linux_cmd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linux_cmd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linux_cmd.dir/clean

CMakeFiles/linux_cmd.dir/depend:
	cd /home/vardan/linux_cmd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vardan/linux_cmd /home/vardan/linux_cmd /home/vardan/linux_cmd/build /home/vardan/linux_cmd/build /home/vardan/linux_cmd/build/CMakeFiles/linux_cmd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linux_cmd.dir/depend

