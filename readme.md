#  Un library des formes geometriques
 on y trouve quelques attributs et methodes des forme Triangle, carre, rectangle, cercle et parallélogramme
 Pour y acceder :
  *Pour la librairie statique:
    g++ -c *.cpp
    ar -rv libgeometry.a *.o
    
    déplacée libgeometrie.a vers ./../lib/libStatic/ qui est le dossier qui contient la librairie statique
    après :
    g++ main.cpp -L/chemin/vers/libActivation.a -lgeometrie -mainstatic.exe
    ./mainstatic.exe

  *Pour la librairie dynamique:
 g++ -fPIC -c *.cpp 
 g++ -o libgeometrie.so -shared *.o
   déplacée libgeometrie.so vers ./../lib/libDynamic/ qui est le dossier contenant la librairie statique 
  Et après il faut configurer les fichiers de configuration /etc/ld.so.conf en y ajoutant le chemin de la repetoire parentale de libActivation.so
  sudo ldconfig
  g++ votreMain.cpp -L/path/vers/repertoire parentale de cette libraire -loperation -o maindynamic.exe
  ./maindynamic.exe

  ## SERIAL KEY ACTIVATION
Un programme qui fonctionne en fonction d'un librairie d'Activation (c'est à dire le programme fonctionne avec une clée qui est dans la librairie "LibActivation")

Vous avez un programme et un fichier(dont vous devez remplisser par le serial key ) le programme fonctionne si le serial key correspond avec la clée dans le librairie Activation

* les commandes à executer pour la librairie Dynamique  
  g++ -c *.cpp                    
    creation de l'objet.o
  ar -rv libgeometry.a *.o        
    creation de la bibliothèque statique
* Les commandes à executer pour la librairie statique : 
  g++ -c *.cpp                    
    creation de l'objet.o
  ar -rv libgeometry.a *.o        
    creation de la bibliothèque statique

