#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define MAX_BAD_GUESS_COUNT 5
#define HANGMAN_FILENAME_FORMAT "hangman-%d.txt"
#define HANGMAN_FILENAME_MAX_LENGTH 100
#define HANGMAN_PATH "../ascii/"
bool check_win(const char * challenge_word, const char * guess_buffer);
void discard_rest_of_input(void);
bool check_loss(int bad_guess_count);
void print_status(const char * guess_buffer, int bad_guess_count);
void clear_terminal_window(void);
void show_hangman(int bad_guess_count);

#endif
