#ifndef GUESS_BUFFER_H
#define GUESS_BUFFER_H

#define PLACEHOLDER_CHARACTER '_'
#include <stdlib.h>
#include <stdio.h>
char * create_guess_buffer(int length);
char take_guess(const char * prompt);
void unlock_guest_buffer(char character, char * guest_buffer, const char * challenge_word);

#endif
