#include <print>

#include "../../includes/guess_buffer.h"

auto takeGuess(const char* prompt) -> char
{
  std::print("{}", prompt);
  return (char)getchar();
}
