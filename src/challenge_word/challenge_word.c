#include "../../includes/challenge_word.h"

char * ask_for_challenge_word(const char * prompt){
	if (prompt == NULL){
		return NULL;
	}
	char * user_word = (char *) malloc( sizeof(char) * WORD_MAX_LENGTH);
	printf("%s",prompt);
	char character;
	int position;
	for (character = getchar(), position = 0; 
			character != '\n' && position < WORD_MAX_LENGTH; 
			++position, character = getchar()){
		*(user_word + position) = character;
	}
	*(user_word + position) = '\0';
	return user_word;
}
