/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		01/12/2017
 *	Fichier:	game.h
 *	But:		@@@@
 ************************************************************************************/
#pragma once
#include <SFML\Graphics.hpp>
#include "map.hpp"	///changer le nom de map pour enlever gen
#include "vecteur.hpp"
#include <fstream>
#include <string>


using namespace sf;

class game
{
private:
	gen::vecteur<Texture> _texRen;
	gen::map<int> _gameMap;
	RenderWindow _window;

public:
	game();
	~game();

	bool init();

	void event();
};