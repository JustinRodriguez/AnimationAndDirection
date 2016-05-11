#include "Controller.hpp"

Controller::Controller(Model * m, View * v) {
	this->model = m;
	this->view = v;
	this->ready = true;
}

Controller::~Controller() {
}

void Controller::inputs() {
	sf::Event event;

	while (this->view->window.pollEvent(event))
	{
		switch (event.type)
		{
			// window closed
		case sf::Event::Closed:
			this->view->window.close();
			break;
			// key pressed
		case sf::Event::KeyPressed:
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				this->view->window.close();
				break;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				model->player.state = 5;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				model->player.state = 2;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				model->player.state = 3;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				model->player.state = 4;
			}
			break;
			//Key Released
		case sf::Event::KeyReleased:
			model->player.state = 1;
			model->player.sequenceIndex = 0;
			break;
		}
	}
}