/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		28/11/2017
 *	Fichier:	main.cpp
 *	But:		@@- A changer -@@
 ************************************************************************************/

//directive au preprocesseur
#include <fstream>
#include <iostream>
#include "map.hpp"
#include "vecteur.hpp"
#include "movement.h"
#include "entity.h"
#include <string>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

//enumerateur de texture
enum texture_type
{
	allay,
	wall,
	lowWallH,
	lowWallV,
	tunnel,
	player
};

//programme principale
int main(int argc, const char **argv)
{
	//cree la fenetre principale
	RenderWindow window(VideoMode(1280, 720, 32), ("Game"));

	//limite le FPS a 60
	window.setFramerateLimit(60);

	//image du plancher
	Texture allayTex;
	if (!allayTex.loadFromFile("floor.png"))
		return EXIT_FAILURE;

	//image des murs
	Texture wallTex;
	if (!wallTex.loadFromFile("wall.png"))
		return EXIT_FAILURE;

	//image des petits murs horizontal
	Texture lowWallHTex;
	if (!lowWallHTex.loadFromFile("box.png"))
		return EXIT_FAILURE;

	//image des petits murs vectical
	Texture lowWallVTex;
	if (!lowWallVTex.loadFromFile("box.png"))
		return EXIT_FAILURE;

	//image d'un tunnel
	Texture tunnelTex;
	if (!tunnelTex.loadFromFile("tunnel.png"))
		return EXIT_FAILURE;

	//image du joueur
	Texture playerTex;
	if (!playerTex.loadFromFile("player.png"))
		return EXIT_FAILURE;

	//objet contenant les images
	Sprite *allay;
	Sprite *wall;
	Sprite *lowWallH;
	Sprite *lowWallV;
	Sprite *tunnel;

	Sprite player;
	player.setTexture(playerTex);
	player.setPosition(Vector2f(400.0, 400.0));

	//vecteur de texture
	gen::vecteur<Texture> texVec;
	texVec.push_back(allayTex);
	texVec.push_back(wallTex);
	texVec.push_back(lowWallHTex);
	texVec.push_back(lowWallVTex);
	texVec.push_back(tunnelTex);

	//flux d'entree
	ifstream input;
	input.open("map01.txt");

	//carte du jeu
	gen::map<int> mapp;
	mapp.resize(32, 18);
	mapp.read(input);
	input.close();

	//boucle de l'execution principale
	while (window.isOpen())
	{
		//evenement de processus
		Event event;
		while (window.pollEvent(event))
		{
			///test de deplacement
			if (Keyboard::W)
				player.setPosition(Vector2f(player.getPosition().x, player.getPosition().y - 2.0));

			//ferme la fenetre
			if (event.type == Event::Closed)
				window.close();
		}

		//mise a jour de la fenetre
		window.display();

		for (int i = 0; i < 32; i++)
			for (int j = 0; j < 18; j++)
				switch (mapp[i][j])
				{
				case texture_type::allay:
				{
					allay = new Sprite;
					allay->setTexture(texVec[0]);
					allay->setPosition(Vector2f((i * 40.0), (j * 40.0)));
					window.draw(*allay);
					break;
				}
				case texture_type::wall:
				{
					wall = new Sprite;
					wall->setTexture(texVec[1]);
					wall->setPosition(Vector2f((i * 40.0), (j * 40.0)));
					window.draw(*wall);
					break;
				}
				case texture_type::lowWallH:
				{
					lowWallH = new Sprite;
					lowWallH->setTexture(texVec[2]);
					lowWallH->setPosition(Vector2f((i * 40.0), (j * 40.0)));
					window.draw(*lowWallH);
					break;
				}
				case texture_type::lowWallV:
				{
					lowWallV = new Sprite;
					lowWallV->setTexture(texVec[3]);
					lowWallV->setPosition(Vector2f((i * 40.0), (j * 40.0)));
					window.draw(*lowWallV);
					break;
				}
				case texture_type::tunnel:
				{
					tunnel = new Sprite;
					tunnel->setTexture(texVec[4]);
					tunnel->setPosition(Vector2f((i * 40.0), (j * 40.0)));
					window.draw(*tunnel);
					break;
				}
				}

		window.draw(player);

		///exemple de rotation SFML
		/*Sprite rotation;
		rotation.setTexture(texVec[4]);
		rotation.setPosition(500, 450);
		rotation.setRotation(180);
		window.draw(rotation);*/
	}
	window.clear();

	return EXIT_SUCCESS;
}