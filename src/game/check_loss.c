#include "../../includes/game.h"

bool check_loss(int loss_count){
	if (loss_count > MAX_BAD_GUESSES_COUNT) return true;
	return false;
}
