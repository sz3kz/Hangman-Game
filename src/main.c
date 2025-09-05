#include "../includes/print_hello_world.h"
#include "../includes/get-word.h"
#include "../includes/main.h"

int main(void){
	print_hello_world();
	char * challenge_word = get_word(WORD_INPUT_PROMPT);
	printf("Challenge word: \"%s\".\n",challenge_word);
	free(challenge_word);
	return 0;
}
