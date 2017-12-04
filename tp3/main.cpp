/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		28/11/2017
 *	Fichier:	main.cpp
 *	But:		@@- A changer -@@
 ************************************************************************************/

//directive au preprocesseur
#include <fstream>
#include <iostream>
#include "game.h"
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

//programme principale
int main(int argc, const char **argv)
{
	game gamee;
	
	gamee.init();

	return EXIT_SUCCESS;
}

/*
 *////BACK UP***********************************************************

 /*
  *////switch_case de texture

//for (int i = 0; i < 32; i++)
//	for (int j = 0; j < 18; j++)
//		switch (mapp[i][j])
//		{
//		case texture_type::allay:
//		{
//			allay = new Sprite;
//			allay->setTexture(texVec[0]);
//			allay->setPosition(Vector2f((i * 40.0), (j * 40.0)));
//			window.draw(*allay);
//			break;
//		}
//		case texture_type::wall:
//		{
//			wall = new Sprite;
//			wall->setTexture(texVec[1]);
//			wall->setPosition(Vector2f((i * 40.0), (j * 40.0)));
//			window.draw(*wall);
//			break;
//		}
//		case texture_type::lowWallH:
//		{
//			lowWallH = new Sprite;
//			lowWallH->setTexture(texVec[2]);
//			lowWallH->setPosition(Vector2f((i * 40.0), (j * 40.0)));
//			window.draw(*lowWallH);
//			break;
//		}
//		case texture_type::lowWallV:
//		{
//			lowWallV = new Sprite;
//			lowWallV->setTexture(texVec[3]);
//			lowWallV->setPosition(Vector2f((i * 40.0), (j * 40.0)));
//			window.draw(*lowWallV);
//			break;
//		}
//		case texture_type::tunnel:
//		{
//			tunnel = new Sprite;
//			tunnel->setTexture(texVec[4]);
//			tunnel->setPosition(Vector2f((i * 40.0), (j * 40.0)));
//			window.draw(*tunnel);
//			break;
//		}
//		}

///**************************************************************************

//objet contenant les images
//Sprite *allay;
//Sprite *wall;
//Sprite *lowWallH;
//Sprite *lowWallV;
//Sprite *tunnel;

//Sprite player;
//player.setTexture(playerTex);
//player.setPosition(Vector2f(400.0, 400.0));

////vecteur de texture
//gen::vecteur<Texture> texVec;
//texVec.push_back(allayTex);
//texVec.push_back(wallTex);
//texVec.push_back(lowWallHTex);
//texVec.push_back(lowWallVTex);
//texVec.push_back(tunnelTex);



//boucle de l'execution principale
//while (window.isOpen())
//{
//	//evenement de processus
//	Event event;
//	while (window.pollEvent(event))
//	{
//		///test de deplacement
//		if (Keyboard::W)
//			player.setPosition(Vector2f(player.getPosition().x, player.getPosition().y - 2.0));

//		//ferme la fenetre
//		if (event.type == Event::Closed)
//			window.close();
//	}

//	//mise a jour de la fenetre
//	window.display();



//	window.draw(player);

//	///exemple de rotation SFML
//	/*Sprite rotation;
//	rotation.setTexture(texVec[4]);
//	rotation.setPosition(500, 450);
//	rotation.setRotation(180);
//	window.draw(rotation);*/
//}