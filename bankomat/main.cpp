#include <iostream>

using namespace std;

string PIN;
int DobryPIN = 2056;

bool sprzwdzPin(int Pin)
{
    if (Pin == DobryPIN)
        return true;
    else return false;
}
int ilePieniedzy()
{
 int ileChceForsy =0;
  cout << "Ile chcesz wyplacic pieniedzy?" << endl;
  cout << "100,500,1000zl";
  cin >> ileChceForsy;
  return ileChceForsy;
}
int main()
{
    int odczytanyPin =0;
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj numer PIN :";
    cin >> odczytanyPin;

    if(sprzwdzPin(odczytanyPin))
    {
        cout << "Poprawny PIN" << endl;
        cout << "Ile chcesz wyplacic pieniedzy?" << endl;
        cout << "100,500,1000zl";
    }

    else
    {
        cout << "NiePoprawny PIN";
        cout << "Podaj numer PIN :";
        cin >> odczytanyPin;
    }
    if(sprzwdzPin(odczytanyPin))
    {
        cout << "Poprawny PIN" << endl;
        cout << "Ile chcesz wyplacic pieniedzy?" << endl;
        cout << "100,500,1000zl";


    }else
    {
       cout << "2 razy zy PIN !!" << endl;
    }



    return 0;
}

