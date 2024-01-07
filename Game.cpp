#include "Game.h"

//funkcje prywatne
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Gra",sf::Style::Close|sf::Style::Titlebar);
	this->window->setFramerateLimit(60);
}

void Game::initTextures()
{
}

void Game::initPlayer()
{
	this->player = new Gracz();
}

//konstrukot/desturkor
Game::Game()
{
	this->initWindow();
	this->initPlayer();
}

Game::~Game()
{
	delete this-> window;
	delete this->player;
}


//funkcje 
void Game::run()
{
	while (window->isOpen()) {
		this->update();
		this->render();
	}
}
void Game::updatePollEvent()
{
	//okno
	sf::Event event;
	while (this->window->pollEvent(event)) {
		if (event.Event::type == sf::Event::Closed)
			this->window->close();
		if (event.Event::KeyPressed && event.Event::key.code == sf::Keyboard::Escape)
			this->window->close();
	}
}

void Game::updatePrzyciski()
{

}


void Game::update()
{
	this->updatePollEvent();
}

void Game::render()
{
	this->window->clear();

	//trzeba w tym miejscu tak zrobiæ *this albo funkcje const ale nie chce zeby ta funkcja by³a sta³a (pomoc chatu.gpt)
	this->player->render(*this->window);


	this->window->display();
}
