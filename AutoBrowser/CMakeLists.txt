# CMakeList.txt: projekt CMake dla elementu AutoBrowser, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (AutoBrowser "AutoBrowser.cpp" "AutoBrowser.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AutoBrowser PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(
        AutoBrowser
        CONAN_PKG::libcurl)

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
install (TARGETS AutoBrowser DESTINATION "AutoBrowser/bin")

