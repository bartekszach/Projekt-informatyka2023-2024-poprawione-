#pragma once
#include"Gracz.h"

//funkcje prywatne
class Game
{
private:
	sf::RenderWindow* window;
	sf::Event event;
	//Gracz
	Gracz* player;
	//Funkcje prywatne
	void initWindow();
	void initTextures();

	void initPlayer();
public:

	//konstrukot/desturkor
	Game();
	virtual~Game();

	//funkcje
	void run();

	void updatePollEvent();
	void updatePrzyciski();
	void update();
	void render();
};

