#ifndef RARALLELOGRAMME_HPP
#define RARALLELOGRAMME_HPP
#include"Triangle.hpp"
class Parallelograme 
{
    public:
        Parallelograme(float base, float hauteur);
        ~Parallelograme();
        float getBase();
        float getHauteur();
		void setBase(float base);
        void setHauteur(float hauteur);
        float SurfaceParallelograme();
    private:
        float base;
        float hauteur;
};
#endif