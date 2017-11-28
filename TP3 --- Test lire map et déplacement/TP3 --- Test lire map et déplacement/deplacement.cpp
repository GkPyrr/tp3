/*****************************************************************************
File  : deplacement.cpp
Author: Anthony Cote & Marc-Etienne Pepin
Date  : 2017/11/01
Goal  : Fonctions qu'utilise la classe deplacement
******************************************************************************/

#include "deplacement.h"


////////////////////////////////////////////////////////
//Constructeur
deplacement::deplacement()
{
	_x = 0;
	_y = 0;
	_direction = 'N';
}

// Constructeur parametree
deplacement::deplacement(unsigned int x, unsigned int y, char direction)
{
	assert(direction == 'N' || direction == 'E' || direction == 'S' || direction == 'O');

	_x = x;
	_y = y;
	_direction = direction;
}

//Destructeur
deplacement::~deplacement() {}

//Copieur
deplacement::deplacement(const deplacement & d)
{
	_x = d._x;
	_y = d._y;
	_direction = d._direction;
}


// Change la direction
void deplacement::setDirection(char direction)
{
	assert(direction == 'N' || direction == 'E' || direction == 'S' || direction == 'O');
	_direction = direction;
}

//Change la position
void deplacement::setPosition(unsigned int x, unsigned int y)
{
	_x = x;
	_y = y;
}

// Retourne la direction
char deplacement::getDirection()const
{
	return _direction;
}

// Retourne la position X
int deplacement::getX()const
{
	return _x;
}

// Retourne la position Y
int deplacement::getY()const
{
	return _y;
}

// Affiche la position et la direction
ostream& deplacement::print(ostream& os) const
{
	return os << "(" << _x << "," << _y << ")" << " " << _direction;
}


// Operateur <<
ostream& operator<<(ostream& os, deplacement& d)
{
	return d.print(os);
}

void deplacement::avance(map<char>& carte, entity& who) {
	char direction = who.getDirection;
	if (canAdvance(carte,who.getY,who.getX,direction)) {
		carte[who.getX()][who.getY] = '0';
		who.move();
		// mettre le son de mouvement
	}
}

bool deplacement::canAdvance(map<char>& carte, int y , int x, char direction) {
	if (y > 0)
		if (direction == 'N')
			if ((carte[x][y - 1] == '0'))
				return true;

	if (x < carte.nbLine())
		if (direction == 'E')
			if ((carte[x + 1][y] == '0'))
				return true;

	if (y < carte.nbCol())
		if (direction == 'S')
			if ((carte[x][y + 1] == '0'))
				return true;

	if (x > 0)
		if (direction == 'O')
			if ((carte[x - 1][y] == '0'))
				return true;

	return false;
}