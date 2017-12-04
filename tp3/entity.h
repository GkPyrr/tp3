/*************************************************************************************
 *	File  : entity.h
 *	Author: Anthony Cote & Marc-Etienne Pepin
 *	Date  : 2017/11/01
 *	Goal  : L�objet robot offre les m�canismes suivants�:
 *			s�initialiser, s�afficher, avancer ds le labyrinthe en empilant les
 *			d�placements, changer de direction. Initialiser le robot consiste �
 *			empiler la position de d�part. La pile sera une pile de d�placement.
 ************************************************************************************/

#pragma once
///////////////////
#include <assert.h>
#include <iostream>
#include "movement.h"
///////////////////
using namespace std;


class entity {
private:
	float _x;                  // position x du robot
	float _y;                  // position y du robot
	int _direction;            // direction dans laquel le robot regarde

public:
	entity(float x, float y, int direction);	// constructeur param
	entity(const entity & e);					// copieur

	void move();                // le robot avance de 1 dans la direction
	void turnLeft();            // change la direction anticlockwise
	void turnRight();           // change la direction clockwise

	void setDirection(int direction);     // choisi la direction
	void setPosition(float x, float y);   // change la position
	int getDirection()const;   // retourne la direction du robot
	
	float getX()const;            // Retourne la position X
	float getY()const;            // Retourne la position Y
};
