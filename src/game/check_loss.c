#include "../../includes/game.h"

bool check_loss(int bad_guess_count){
	if (bad_guess_count > MAX_BAD_GUESSES_COUNT) return true;
	return false;
}
