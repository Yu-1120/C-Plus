# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = D:\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build

# Include any dependencies generated for this target.
include calc/CMakeFiles/addition.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include calc/CMakeFiles/addition.dir/compiler_depend.make

# Include the progress variables for this target.
include calc/CMakeFiles/addition.dir/progress.make

# Include the compile flags for this target's objects.
include calc/CMakeFiles/addition.dir/flags.make

calc/CMakeFiles/addition.dir/addition.cpp.obj: calc/CMakeFiles/addition.dir/flags.make
calc/CMakeFiles/addition.dir/addition.cpp.obj: C:/Users/11868/Documents/GitHub/Cpp/CMake/test/src/calc/addition.cpp
calc/CMakeFiles/addition.dir/addition.cpp.obj: calc/CMakeFiles/addition.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object calc/CMakeFiles/addition.dir/addition.cpp.obj"
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT calc/CMakeFiles/addition.dir/addition.cpp.obj -MF CMakeFiles\addition.dir\addition.cpp.obj.d -o CMakeFiles\addition.dir\addition.cpp.obj -c C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src\calc\addition.cpp

calc/CMakeFiles/addition.dir/addition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addition.dir/addition.cpp.i"
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src\calc\addition.cpp > CMakeFiles\addition.dir\addition.cpp.i

calc/CMakeFiles/addition.dir/addition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addition.dir/addition.cpp.s"
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && D:\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src\calc\addition.cpp -o CMakeFiles\addition.dir\addition.cpp.s

# Object files for target addition
addition_OBJECTS = \
"CMakeFiles/addition.dir/addition.cpp.obj"

# External object files for target addition
addition_EXTERNAL_OBJECTS =

lib/libaddition.a: calc/CMakeFiles/addition.dir/addition.cpp.obj
lib/libaddition.a: calc/CMakeFiles/addition.dir/build.make
lib/libaddition.a: calc/CMakeFiles/addition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\lib\libaddition.a"
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && $(CMAKE_COMMAND) -P CMakeFiles\addition.dir\cmake_clean_target.cmake
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\addition.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
calc/CMakeFiles/addition.dir/build: lib/libaddition.a
.PHONY : calc/CMakeFiles/addition.dir/build

calc/CMakeFiles/addition.dir/clean:
	cd /d C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc && $(CMAKE_COMMAND) -P CMakeFiles\addition.dir\cmake_clean.cmake
.PHONY : calc/CMakeFiles/addition.dir/clean

calc/CMakeFiles/addition.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src C:\Users\11868\Documents\GitHub\Cpp\CMake\test\src\calc C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc C:\Users\11868\Documents\GitHub\Cpp\CMake\test\build\calc\CMakeFiles\addition.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : calc/CMakeFiles/addition.dir/depend
