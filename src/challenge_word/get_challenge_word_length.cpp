#include "../../includes/challenge_word.h"


int get_challenge_word_length(const char * challenge_word){
	if (challenge_word == NULL){
		return GET_WORD_FAILURE;
	}
	for (int length = 0; length <= WORD_MAX_LENGTH; ++length){
		if (challenge_word[length] == '\0'){
			return length;
		}
	}
	return GET_WORD_FAILURE;
}
