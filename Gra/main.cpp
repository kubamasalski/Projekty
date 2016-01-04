#include <iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>
using namespace std;
int validatedInput(int min = 1, int max = 100)
{
    while(true)
    {

        string s;
        getline(cin,s);
        char *endp = 0;
        int ret = strtol(s.c_str(),&endp,10);
        if(endp!=s.c_str() && !*endp && ret >= min && ret <= max)
            return ret;
        cout << "Niepoprawna wartosc Dozwolony zakres: " << min << "-" << max <<endl;
    }
}
int liczba, strzal, ile_prob=0;
int main()
{
    cout << "Witaj!!! " << endl;
    cout << "Pomyslalem sobie liczbe 1.....100" << endl;
    srand(time(NULL));
   liczba = rand()%100+1;
    while(strzal!=liczba)
{
    ile_prob++;
    cout << "Zgadnij jaka (To Twoja "<<ile_prob<<" proba:";
    strzal = validatedInput();

    if(strzal==liczba)
        cout << "Brawo!Pokonales mnie w "<<ile_prob<<" probie"<<endl;
    else if(strzal<liczba)
        cout << "Za malo!"<<endl;
    else if(strzal>liczba)
        cout << "Za duzo!"<<endl;

}

    getchar();getchar();
    return 0;
}
