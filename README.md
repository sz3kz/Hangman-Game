# This is my Hangman game.
While the files are .cpp, the project was primarily done using C!

## How 2 Install
```bash
git clone git@github.com:sz3kz/Hangman-Game.git
cd Hangman-Game/
make cmake-init                                 # Overwrite the CMakeLists.txt? -> n
mkdir build
cd build/
cmake ..
make
./game
```
## Run Tests
Done after compilation ofc.
### Valgrind
```bash
ctest -R game --output-on-failure
```
