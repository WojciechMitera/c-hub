#include <iostream>
#include <windows.h>

using namespace std;
void menu()
{
    cout << "MENU"<< endl;
    cout << "1. Dodaj" << endl;
    cout << "2. Usun" << endl;
    cout << "3. Wyswietl" << endl;
    cout << "4. Wyjdz" << endl;
}
int dodaj(int *p, int *n)
{
    int x;
    cout << "Podaj element: " << endl;
    cin >> x;
    p[*n] = x;
    *n += 1;
}
int usun(int *p, int *n)
{
    int x;
    cout << "Podaj index elementu" << endl;
    cin >> x;

    delete[] p;
}
int wyswietl(int *p, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        cout << p[i] << ", ";
    }
}
int main()
{
    int *p = NULL;
    int n = 0;
    int *pn = &n;
    p = new int[n];
    while(true)
    {
        system("cls");
        menu();
        int x;
        cin >> x;

        switch(x)
        {
        case 1:
            {
                dodaj(p, pn);
                break;
            }
        case 2:
            {
                break;
            }
        case 3:
            {
                cout << "Elementy tablicy: ";
                wyswietl(p, pn);
                cout << "\n";
                system("pause");
                break;
            }
        case 4:
            {
                break;
            }
        }
    }


    return 0;
}
