# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/QuestionC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QuestionC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QuestionC.dir/flags.make

CMakeFiles/QuestionC.dir/main.cpp.o: CMakeFiles/QuestionC.dir/flags.make
CMakeFiles/QuestionC.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QuestionC.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QuestionC.dir/main.cpp.o -c /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/main.cpp

CMakeFiles/QuestionC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuestionC.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/main.cpp > CMakeFiles/QuestionC.dir/main.cpp.i

CMakeFiles/QuestionC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuestionC.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/main.cpp -o CMakeFiles/QuestionC.dir/main.cpp.s

CMakeFiles/QuestionC.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/QuestionC.dir/main.cpp.o.requires

CMakeFiles/QuestionC.dir/main.cpp.o.provides: CMakeFiles/QuestionC.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/QuestionC.dir/build.make CMakeFiles/QuestionC.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/QuestionC.dir/main.cpp.o.provides

CMakeFiles/QuestionC.dir/main.cpp.o.provides.build: CMakeFiles/QuestionC.dir/main.cpp.o


CMakeFiles/QuestionC.dir/LRUCache.cpp.o: CMakeFiles/QuestionC.dir/flags.make
CMakeFiles/QuestionC.dir/LRUCache.cpp.o: ../LRUCache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QuestionC.dir/LRUCache.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QuestionC.dir/LRUCache.cpp.o -c /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/LRUCache.cpp

CMakeFiles/QuestionC.dir/LRUCache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuestionC.dir/LRUCache.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/LRUCache.cpp > CMakeFiles/QuestionC.dir/LRUCache.cpp.i

CMakeFiles/QuestionC.dir/LRUCache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuestionC.dir/LRUCache.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/LRUCache.cpp -o CMakeFiles/QuestionC.dir/LRUCache.cpp.s

CMakeFiles/QuestionC.dir/LRUCache.cpp.o.requires:

.PHONY : CMakeFiles/QuestionC.dir/LRUCache.cpp.o.requires

CMakeFiles/QuestionC.dir/LRUCache.cpp.o.provides: CMakeFiles/QuestionC.dir/LRUCache.cpp.o.requires
	$(MAKE) -f CMakeFiles/QuestionC.dir/build.make CMakeFiles/QuestionC.dir/LRUCache.cpp.o.provides.build
.PHONY : CMakeFiles/QuestionC.dir/LRUCache.cpp.o.provides

CMakeFiles/QuestionC.dir/LRUCache.cpp.o.provides.build: CMakeFiles/QuestionC.dir/LRUCache.cpp.o


CMakeFiles/QuestionC.dir/Server.cpp.o: CMakeFiles/QuestionC.dir/flags.make
CMakeFiles/QuestionC.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QuestionC.dir/Server.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QuestionC.dir/Server.cpp.o -c /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/Server.cpp

CMakeFiles/QuestionC.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuestionC.dir/Server.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/Server.cpp > CMakeFiles/QuestionC.dir/Server.cpp.i

CMakeFiles/QuestionC.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuestionC.dir/Server.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/Server.cpp -o CMakeFiles/QuestionC.dir/Server.cpp.s

CMakeFiles/QuestionC.dir/Server.cpp.o.requires:

.PHONY : CMakeFiles/QuestionC.dir/Server.cpp.o.requires

CMakeFiles/QuestionC.dir/Server.cpp.o.provides: CMakeFiles/QuestionC.dir/Server.cpp.o.requires
	$(MAKE) -f CMakeFiles/QuestionC.dir/build.make CMakeFiles/QuestionC.dir/Server.cpp.o.provides.build
.PHONY : CMakeFiles/QuestionC.dir/Server.cpp.o.provides

CMakeFiles/QuestionC.dir/Server.cpp.o.provides.build: CMakeFiles/QuestionC.dir/Server.cpp.o


# Object files for target QuestionC
QuestionC_OBJECTS = \
"CMakeFiles/QuestionC.dir/main.cpp.o" \
"CMakeFiles/QuestionC.dir/LRUCache.cpp.o" \
"CMakeFiles/QuestionC.dir/Server.cpp.o"

# External object files for target QuestionC
QuestionC_EXTERNAL_OBJECTS =

QuestionC: CMakeFiles/QuestionC.dir/main.cpp.o
QuestionC: CMakeFiles/QuestionC.dir/LRUCache.cpp.o
QuestionC: CMakeFiles/QuestionC.dir/Server.cpp.o
QuestionC: CMakeFiles/QuestionC.dir/build.make
QuestionC: CMakeFiles/QuestionC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable QuestionC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuestionC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QuestionC.dir/build: QuestionC

.PHONY : CMakeFiles/QuestionC.dir/build

CMakeFiles/QuestionC.dir/requires: CMakeFiles/QuestionC.dir/main.cpp.o.requires
CMakeFiles/QuestionC.dir/requires: CMakeFiles/QuestionC.dir/LRUCache.cpp.o.requires
CMakeFiles/QuestionC.dir/requires: CMakeFiles/QuestionC.dir/Server.cpp.o.requires

.PHONY : CMakeFiles/QuestionC.dir/requires

CMakeFiles/QuestionC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QuestionC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QuestionC.dir/clean

CMakeFiles/QuestionC.dir/depend:
	cd /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug /Users/silver/Desktop/TechnicalTests/Ormuco/Wen_Xiao_test/QuestionC/cmake-build-debug/CMakeFiles/QuestionC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QuestionC.dir/depend

