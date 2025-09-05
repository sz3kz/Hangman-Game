#ifndef GET_WORD_H
#define GET_WORD_H

#include <stdio.h>
#include <stdlib.h>
#define WORD_MAX_LENGTH 50
#define GET_WORD_FAILURE -1
char * get_word(const char * prompt);
int get_character_count(const char * string_pointer);

#endif
