#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe calkowita od 0 do 999: " << endl;
    cin >> a;
    if ((a >= 0) && (a <= 999)) {

          }
        if (a >= 100) {
            a = a - (a - (a % 1000));
            cout << "Liczba setek: " << (a - (a % 100)) / 100 << endl;
        }
        if (a >= 10) {
            a = a - (a - (a % 100));
            cout << "Liczba dziesiatek: " << (a - (a % 10)) / 10 << endl;
        }
        if (a >= 0) {
            a = a - (a - (a % 10));
            cout << "Liczba jednostek: " << a << endl;
        }
        else{
        (a >= 1000) {
        cout << "Liczba nie miesci sie w przedziale od 0 do 999" << a << endl;
    }
    system("pause");
    return 0;

}