#include<iostream>
#include "../Header/Triangle.hpp"
using namespace std;

Triangle::Triangle(float base, float hauteur)
{
    this->base=base;
    this->hauteur=hauteur;
}
Triangle::~Triangle(){}

float Triangle::getBase(){
    return this->base;
}
float Triangle::getHauteur(){
    return this->hauteur;
}

void Triangle::setBase(float base)
{
    this->base=base;
}

void Triangle::setHauteur(float hauteur)
{
    this->hauteur=hauteur;
}

float Triangle::SurfaceTriangle() 
{
	return ((this->base * this->hauteur)/2);
}


