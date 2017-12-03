/*************************************************************************************
 *	Auteur:		Micael Gaumond-Roy
 *	Date:		01/12/2017
 *	Fichier:	game.h
 *	But:		@@@@
 ************************************************************************************/
#pragma once
#include "textureRenderer.hpp"
#include <fstream>
#include <string>

class game
{
private:
	textureRenderer<Texture> _texRen;
public:
	game();
	~game();

	bool init();

	void event(RenderWindow& window);
};