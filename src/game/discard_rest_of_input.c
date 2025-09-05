#include "../../includes/game.h"

void discard_rest_of_input(void){
	char c;
	while ( ( c = getchar() ) && ( c != '\n') && ( c != EOF) );
}
