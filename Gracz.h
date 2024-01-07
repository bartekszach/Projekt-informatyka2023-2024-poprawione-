#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
class Gracz
{
private:
	sf::Sprite playerSprite;
	sf::Texture playerTexture;

	float movementspeed;

	//funckje prywatne
	void initZmienne();
	void initTexture();
	void initSprite();
public:
	//konstruktor/destruktor
	Gracz();
	virtual ~Gracz();

	const sf::Vector2f& getPos() const;

	void update();
	void render(sf::RenderTarget& target);

};

