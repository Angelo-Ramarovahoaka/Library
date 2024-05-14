#include<iostream>
#include "../Header/Cercle.hpp"
#include "../Header/Carre.hpp"
#include "../Header/Rectangle.hpp"
#include "../Header/Triangle.hpp"
#include "../Header/Parallelograme.hpp"

using namespace std;
int main() {

    Cercle cercle(5.0);
    cout << cercle.circonference() << endl;

    Carre carre(6.0);
    cout << carre.Surface() << endl;

    Rectangle rectangle(4.0, 5.0);
    cout << rectangle.SurfaceRectangle() << endl;

    Triangle triangle( 4.0, 5.0);
    cout << triangle.SurfaceTriangle() << endl;

    Parallelograme parallelograme(2.0, 3.0);
    cout << parallelograme.SurfaceParallelograme() << endl;
    return 0;
}