#include "View.hpp"
View::View(Model * m) {
	this->model = m;
	this->window.create(sf::VideoMode(this->model->winw, this->model->winh), "Show Animation and Directionality");
	this->loadPlayerText();
	this->model->player.setTextSheet(&this->playerText);
}

View::~View() {
}

void View::render() {
	this->window.clear(sf::Color::Black);
	this->window.draw(this->model->player);
	this->window.display();
}

void View::loadPlayerText()
{
	this->playerText.loadFromFile("Asset/Character.png");
}