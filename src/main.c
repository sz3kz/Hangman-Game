#include "../includes/print_hello_world.h"
#include "../includes/get-word.h"
#include "../includes/main.h"
#include "../includes/guess_buffer.h"

int main(void){
	print_hello_world();
	char * challenge_word = get_word(WORD_INPUT_PROMPT);
	int challenge_word_length = get_character_count(challenge_word);
	printf("Challenge word(%d): \"%s\".\n",challenge_word_length,challenge_word);
	char * guess_buffer = create_guess_buffer(challenge_word_length);
	printf("Guess buffer: \"%s\".\n",guess_buffer);
	free(challenge_word);
	return 0;
}
