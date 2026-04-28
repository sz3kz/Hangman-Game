#ifndef GUESS_BUFFER_H
#define GUESS_BUFFER_H

#define PLACEHOLDER_CHARACTER '_'
#include <stdio.h>
#include <stdlib.h>
auto createGuessBuffer(int length) -> char*;
auto takeGuess(const char* prompt) -> char;
void unlockGuestBuffer(char character, char* guest_buffer,
                       const char* challenge_word);

#endif
