#include "../../includes/guess_buffer.h"

char take_guess(const char * prompt){
	printf("%s",prompt);
	return getchar();
}
