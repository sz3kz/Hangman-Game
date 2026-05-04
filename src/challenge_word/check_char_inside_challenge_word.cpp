#include "../../includes/challenge_word.h"

bool checkCharInsideChallengeWord(char character,
                                      const char* challenge_word)
{
  for (int position = 0; challenge_word[position] != '\0'; ++position)
  {
    if (challenge_word[position] == character) return true;
  }
  return false;
}
