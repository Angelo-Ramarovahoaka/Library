#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
class Triangle
	{
		public: 
			Triangle(float base, float hauteur);
			~Triangle();
			float getBase();
            float getHauteur();
			void setBase(float base);
            void setHauteur(float hauteur);
			float SurfaceTriangle();
		private:
			float base;
            float hauteur;
 	};
	#endif