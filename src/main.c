#include "../includes/challenge_word.h"
#include "../includes/main.h"
#include "../includes/guess_buffer.h"
#include "../includes/game.h"

#include <stdio.h>
int main(void){
	char * challenge_word = ask_for_challenge_word(WORD_INPUT_PROMPT);
	int challenge_length = get_challenge_word_length(challenge_word);

	char * guess_buffer = create_guess_buffer(challenge_length);
	char guess;

	int bad_guess_count = 0;
	while ( !check_win(challenge_word, guess_buffer) && !check_loss(bad_guess_count) ){
		clear_terminal_window();
		print_status(guess_buffer, bad_guess_count);
		guess = take_guess(GUESS_INPUT_PROMPT);
		discard_rest_of_input();
		if (check_char_inside_challenge_word(guess, challenge_word)){
			printf("\'%c\' -> Correct!\n",guess);
			unlock_guest_buffer(guess, guess_buffer, challenge_word);
		}
		else {
			printf("\'%c\' -> Incorrect!\n",guess);
			++bad_guess_count;
		}
	}

	free(guess_buffer);
	free(challenge_word);
	return 0;
}
