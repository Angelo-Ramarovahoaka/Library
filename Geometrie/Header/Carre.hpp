	#ifndef CARRE_HPP
	#define CARRE_HPP
	class Carre
	{
		public: 
			Carre(float cote);
			~Carre();
			float getCote();
			void setCote(float C);
			float Surface();
		private:
			float cote;
 	};
	#endif
