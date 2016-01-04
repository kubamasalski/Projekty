#include <iostream>

using namespace std;

string imie; int liczba;


int main()
{
    cout<< "Pojad swoje imie:" << endl;
    cin>>imie;
    cout << "Podaj dowolna liczbe dodatnia:";
    cin>>liczba;

   for(int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }


    return 0;
}
