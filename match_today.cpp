#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void main()
{
    string str;
    do {
        cout << "===============================================================================" << endl;
        cout << "= KALKULATOR 'LANGUAGE: POLAND' WYBIERZ METODE, WPISUJAC PRZYPISANY JEJ NUMER =" << endl;
        cout << "===============================================================================" << endl;
        cout << "= 1.DODOWANIE "; cout << "= 2.ODEJMOWANIE "; cout << "= 3.MNOZENIE "; cout << "= 4.DZIELENIE "; cout << "= 5.TRYGONOMETRIA    =" << endl;
        cout << "===============================================================================" << endl;
        int selector; cout << "= 0.WYJSCIE = "; cout << "= TWOJ WYBOR:  "; cin >> selector;

        switch (selector)
        {
        case 1: static float na; float nb; cout << "PODAJ CYFRY DO SUMY: "; cin >> na; cout << "PODAJ CYFRY DO SUMY: ";
            cin >> nb; int op; cout << "\n"; na = na + nb;
            do
            {
                cout << "AKTUALNY WYNIK: " << na;
                cout << "\nDODAC KOLEJNA? (1 - TAK/2 - NIE): "; cin >> op;
                if (op == 2)
                {
                    break;
                }
                else {
                    cout << "PODAJ KOLEJNE CYFRY: "; cin >> nb;
                    na = na + nb;
                }
            } while (op == 1);
            cout << "\nSUMA: " << na;
            na = 0;
            nb = 0;
            break;
        case 2: cout << "PODAJ CYFRY DO SUMY: "; cin >> na; cout << "PODAJ CYFRY DO SUMY: ";
            cin >> nb; cout << "\n"; na = na - nb;
            do
            {
                cout << "AKTUALNY WYNIK: " << na;
                cout << "\nODJAC KOLEJNA? (1 - TAK/2 - NIE): "; cin >> op;
                if (op == 2)
                {
                    break;
                }
                else {
                    cout << "PODAJ KOLEJNE CYFRY: "; cin >> nb;
                    na = na - nb;
                }
            } while (op == 1);
            cout << "\nSUMA: " << na;
            na = 0;
            nb = 0;
            break;

        case 3: cout << "PODAJ CYFRY DO SUMY: "; cin >> na; cout << "PODAJ CYFRY DO SUMY: ";
            cin >> nb; cout << "\n"; na = na * nb;
            do
            {
                cout << "AKTUALNY WYNIK: " << na;
                cout << "\nMNOZYC PRZEZ KOLEJNA? (1 - TAK/2 - NIE): "; cin >> op;
                if (op == 2)
                {
                    break;
                }
                else {
                    cout << "PODAJ KOLEJNE CYFRY: "; cin >> nb;
                    na = na * nb;
                }
            } while (op == 1);
            cout << "\nSUMA: " << na;
            break;
        case 4: cout << "PODAJ CYFRY DO SUMY: "; cin >> na; cout << "PODAJ CYFRY DO SUMY: ";
            cin >> nb; cout << "\n"; na = na / nb;
            do
            {
                cout << "AKTUALNY WYNIK: " << na;
                cout << "\nDZIELIC PRZEZ KOLEJNA? (1 - TAK/2 - NIE): "; cin >> op;
                if (op == 2)
                {
                    break;
                }
                else {
                    cout << "PODAJ KOLEJNE CYFRY: "; cin >> nb;
                    na = na / nb;
                }
            } while (op == 1);
            cout << "\nSUMA: " << na;
            break;
        case 5: /*int nd;
                cout << "TRYGONOMETRA - WYBIERZ METODE" << endl;
                cout << "TROJKAT PROSTOKATNY: 1" << endl;
                cout << "DOWOLNY KAT: 2" << endl;
                cout << "TWOJ WYBOR: ";
                cin >> nd;
                if (nd == 1)
                {
                    //array for trigonometry
                    for(i = )
                    static float a, b, c, sin, cos, tg, ctg;
                    string o;
                    cout << "PAMIETAJ: A - PTZYPROSTOKATNA, B - PRZYPROSTOKATNA, C - PRZECIWPROSTOKATNA, SIN/COS/TG/CTG - KAT OSTRY KATA" << endl;
                    cout << "WARTOSC KATOW PODAWAJ JAKO ZWYKLA LICZBA BEZ STOPNI" << endl;
                    cout << "SZUKANA: A, B, C LUB SIN, COS, TG, CTG: ";
                    cin >> o;
                    cout << "WPISZ DANE, JEZLEI BRAK DANYCH TO WPISZ 0" << endl;
                    cout << "A: "; cin >> a; cout << "B: "; cin >> b; cout << "C: "; cin >> c; cout << "SIN: "; cin >> sin;
                    cout << "COS: "; cin >> sin; cout << "TG: "; cin >> tg; cout << "CTG: "; cin >> ctg;
                    if (a > 0 && b > 0)
                    {
                        double pot; double por; double poq;
                        pot = pow(a, 2);
                        por = pow(b, 2);
                        cout << "A PITAGORASA ZNASZ? "; cout << "WYNIK: ";
                        poq = sqrt(pot + por); cout << poq;
                    }
                    if (b > 0 && c > 0)
                    {
                        double pot; double por; double poq;
                        pot = pow(b, 2);
                        por = pow(c, 2);
                        cout << "A PITAGORASA ZNASZ? "; cout << "WYNIK: ";
                        poq = sqrt(por - pot); cout << poq;
                    }
                    if (c > 0 && a > 0)
                    {
                        double pot; double por; double poq;
                        pot = pow(c, 2);
                        por = pow(a, 2);
                        cout << "A PITAGORASA ZNASZ? "; cout << "WYNIK: ";
                        poq = sqrt(pot - por); cout << poq;
                    }
                    if (o == "A")
                    {
                        if (b > 0)
                        {
                            if(sin > 0)
                            {
                                const double pi = 3.1415923865;
                                static float rad = sin * pi / 180;
                                double sin(sin);
                                cout << sin;

                            }
                            if(cos > 0){}
                            if(tg > 0){}
                            if(ctg > 0){}
                        }
                        if (c > 0)
                        {
                            if (sin > 0) {}
                            if (cos > 0) {}
                            if (tg > 0) {}
                            if (ctg > 0) {}
                        }
                    }





                }
                else {


                }
                */ //another idea
            cout << "AKTUALNIE BRAK ALGORYTMU"; break;




        default:;
        }
        cout << "\n \n POWROT DO MENU(TAK/NIE): ";
        cout << "\n \n \n";
        cin >> str;
    }while (str == "TAK" && "tak");
}

