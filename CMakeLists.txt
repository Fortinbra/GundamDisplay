# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/fortinbra/pico/pico-sdk")

# Pull in Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(GundamDisplay C CXX ASM)

# Initialise the Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(GundamDisplay GundamDisplay.c )

pico_set_program_name(GundamDisplay "GundamDisplay")
pico_set_program_version(GundamDisplay "0.1")

pico_enable_stdio_uart(GundamDisplay 1)
pico_enable_stdio_usb(GundamDisplay 0)

# Add the standard library to the build
target_link_libraries(GundamDisplay pico_stdlib hardware_pwm)

pico_add_extra_outputs(GundamDisplay)

