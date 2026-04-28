#include "../../includes/guess_buffer.h"

void unlockGuestBuffer(char character, char* guest_buffer,
                       const char* challenge_word)
{
  int position = 0;
  for (position = 0; guest_buffer[position] != '\0'; ++position)
  {
    if (challenge_word[position] == character)
    {
      guest_buffer[position] = character;
    }
  }
}
