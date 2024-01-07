#include "Gracz.h"

void Gracz::initZmienne()
{
	this->movementspeed = 3.f;
}

void Gracz::initTexture()
{
	//Inciojowanie tekstury
	if (!this->playerTexture.loadFromFile("Tekstury/statek.png"))
	{
		std::cout << "BLAD W LADOWNIU TEKSTURY" << "\n";
	}

}

void Gracz::initSprite()
{
	//ustawienie tekstury do sprite
	this->playerSprite.setTexture(this->playerTexture);

	//zmniana rozmiaru 
	this->playerSprite.scale(0.12f, 0.12f);

}

Gracz::Gracz()
{
	this->initTexture();
	this->initSprite();


}

Gracz::~Gracz()
{

}

const sf::Vector2f& Gracz::getPos() const
{
	return this->playerSprite.getPosition();
}

void Gracz::update()
{

}

void Gracz::render(sf::RenderTarget& target)
{
	target.draw(this->playerSprite);
}
