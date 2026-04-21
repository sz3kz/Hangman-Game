#include "../../includes/game.h"

void print_status(const char * guess_buffer, int bad_guess_count){
	printf("Buffer: %s\n",guess_buffer);
	printf("Used Bad Guesses: %d/%d\n", bad_guess_count, MAX_BAD_GUESS_COUNT);
}
