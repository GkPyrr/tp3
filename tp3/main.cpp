/*************************************************************************************
 *	Auteur:		Micaël Gaumond-Roy
 *	Date:		28/11/2017
 *	Fichier:	main.cpp
 *	But:		@@- A changer -@@
 ************************************************************************************/

//directive au preprocesseur
#include <fstream>
#include <iostream>
//#include "map.hpp"
//#include "vecteur.hpp"
#include <string>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

//programme principale
int main(int argc, const char **argv)
{
	ifstream input;

	input.open("openMap.txt");

	/*mapp.resize(18, 32);
	mapp.read(input);*/
	
	input.close();

	//cree la fenetre principale
	RenderWindow window(VideoMode(1280, 720, 32), ("Game"));

	//limite le FPS a 60
	window.setFramerateLimit(60);

	//image des murs
	Texture wallTex;
	if (!wallTex.loadFromFile("wall.png"))
		return EXIT_FAILURE;

	//image des petits murs
	Texture lowWallTex;
	if (!lowWallTex.loadFromFile("lowWall.png"))
		return EXIT_FAILURE;

	//image du plancher
	Texture allayTex;
	if (!allayTex.loadFromFile("allay.png"))
		return EXIT_FAILURE;

	//image d'un tunnel
	Texture tunnelTex;
	if (!tunnelTex.loadFromFile("tunnel.png"))
		return EXIT_FAILURE;

	///Sprite pour afficher pour l'instant
	///je vais faire un classe pour les images
	///et les mettre dans un vecteur
	///et les affichers sur la map
	Sprite wall;
	wall.setTexture(wallTex);
	wall.setPosition(0, 0);

	Sprite lowWall;
	lowWall.setTexture(lowWallTex);
	lowWall.setPosition(40, 0);

	Sprite allay;
	allay.setTexture(allayTex);
	allay.setPosition(80, 0);

	Sprite tunnel;
	tunnel.setTexture(tunnelTex);
	tunnel.setPosition(120, 0);

	//boucle de l'execution principale
	while (window.isOpen())
	{
		//evenement de processus
		Event event;
		while (window.pollEvent(event))
		{
			//ferme la fenetre
			if (event.type == Event::Closed)
				window.close();
		}

		//mise a jour de la fenetre
		window.display();

		//affiche l'image
		window.draw(wall);
		window.draw(lowWall);
		window.draw(allay);
		window.draw(tunnel);
	}

	window.clear();

	return EXIT_SUCCESS;
}