#include "Model.hpp"

Model::Model() {
	winh = 300;
	winw = 300;
	this->player.movePlayer(this->winw / 2 -32, this->winh / 2-32);
}

Model::~Model() {
}

void Model::update(sf::Time delta) {
	this->player.update(delta);
}