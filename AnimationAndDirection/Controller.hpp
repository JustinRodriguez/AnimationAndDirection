#pragma once
#include "View.hpp"
#include "Model.hpp"

class Controller {
public:
	Controller(Model*m, View* v);
	~Controller();
	void inputs();
	bool ready;
	Model* model;
	View* view;
};