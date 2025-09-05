#include "../../includes/game.h"

void show_hangman(int bad_guess_count){
	char path[HANGMAN_FILENAME_MAX_LENGTH] = {0};
	sprintf(path, "%s", HANGMAN_PATH);
	sprintf(path + strlen(path), "%s", HANGMAN_FILENAME_FORMAT);
	sprintf(path, path, bad_guess_count);
	FILE * fileptr = fopen(path, "r");
	if (fileptr == NULL){
		printf("Something went wrong when opening: \"%s\"\n", path);
		return;
	}
	for ( char character = fgetc(fileptr); character != EOF; character = fgetc(fileptr)){
		putchar(character);
	}
}
