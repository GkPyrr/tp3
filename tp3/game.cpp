/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		01/12/2017
 *	Fichier:	game.cpp
 *	But:		@@@@@@@@@
 ************************************************************************************/
#include "game.h"

//gen::game::game()
//{
//}
//
//gen::game::~game()
//{
//}

//void gen::game::init()
//{
//	//cree la fenetre principale
//	RenderWindow window(VideoMode(1280, 720, 32), ("Game"));
//
//	//limite le FPS a 60
//	window.setFramerateLimit(60);
//
//	//image du plancher
//	Texture allayTex;
//	/*if (!allayTex.loadFromFile("allay.png"))
//		return EXIT_FAILURE;*/
//
//	//image des murs
//	Texture wallTex;
//	/*if (!wallTex.loadFromFile("wall.png"))
//		return EXIT_FAILURE;*/
//
//	//image des petits murs horizontal
//	Texture lowWallHTex;
//	/*if (!lowWallHTex.loadFromFile("lowWallH.png"))
//		return EXIT_FAILURE;*/
//
//	//image des petits murs vectical
//	Texture lowWallVTex;
//	/*if (!lowWallVTex.loadFromFile("lowWallV.png"))
//		return EXIT_FAILURE;*/
//
//	//image d'un tunnel
//	Texture tunnelTex;
//	/*if (!tunnelTex.loadFromFile("tunnel.png"))
//		return EXIT_FAILURE;*/
//
//	//objet contenant les images
//	Sprite *allay;
//	Sprite *wall;
//	Sprite *lowWallH;
//	Sprite *lowWallV;
//	Sprite *tunnel;
//}

//void gen::game::print()
//{
//	for (int i = 0; i < 32; i++)
//		for (int j = 0; j < 18; j++)
//			switch (mapp[i][j])
//			{
//			case texture_type::allay:
//			{
//				allay = new Sprite;
//				allay->setTexture(texVec[0]);
//				allay->setPosition((i * 40), (j * 40));
//				window.draw(*allay);
//				break;
//			}
//			case texture_type::wall:
//			{
//				wall = new Sprite;
//				wall->setTexture(texVec[1]);
//				wall->setPosition((i * 40), (j * 40));
//				window.draw(*wall);
//				break;
//			}
//			case texture_type::lowWallH:
//			{
//				lowWallH = new Sprite;
//				lowWallH->setTexture(texVec[2]);
//				lowWallH->setPosition((i * 40), (j * 40));
//				window.draw(*lowWallH);
//				break;
//			}
//			case texture_type::lowWallV:
//			{
//				lowWallV = new Sprite;
//				lowWallV->setTexture(texVec[3]);
//				lowWallV->setPosition((i * 40), (j * 40));
//				window.draw(*lowWallV);
//				break;
//			}
//			case texture_type::tunnel:
//			{
//				tunnel = new Sprite;
//				tunnel->setTexture(texVec[4]);
//				tunnel->setPosition((i * 40), (j * 40));
//				window.draw(*tunnel);
//				break;
//			}
//			}
//}