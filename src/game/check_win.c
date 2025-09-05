#include "../../includes/game.h"
#include <stdio.h>

bool check_win(const char * challenge_word, const char * guess_buffer){
	int position;
	for (position = 0; challenge_word[position] != '\0'; ++position){
		if (challenge_word[position] != guess_buffer[position]) {
			return false;
		}
	}
	if (challenge_word[position] != guess_buffer[position]) return false;
	return true;
}
