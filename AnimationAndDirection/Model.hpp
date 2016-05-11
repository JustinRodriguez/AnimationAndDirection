#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include "Player.hpp"



class Model {
public:
	Model();
	~Model();
	void update(sf::Time);
	Player player;
	int winh, winw;
};