# project name:         Hangman-Game
# languages used:       CXX
#   * CXX
#   * CUDA
# package version:      1.0
# c++ standard:         23
#   * 17
# executable target:    game
# header directory:     include
# list of source files: <SRC_FILES>

cmake_minimum_required(VERSION 3.15...4.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/external/dotfiles/CPP")
include(add_valgrind_test)
include(add_cpp_compile_options)
include(add_clang_tidy_options)

project(
  Hangman-Game
  VERSION 1.0
  LANGUAGES CXX
)

add_executable(game)

add_cpp_compile_options(game)
add_clang_tidy_options(game)
include(CTest)
if(BUILD_TESTING)
  find_program(MEMCHECK valgrind)
  add_valgrind_test(game)
endif()

target_include_directories(game PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_sources(game PRIVATE
    src/main.cpp
    src/challenge_word/ask_for_challenge_word.cpp
    src/challenge_word/check_char_inside_challenge_word.cpp
    src/challenge_word/get_challenge_word_length.cpp
    src/game/check_loss.cpp
    src/game/check_win.cpp
    src/game/clear_screen.cpp
    src/game/discard_rest_of_input.cpp
    src/game/print_status.cpp
    src/game/show_hangman.cpp
    src/guess_buffer/create_guess_buffer.cpp
    src/guess_buffer/take_guess.cpp
    src/guess_buffer/unlock_guest_buffer.cpp
)
