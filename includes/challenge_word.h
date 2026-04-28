#ifndef CHALLENGE_WORD_H
#define CHALLENGE_WORD_H

#include <cstdio>
#include <cstdlib>
enum
{
  WORD_MAX_LENGTH = 50,
  GET_WORD_FAILURE = (-1)
};
auto askForChallengeWord(const char* prompt) -> char*;
auto getChallengeWordLength(const char* challenge_word) -> int;
auto checkCharInsideChallengeWord(char character,
                                  const char* challenge_word) -> bool;

#endif
