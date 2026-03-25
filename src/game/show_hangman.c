#include "../../includes/game.h"

void show_hangman(int bad_guess_count){
	char temp_path[HANGMAN_FILENAME_MAX_LENGTH] = {0};
	char path[HANGMAN_FILENAME_MAX_LENGTH] = {0};

	sprintf(temp_path, "%s%s", HANGMAN_PATH, HANGMAN_FILENAME_FORMAT);
	sprintf(path, temp_path, bad_guess_count);
	FILE * fileptr = fopen(path, "r");
	if (fileptr == NULL){
		printf("Something went wrong when opening: \"%s\"\n", path);
		return;
	}
	for ( char character = fgetc(fileptr); character != EOF; character = fgetc(fileptr)){
		putchar(character);
	}
}
