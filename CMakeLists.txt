cmake_minimum_required(VERSION 3.5)

project(GhostwriterWindow LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable(GhostwriterWindow main.cpp
    gamewindow.h gamewindow.cpp)

include(GNUInstallDirs)
install(TARGETS GhostwriterWindow
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
