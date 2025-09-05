#ifndef CHALLENGE_WORD_H
#define CHALLENGE_WORD_H

#include <stdio.h>
#include <stdlib.h>
#define WORD_MAX_LENGTH 50
#define GET_WORD_FAILURE -1
char * ask_for_challenge_word(const char * prompt);
int get_challenge_word_length(const char * challenge_word);

#endif
