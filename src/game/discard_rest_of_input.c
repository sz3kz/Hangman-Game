#include "../../includes/game.h"

void discard_rest_of_input(void){
	int _;
	while ( ( _ = getchar() ) && ( _ != '\n') && ( _ != EOF) );
}
