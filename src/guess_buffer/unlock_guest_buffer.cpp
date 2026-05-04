#include "../../includes/guess_buffer.h"

void unlockGuessBuffer(char character, char* guess_buffer,
                       const char* challenge_word) {
  int position = 0;

  for (position = 0; guess_buffer[position] != '\0'; ++position) {
    if (challenge_word[position] == character) {
      guess_buffer[position] = character;
    }
  }
}
