#include <iostream>
#include "Game.h"


int main() {
	//Window
	sf::RenderWindow window(sf::VideoMode(640, 480),"Gra 1",sf::Style::Titlebar| sf::Style::Close);
	sf::Event ev;

	//Game loop
	while (window.isOpen()) {

		while (window.pollEvent(ev)) {
			switch (ev.type) {
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if (ev.key.code == sf::Keyboard::Escape)
						window.close();

			}
		}

		//Update


		//Render
		window.clear(sf::Color::Cyan); //clear old frame
		window.display();//tell app that window is done drawing

	}


	//end 
	return 0;
}