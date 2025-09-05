#include "../includes/get-word.h"

char * get_word(const char * prompt){
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

int get_character_count(const char * string_pointer){
	if (string_pointer == NULL){
		return GET_WORD_FAILURE;
	}
	for (int length = 0; length <= WORD_MAX_LENGTH; ++length){
		if (string_pointer[length] == '\0'){
			return length;
		}
	}
	return GET_WORD_FAILURE;
}
