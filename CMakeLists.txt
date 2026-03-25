cmake_minimum_required(VERSION 3.15...4.1)

project(Hangman-Game
  VERSION 1.0
  LANGUAGES C
)

# set C++17 as standard and enforce it as a requirement
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(game)

# disable compiler extensions
set(CMAKE_C_EXTENSIONS OFF)

# set compiler options
target_compile_options(game PRIVATE
    # 1. Flags for pure .cpp files (direct to Clang)
    $<$<COMPILE_LANGUAGE:C>:
        -Wall
        -Wextra
        -Werror
        -Wconversion
        -Wsign-conversion
        -Wpedantic
	-Wno-error=pedantic
    >
)
# set up clang-tidy
set(CMAKE_CXX_CLANG_TIDY clang-tidy;
    -header-filter=./include/;
    -checks=*;
    -warnings-as-errors=*;)

# point compiler to the .h header files
target_include_directories(game PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)


target_sources(game PRIVATE
    src/main.c
    src/challenge_word/ask_for_challenge_word.c
    src/challenge_word/check_char_inside_challenge_word.c
    src/challenge_word/get_challenge_word_length.c
    src/game/check_loss.c
    src/game/check_win.c
    src/game/clear_screen.c
    src/game/discard_rest_of_input.c
    src/game/print_status.c
    src/game/show_hangman.c
    src/guess_buffer/create_guess_buffer.c
    src/guess_buffer/take_guess.c
    src/guess_buffer/unlock_guest_buffer.c
)
