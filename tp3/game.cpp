/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		01/12/2017
 *	Fichier:	game.cpp
 *	But:		@@@@@@@@@
 ************************************************************************************/
#include "game.h"

game::game()
{
}

game::~game()
{
}

bool game::init()
{
	Texture text;
	Sprite pos;
	ifstream input;

	char nomImage[5][15] = { "floor.png" ,"wall.png","corner.png",
							"box.png","player.png" };

	//cree la fenetre principale
	_window.create(VideoMode(1280, 720, 32), ("Game"));

	//limite le FPS a 60
	_window.setFramerateLimit(60);

	///pour les mouvements du player
	//textureRenderer<Texture> playerMove;
	input.open("map01.txt");

	//carte du jeu
	_gameMap.resize(18, 32);
	_gameMap.read(input);
	input.close();

	//loader les images
	for (int i = 0; i < 5; i++)
	{
		_texRen.push_back(text);
		if (!_texRen.at(i).loadFromFile(nomImage[i]))
			return EXIT_FAILURE;
	}


	//boucle de l'execution principale
	while (_window.isOpen())
	{
		//boucle d'evenement
		event();

		for (int line = 0; line < 18; line++)
			for (int col = 0; col < 32; col++)
			{
				pos.setPosition(Vector2f(col * 40, line * 40));
				pos.setTexture(_texRen[_gameMap[line][col]]);
				_window.draw(pos);
			}

		//mise a jour de la fenetre
		_window.display();
		

	}
	return 0;
}

void game::event()
{
	//evenement de processus
	Event event;
	while (_window.pollEvent(event))
	{
		///test de deplacement
		/*if (Keyboard::W)
			player.setPosition(Vector2f(player.getPosition().x, player.getPosition().y - 2.0));*/

		//ferme la fenetre
		if (event.type == Event::Closed)
			_window.close();
	}
}