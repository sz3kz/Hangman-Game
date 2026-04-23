# This is my Hangman game.
While the files are .cpp, the project was primarily done using C!

## How 2 Use
```bash
# Clone the repository
git clone git@github.com:sz3kz/Hangman-Game.git
cd Hangman-Game/

# Activate CMake configuration custom git submodule
make dotfiles-activate

# Build the project
mkdir build
cd build/
cmake ..
make
```
The only thing left to do is run the game!
```bash
# Execute (user assumed to be in build/ directory)
./game
```
## Run Tests
Done after compilation ofc.
### Valgrind
```bash
ctest -R game --output-on-failure
```
