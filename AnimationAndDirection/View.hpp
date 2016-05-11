#pragma once
#include "Model.hpp"

class View {
public:
	View(Model* m);
	~View();
	void loadPlayerText();
	void render();
	Model* model;
	sf::RenderWindow window;
	sf::Texture playerText;
};