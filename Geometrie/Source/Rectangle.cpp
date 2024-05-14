#include "../Header/Rectangle.hpp"
Rectangle::Rectangle(float largeur,float longueur)
{
    this->largeur=largeur;
    this->longueur=longueur;
}
Rectangle::~Rectangle(){}

float Rectangle::getlargeur(){
    return this->largeur;
}
float Rectangle::getLongueur(){
    return this->longueur;
}

void Rectangle::setLargeur(float largeur)
{
    this->largeur=largeur;
}

void Rectangle::setLongueur(float longueur)
{
    this->longueur=longueur;
}

float Rectangle::SurfaceRectangle() 
{
	return longueur*largeur;
}


