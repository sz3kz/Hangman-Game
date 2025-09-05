#include "../../includes/guess_buffer.h"

char * create_guessing_buffer(int length){
	char * buffer = (char *) malloc(sizeof(char) * (length+1));
	int position;
	for (position = 0; position <= length; ++position){
		buffer[position] = PLACEHOLDER_CHARACTER;
	}
	buffer[position] = '\0';
	return buffer;
}
