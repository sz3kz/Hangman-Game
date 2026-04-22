#include "../../includes/game.h"

using FILE_RAII_POINTER = std::unique_ptr<FILE,decltype(&fclose)>;

void show_hangman(int bad_guess_count){
	char temp_path[HANGMAN_FILENAME_MAX_LENGTH] = {0};
	char path[HANGMAN_FILENAME_MAX_LENGTH] = {0};

	sprintf(temp_path, "%s%s", HANGMAN_PATH, HANGMAN_FILENAME_FORMAT);
	sprintf(path, temp_path, bad_guess_count);
  //FILE * fileptr = fopen(path, "r");
  FILE_RAII_POINTER fileptr = FILE_RAII_POINTER(fopen(path, "r"), &fclose);
	if (fileptr == NULL){
		printf("Something went wrong when opening: \"%s\"\n", path);
		return;
	}
	for ( char character = (char) fgetc(fileptr.get()); character != EOF; character = (char) fgetc(fileptr.get())){
		putchar(character);
	}
}
