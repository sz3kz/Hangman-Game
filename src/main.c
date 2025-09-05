#include "../includes/challenge_word.h"
#include "../includes/main.h"
#include "../includes/guess_buffer.h"
#include "../includes/game.h"

#include <stdio.h>
int main(void){
	char * challenge_word = ask_for_challenge_word(WORD_INPUT_PROMPT);
	int challenge_length = get_challenge_word_length(challenge_word);

	char * guess_buffer = create_guess_buffer(challenge_length);
	while (!check_win(challenge_word, guess_buffer) ){
		char guess = take_guess(GUESS_INPUT_PROMPT);
		printf("Guess: \'%c\'\n",guess);
	}

	if (check_win(challenge_word, guess_buffer)) {
		printf("\"%s\" == \"%s\", you win!\n",challenge_word,guess_buffer);
	}
	else{
		printf("\"%s\" != \"%s\", let the game go on!\n",challenge_word,guess_buffer);
	}
	free(guess_buffer);
	free(challenge_word);
	return 0;
}
