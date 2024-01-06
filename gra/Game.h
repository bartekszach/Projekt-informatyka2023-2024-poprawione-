#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

//funkcje prywatne
class Game
{
private:
	sf::RenderWindow* window;
	sf::Event event;

	//Funkcje prywatne
	void initWindow();

public:

	//konstrukot/desturkor
	Game();
	virtual~Game();

	//funkcje
	void run();

	void updatePollEvent();
	void update();
	void render();
};

