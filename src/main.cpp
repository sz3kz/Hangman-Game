#include "../includes/challenge_word.h"
#include "../includes/game.h"
#include "../includes/guess_buffer.h"

int main(void) {
  clear_terminal_window();
  char* challenge_word = askForChallengeWord(WORD_INPUT_PROMPT);
  int challenge_length = getChallengeWordLength(challenge_word);

  char* guess_buffer = createGuessBuffer(challenge_length);

  int bad_guess_count = 0;
  while (!check_win(challenge_word, guess_buffer) &&
         !check_loss(bad_guess_count)) {
    char guess;
    clear_terminal_window();
    show_hangman(bad_guess_count);
    print_status(guess_buffer, bad_guess_count);
    guess = takeGuess(GUESS_INPUT_PROMPT);
    discard_rest_of_input();
    if (checkCharInsideChallengeWord(guess, challenge_word)) {
      unlockGuessBuffer(guess, guess_buffer, challenge_word);
    } else {
      ++bad_guess_count;
    }
  }
  clear_terminal_window();
  show_hangman(bad_guess_count);
  if (check_win(challenge_word, guess_buffer)) {
    puts("Congratulations, you have won!");
  } else {
    puts("Sorry, you lost!");
  }

  free(guess_buffer);
  free(challenge_word);
  return 0;
}
