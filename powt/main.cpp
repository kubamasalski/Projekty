#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main()
{
    for (int i=10; i>=0; i--)
   {
       Sleep(1000);
       system("cls");
       cout << i <<endl;
   }
   Sleep(2000);

    cout << "WITAJ";

    return 0;

}
