/*************************************************************************************
 *	File  : entity.cpp
 *	Author: Anthony Cote & Marc-Etienne Pepin
 *	Date  : 2017/11/01
 *	Goal  : L’objet robot offre les mécanismes suivants :
 *			s’initialiser, s’afficher, avancer ds le labyrinthe en empilant les
 *			déplacements, changer de direction. Initialiser le robot consiste à
 *			empiler la position de départ. La pile sera une pile de déplacement.
 ************************************************************************************/

#include "entity.h"

////////////////////////////////////////////////////////
//Constructeur
entity::entity(float x, float y, int direction)
{
	assert(direction == north || direction == east || direction == south || direction == west);

	_x = x;
	_y = y;
	_direction = direction;

}


//Copieur
entity::entity(const entity & e)
{
	_x = e._x;
	_y = e._y;
	_direction = e._direction;
}

//Change sa position de 1 dans la direction
void entity::move()
{
	switch (_direction)
	{
	case north:
		setPosition(_x, _y - 1);
		break;
	case east:
		setPosition(_x + 1, _y);
		break;
	case south:
		setPosition(_x, _y + 1);
		break;
	case west:
		setPosition(_x - 1, _y);
		break;
	}
}

// Change la direction de 90 degree anti-clockwise
void entity::turnLeft()			// ======================================================= a suprimer si il n'y a pas utiliser
{
	switch (_direction)
	{
	case north:
		_direction = west;
		break;
	case east:
		_direction = north;
		break;
	case south:
		_direction = east;
		break;
	case west:
		_direction = south;
		break;
	}
}

// Change la direction de 90 degree clockwise
void entity::turnRight()			// ======================================================= a suprimer si il n'y a pas utiliser
{
	switch (_direction)
	{
	case north:
		_direction = east;
		break;
	case east:
		_direction = south;
		break;
	case south:
		_direction = west;
		break;
	case west:
		_direction = north;
		break;
	}
}

// Change la direction
void entity::setDirection(int direction)
{
	assert(direction == north || direction == east || direction == south || direction == west);
	_direction = direction;
}

//Change la position
void entity::setPosition(float x, float y)
{
	_x = x;
	_y = y;
}

// Retourne la direction
int entity::getDirection()const
{
	return _direction;
}

// Retourne la position X
float entity::getX()const
{
	return _x;
}

// Retourne la position Y
float entity::getY()const
{
	return _y;
}

void entity::moveFoward(gen::map<int>& mapp, entity & who)
{

}
