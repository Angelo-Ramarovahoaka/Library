	#ifndef CERCLE_HPP
	#define CERCLE_HPP
  class Cercle{
 	public:
 		Cercle(float rayon);
 		~Cercle();
 		float getRayon();
		void setRayon(float R);
 		float circonference();
 	private:
 		float rayon;
 	};
	#endif

