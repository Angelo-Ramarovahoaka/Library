#include "../Header/Carre.hpp"
Carre::Carre(float cote)
{
    this->cote=cote;
}
Carre::~Carre(){}

float Carre::getCote(){
    return cote;
}

void Carre::setCote(float C)
{
    cote=C;
}
float Carre::Surface() 
{
	return cote*cote;
}
