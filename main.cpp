#include <iostream>
#include "prog.h"
using namespace std;

int main()
{
    bool wlaczony = true;
    double a, p;
    int wybor;

    do
        {

        cout << "Podaj figure:" << endl;
             << "1. Kwadrat" << endl;
             << "2. Szescian" << endl;
             << "3. Wyjdz" << endl;

        cin >> wybor;

        switch (wybor)
        {
            case 1:
                cout << "Podaj a:";
                cin >> a;
                p = PoleKwadratu(a);
                cout << "Pole kwadratu: " << p << endl;
                break;
            case 2:
                cout << "Podaj a:";
                cin >> a;
                p = PoleSzescianu(a);
                cout << "Pole szescianu: " << p << endl;
                p = ObjetoscSzescianu(a);
                cout << "Objetosc szescianu: " << p << endl;
                break;
            case 3:
                wlaczony = false;
                break;

        }

    } while (wlaczony);

    return 0;
}
