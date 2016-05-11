#include <SFML/Graphics.hpp>
#include "Game.hpp"

int main() {
	Game* game = new Game();
	game->loop();
	return 0;
}

/*
All code in Controller, View, Player & Model coded by Justin Rodriguez
No Ownership over the asset of the character

Use the arrow keys to move the character in the 4 directions

Steps to make SFML work with Microsoft Visual Studio Express 2015:

	C/C++ General (all configurations) -> Additional Include Directories -> SFML\include
	Linker General (all configurations) -> additional Library Directories -> SFML\lib
	Linker Input (Release) -> additional dependencies -> sfml-main.lib; sfml-window.lib; sfml-system.lib; sfml-graphics.lib;
	Linker Input (Debug) -> additional dependencies -> sfml-main-d.lib; sfml-window-d.lib; sfml-system-d.lib; sfml-graphics-d.lib;
	then put all the stuff in SFML/bin in the debug File
*/