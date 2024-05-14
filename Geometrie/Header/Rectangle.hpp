#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
class Rectangle
	{
		public: 
			Rectangle(float largeur, float longueur);
			~Rectangle();
			float getlargeur();
            float getLongueur();
			void setLargeur(float largeur);
            void setLongueur(float longeur);
			float SurfaceRectangle();
		private:
			float longueur;
            float largeur;
 	};
	#endif