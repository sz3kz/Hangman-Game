#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include <stdio.h>
#define MAX_BAD_GUESS_COUNT 5
bool check_win(const char * challenge_word, const char * guess_buffer);
void discard_rest_of_input(void);
bool check_loss(int bad_guess_count);

#endif
