using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Wybierz liczb� od 1 do 100";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama:";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);

    cout << "Cukierkow dla kazdego ucznia" <<x;

    y = cukierki-x*(uczniowie-1);
    cout <<endl<< "Zostanie:" <<x;


    return 0;
}
