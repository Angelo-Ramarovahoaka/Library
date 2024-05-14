#include <iostream>
#include "Activation.hpp"
using namespace std;
int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifyActivation();
    }
    if (test.getNumberTry() > 0)
    {

        if (test.getStatus() == true)
        {
            cout << "Bonjour!" << endl;
        }
        else
        {
            cout << "autre essai ou acheter une autre clé" <<endl;
        }
    }
    else
    {
        cout << "acheter une autre clé" <<endl;
    }
    return 0;
}