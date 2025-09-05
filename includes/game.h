#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include <stdio.h>
bool check_win(const char * challenge_word, const char * guess_buffer);
void discard_rest_of_input(void);

#endif
