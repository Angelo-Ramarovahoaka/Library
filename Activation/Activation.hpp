#ifndef _ACTIVATION_
#define _ACTIVATION_
#include <fstream>
#include <string>

using namespace std;

class Activation
{
public:
    Activation();
    ~Activation();
    bool verifyActivation();
    void activat();
    bool getStatus();
    int getNumberTry();
private:
    string TrueKey = "1234567890";
    int numberTry;
    bool status = false;
};

#endif