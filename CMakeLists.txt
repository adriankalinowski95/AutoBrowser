# CMakeList.txt: plik projektu CMake najwyższego poziomu, wykonaj konfigurację globalną
# i uwzględnij podprojekty w tym miejscu.
#
cmake_minimum_required (VERSION 3.8)

project ("AutoBrowser")


include(conan.cmake)

# Load CMake/Conan.cmake, which sets up a 'run_conan()' macro to download dependencies.
include(conan.cmake)

run_conan()

# Uwzględnij podprojekty.
add_subdirectory ("AutoBrowser")
