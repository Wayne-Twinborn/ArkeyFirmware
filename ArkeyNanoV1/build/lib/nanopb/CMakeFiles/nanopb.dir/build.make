# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build

# Include any dependencies generated for this target.
include lib/nanopb/CMakeFiles/nanopb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/nanopb/CMakeFiles/nanopb.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/nanopb/CMakeFiles/nanopb.dir/progress.make

# Include the compile flags for this target's objects.
include lib/nanopb/CMakeFiles/nanopb.dir/flags.make

lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/flags.make
lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj: /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_common.c
lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj -MF CMakeFiles/nanopb.dir/pb_common.c.obj.d -o CMakeFiles/nanopb.dir/pb_common.c.obj -c /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_common.c

lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/nanopb.dir/pb_common.c.i"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_common.c > CMakeFiles/nanopb.dir/pb_common.c.i

lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/nanopb.dir/pb_common.c.s"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_common.c -o CMakeFiles/nanopb.dir/pb_common.c.s

lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/flags.make
lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj: /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_decode.c
lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj -MF CMakeFiles/nanopb.dir/pb_decode.c.obj.d -o CMakeFiles/nanopb.dir/pb_decode.c.obj -c /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_decode.c

lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/nanopb.dir/pb_decode.c.i"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_decode.c > CMakeFiles/nanopb.dir/pb_decode.c.i

lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/nanopb.dir/pb_decode.c.s"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_decode.c -o CMakeFiles/nanopb.dir/pb_decode.c.s

lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/flags.make
lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj: /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_encode.c
lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj: lib/nanopb/CMakeFiles/nanopb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj -MF CMakeFiles/nanopb.dir/pb_encode.c.obj.d -o CMakeFiles/nanopb.dir/pb_encode.c.obj -c /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_encode.c

lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/nanopb.dir/pb_encode.c.i"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_encode.c > CMakeFiles/nanopb.dir/pb_encode.c.i

lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/nanopb.dir/pb_encode.c.s"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && /usr/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb/pb_encode.c -o CMakeFiles/nanopb.dir/pb_encode.c.s

# Object files for target nanopb
nanopb_OBJECTS = \
"CMakeFiles/nanopb.dir/pb_common.c.obj" \
"CMakeFiles/nanopb.dir/pb_decode.c.obj" \
"CMakeFiles/nanopb.dir/pb_encode.c.obj"

# External object files for target nanopb
nanopb_EXTERNAL_OBJECTS =

lib/nanopb/libnanopb.a: lib/nanopb/CMakeFiles/nanopb.dir/pb_common.c.obj
lib/nanopb/libnanopb.a: lib/nanopb/CMakeFiles/nanopb.dir/pb_decode.c.obj
lib/nanopb/libnanopb.a: lib/nanopb/CMakeFiles/nanopb.dir/pb_encode.c.obj
lib/nanopb/libnanopb.a: lib/nanopb/CMakeFiles/nanopb.dir/build.make
lib/nanopb/libnanopb.a: lib/nanopb/CMakeFiles/nanopb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libnanopb.a"
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && $(CMAKE_COMMAND) -P CMakeFiles/nanopb.dir/cmake_clean_target.cmake
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nanopb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/nanopb/CMakeFiles/nanopb.dir/build: lib/nanopb/libnanopb.a
.PHONY : lib/nanopb/CMakeFiles/nanopb.dir/build

lib/nanopb/CMakeFiles/nanopb.dir/clean:
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb && $(CMAKE_COMMAND) -P CMakeFiles/nanopb.dir/cmake_clean.cmake
.PHONY : lib/nanopb/CMakeFiles/nanopb.dir/clean

lib/nanopb/CMakeFiles/nanopb.dir/depend:
	cd /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1 /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/lib/nanopb /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb /home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/lib/nanopb/CMakeFiles/nanopb.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : lib/nanopb/CMakeFiles/nanopb.dir/depend

