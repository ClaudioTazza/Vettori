# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/lucifero/Scrivania/vettori/dado

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucifero/Scrivania/vettori/dado/build

# Include any dependencies generated for this target.
include random/CMakeFiles/Random.dir/depend.make

# Include the progress variables for this target.
include random/CMakeFiles/Random.dir/progress.make

# Include the compile flags for this target's objects.
include random/CMakeFiles/Random.dir/flags.make

random/CMakeFiles/Random.dir/random.c.o: random/CMakeFiles/Random.dir/flags.make
random/CMakeFiles/Random.dir/random.c.o: ../random/random.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucifero/Scrivania/vettori/dado/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object random/CMakeFiles/Random.dir/random.c.o"
	cd /home/lucifero/Scrivania/vettori/dado/build/random && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Random.dir/random.c.o   -c /home/lucifero/Scrivania/vettori/dado/random/random.c

random/CMakeFiles/Random.dir/random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Random.dir/random.c.i"
	cd /home/lucifero/Scrivania/vettori/dado/build/random && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lucifero/Scrivania/vettori/dado/random/random.c > CMakeFiles/Random.dir/random.c.i

random/CMakeFiles/Random.dir/random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Random.dir/random.c.s"
	cd /home/lucifero/Scrivania/vettori/dado/build/random && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lucifero/Scrivania/vettori/dado/random/random.c -o CMakeFiles/Random.dir/random.c.s

random/CMakeFiles/Random.dir/random.c.o.requires:

.PHONY : random/CMakeFiles/Random.dir/random.c.o.requires

random/CMakeFiles/Random.dir/random.c.o.provides: random/CMakeFiles/Random.dir/random.c.o.requires
	$(MAKE) -f random/CMakeFiles/Random.dir/build.make random/CMakeFiles/Random.dir/random.c.o.provides.build
.PHONY : random/CMakeFiles/Random.dir/random.c.o.provides

random/CMakeFiles/Random.dir/random.c.o.provides.build: random/CMakeFiles/Random.dir/random.c.o


# Object files for target Random
Random_OBJECTS = \
"CMakeFiles/Random.dir/random.c.o"

# External object files for target Random
Random_EXTERNAL_OBJECTS =

random/libRandom.a: random/CMakeFiles/Random.dir/random.c.o
random/libRandom.a: random/CMakeFiles/Random.dir/build.make
random/libRandom.a: random/CMakeFiles/Random.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucifero/Scrivania/vettori/dado/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libRandom.a"
	cd /home/lucifero/Scrivania/vettori/dado/build/random && $(CMAKE_COMMAND) -P CMakeFiles/Random.dir/cmake_clean_target.cmake
	cd /home/lucifero/Scrivania/vettori/dado/build/random && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Random.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
random/CMakeFiles/Random.dir/build: random/libRandom.a

.PHONY : random/CMakeFiles/Random.dir/build

random/CMakeFiles/Random.dir/requires: random/CMakeFiles/Random.dir/random.c.o.requires

.PHONY : random/CMakeFiles/Random.dir/requires

random/CMakeFiles/Random.dir/clean:
	cd /home/lucifero/Scrivania/vettori/dado/build/random && $(CMAKE_COMMAND) -P CMakeFiles/Random.dir/cmake_clean.cmake
.PHONY : random/CMakeFiles/Random.dir/clean

random/CMakeFiles/Random.dir/depend:
	cd /home/lucifero/Scrivania/vettori/dado/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucifero/Scrivania/vettori/dado /home/lucifero/Scrivania/vettori/dado/random /home/lucifero/Scrivania/vettori/dado/build /home/lucifero/Scrivania/vettori/dado/build/random /home/lucifero/Scrivania/vettori/dado/build/random/CMakeFiles/Random.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : random/CMakeFiles/Random.dir/depend

