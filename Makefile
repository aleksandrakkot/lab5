# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\aleks\Desktop\Lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\aleks\Desktop\Lab3\build

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\aleks\Desktop\Lab3\build\CMakeFiles C:\Users\aleks\Desktop\Lab3\build\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\aleks\Desktop\Lab3\build\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named test

# Build rule for target.
test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 test
.PHONY : test

# fast build rule for target.
test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/build
.PHONY : test/fast

src/Lab3.obj: src/Lab3.cpp.obj

.PHONY : src/Lab3.obj

# target to build an object file
src/Lab3.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Lab3.cpp.obj
.PHONY : src/Lab3.cpp.obj

src/Lab3.i: src/Lab3.cpp.i

.PHONY : src/Lab3.i

# target to preprocess a source file
src/Lab3.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Lab3.cpp.i
.PHONY : src/Lab3.cpp.i

src/Lab3.s: src/Lab3.cpp.s

.PHONY : src/Lab3.s

# target to generate assembly for a file
src/Lab3.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Lab3.cpp.s
.PHONY : src/Lab3.cpp.s

src/Menu.obj: src/Menu.cpp.obj

.PHONY : src/Menu.obj

# target to build an object file
src/Menu.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Menu.cpp.obj
.PHONY : src/Menu.cpp.obj

src/Menu.i: src/Menu.cpp.i

.PHONY : src/Menu.i

# target to preprocess a source file
src/Menu.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Menu.cpp.i
.PHONY : src/Menu.cpp.i

src/Menu.s: src/Menu.cpp.s

.PHONY : src/Menu.s

# target to generate assembly for a file
src/Menu.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\test.dir\build.make CMakeFiles/test.dir/src/Menu.cpp.s
.PHONY : src/Menu.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... test
	@echo ... src/Lab3.obj
	@echo ... src/Lab3.i
	@echo ... src/Lab3.s
	@echo ... src/Menu.obj
	@echo ... src/Menu.i
	@echo ... src/Menu.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
