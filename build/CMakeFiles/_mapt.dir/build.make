# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CPP\test_algebra

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CPP\test_algebra\build

# Include any dependencies generated for this target.
include CMakeFiles/_mapt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/_mapt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/_mapt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_mapt.dir/flags.make

CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj: CMakeFiles/_mapt.dir/flags.make
CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj: CMakeFiles/_mapt.dir/includes_CXX.rsp
CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj: C:/CPP/test_algebra/sources/database/MapTabel.cpp
CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj: CMakeFiles/_mapt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\CPP\test_algebra\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj -MF CMakeFiles\_mapt.dir\sources\database\MapTabel.cpp.obj.d -o CMakeFiles\_mapt.dir\sources\database\MapTabel.cpp.obj -c C:\CPP\test_algebra\sources\database\MapTabel.cpp

CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CPP\test_algebra\sources\database\MapTabel.cpp > CMakeFiles\_mapt.dir\sources\database\MapTabel.cpp.i

CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CPP\test_algebra\sources\database\MapTabel.cpp -o CMakeFiles\_mapt.dir\sources\database\MapTabel.cpp.s

# Object files for target _mapt
_mapt_OBJECTS = \
"CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj"

# External object files for target _mapt
_mapt_EXTERNAL_OBJECTS =

lib_mapt.a: CMakeFiles/_mapt.dir/sources/database/MapTabel.cpp.obj
lib_mapt.a: CMakeFiles/_mapt.dir/build.make
lib_mapt.a: CMakeFiles/_mapt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\CPP\test_algebra\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library lib_mapt.a"
	$(CMAKE_COMMAND) -P CMakeFiles\_mapt.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_mapt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_mapt.dir/build: lib_mapt.a
.PHONY : CMakeFiles/_mapt.dir/build

CMakeFiles/_mapt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_mapt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_mapt.dir/clean

CMakeFiles/_mapt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CPP\test_algebra C:\CPP\test_algebra C:\CPP\test_algebra\build C:\CPP\test_algebra\build C:\CPP\test_algebra\build\CMakeFiles\_mapt.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/_mapt.dir/depend

