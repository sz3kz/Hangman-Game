#include "../includes/challenge_word.h"
#include "../includes/main.h"
#include "../includes/guess_buffer.h"
#include "../includes/game.h"

int main(void){
	clear_terminal_window();
	char * challenge_word = ask_for_challenge_word(WORD_INPUT_PROMPT);
	int challenge_length = get_challenge_word_length(challenge_word);

	char * guess_buffer = create_guess_buffer(challenge_length);
	char guess;

	int bad_guess_count = 0;
	while ( !check_win(challenge_word, guess_buffer) && !check_loss(bad_guess_count) ){
		clear_terminal_window();
		show_hangman(bad_guess_count);
		print_status(guess_buffer, bad_guess_count);
		guess = take_guess(GUESS_INPUT_PROMPT);
		discard_rest_of_input();
		if (check_char_inside_challenge_word(guess, challenge_word)){
			unlock_guest_buffer(guess, guess_buffer, challenge_word);
		}
		else {
			++bad_guess_count;
		}
	}
	clear_terminal_window();
	show_hangman(bad_guess_count);
	if ( check_win(challenge_word, guess_buffer) ){
		puts("Congratulations, you have won!");
	}
	else {
		puts("Sorry, you lost!");
	}

	free(guess_buffer);
	free(challenge_word);
	return 0;
}
