 #include "../Header/Cercle.hpp"
 
 Cercle::Cercle(float rayon)
 {
	this->rayon=rayon;
 }

 Cercle::~Cercle()
 {}

float Cercle::getRayon()
{
 	return rayon;
}

float Cercle::circonference()
{
  return 2*3.14*rayon;
}

void Cercle::setRayon(float R)
{
	rayon=R;
}

 	
 	
