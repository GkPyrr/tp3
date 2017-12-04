/*************************************************************************************
 *	File  : entity.h
 *	Author: Anthony Cote & Marc-Etienne Pepin
 *	Date  : 2017/11/01
 *	Goal  : L’objet robot offre les mécanismes suivants :
 *			s’initialiser, s’afficher, avancer ds le labyrinthe en empilant les
 *			déplacements, changer de direction. Initialiser le robot consiste à
 *			empiler la position de départ. La pile sera une pile de déplacement.
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
