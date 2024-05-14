#include <iostream>
#include <string>
#include "Activation.hpp"
using namespace std;
bool Activation::verifyActivation()
{
    ifstream fs("cerial.txt");
    if (fs.fail())
    {
        cout << "fichier d'activation introuvable" << endl;
        return false;
    }
    else
    {
        string key;
        fs >> key;
        fs.close();
        if (key == TrueKey)
        {
            cout << "Activation succes" << endl;
            activat();
            return true;
        }
        else
        {
            string numberString;
            ifstream tryFyle("essai.txt");
            tryFyle >> numberString;
            tryFyle.close();
            int i = stoi(numberString), value;
            ofstream restFile("essai.txt");
            value = (i - 1);
            restFile << value;
            restFile.close();
            return false;
        }
    }
}

void Activation::activat()
{
    ofstream file("essai.txt");
    file << "activated";
    status = true;
    file.close();
}

Activation::Activation()
{
    string i;
    ifstream file("essai.txt");
    if (file.fail())
    {
        cout << "essai.txt introuvable" <<endl,
        numberTry = 0;
    }
    else
    {
        file >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            numberTry = stoi(i);
        }
        file.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return status;
}

int Activation::getNumberTry()
{
    return numberTry;
}