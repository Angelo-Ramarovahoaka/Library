#include<iostream>
#include "../Header/Parallelograme.hpp"
using namespace std;

Parallelograme::Parallelograme(float base, float hauteur)
{
    this->base=base;
    this->hauteur=hauteur;
}
Parallelograme::~Parallelograme(){}
float Parallelograme::getBase(){
    return this->base;
}
float Parallelograme::getHauteur(){
    return this->hauteur;
}

void Parallelograme::setBase(float base)
{
    this->base=base;
}

void Parallelograme::setHauteur(float hauteur)
{
    this->hauteur=hauteur;
}

float Parallelograme::SurfaceParallelograme() 
{
	return this->base * this->hauteur;
}


