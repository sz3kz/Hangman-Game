#include "../../includes/challenge_word.h"

auto getChallengeWordLength(const char* challenge_word) -> int
{
  if (challenge_word == nullptr)
  {
    return GET_WORD_FAILURE;
  }
  for (int length = 0; length <= WORD_MAX_LENGTH; ++length)
  {
    if (challenge_word[length] == '\0')
    {
      return length;
    }
  }
  return GET_WORD_FAILURE;
}
