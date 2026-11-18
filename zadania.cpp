#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Zad 1
void powitaj(string imie);
// Zad 2
void tabliczka();
// Zad 3
void wyswietlWieksza(int a, int b);
int zwrocWieksza(int a, int b);
// Zad 4
void wyswietlNajmniejsza(int a, int b, int c);
int zwrocNajmniejsza(int a, int b, int c);
// Zad 5
float obliczPoleTrojkata(float podstawa, float wysokosc);
// Zad 6
void wypiszDzielniki(int n);
// Zad 7
double obliczSredniaWazona(double x1, double x2);
// Zad 8
void obliczPrzeciwprostokatna(double a, double b);
// Zad 9
double dodaj(double a, double b);
double odejmij(double a, double b);
double pomnoz(double a, double b);
double podziel(double a, double b);
// Zad 10
double obliczSumeZwracana(int n);
void obliczSumeWyswietlana(int n);
// Zad 11
float obliczObwodProstokata(float a, float b);
// Zad 12
double obliczObjetosc();
// Zad 13
long long obliczPotege(int a, int b);
// Zad 14
long long obliczSilnie(int n);
// Zad 15
long long potegaDwojkiBezBib(int n);
long long potegaDwojkiZBib(int n);
// Zad 16
void szczesliwyNumerek(int numerek);
// Zad 17
int operacjaParzysta(int n);
int operacjaNieparzysta(int n);
// Zad 18
long long specyficzneObliczenia(int n);

int main() {
    srand(time(NULL));

    // ----------------- ZADANIE 1 -----------------
    /*
    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    powitaj(imie);
    */

    // ----------------- ZADANIE 2 -----------------
    /*
    tabliczka();
    */

    // ----------------- ZADANIE 3 -----------------
    /*
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    wyswietlWieksza(a, b);
    int wynik = zwrocWieksza(a, b);
    cout << "Funkcja obliczyla, ze wieksza liczba to: " << wynik << endl;
    */

    // ----------------- ZADANIE 4 -----------------
    /*
    int a, b, c;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    wyswietlNajmniejsza(a, b, c);
    int wynik = zwrocNajmniejsza(a, b, c);
    cout << "Funkcja obliczyla, ze najmniejsza liczba to: " << wynik << endl;
    */

    // ----------------- ZADANIE 5 -----------------
    /*
    float a, h;
    cout << "Podaj podstawe trojkata: ";
    cin >> a;
    cout << "Podaj wysokosc trojkata: ";
    cin >> h;
    float pole = obliczPoleTrojkata(a, h);
    cout << "Podwojne pole trojkata wynosi: " << pole * 2 << endl;
    */

    // ----------------- ZADANIE 6 -----------------
    /*
    int n;
    cout << "Podaj liczbe calkowita dodatnia (n > 0): ";
    cin >> n;
    if (n > 0) {
        wypiszDzielniki(n);
    } else {
        cout << "Podana liczba nie jest dodatnia!" << endl;
    }
    */

    // ----------------- ZADANIE 7 -----------------
    /*
    double x1, x2;
    cout << "Podaj dwie wartosci do sredniej: ";
    cin >> x1 >> x2;
    double wynik = obliczSredniaWazona(x1, x2);
    cout << "Srednia z podanych wartosci wynosi: " << wynik << endl;
    */

    // ----------------- ZADANIE 8 -----------------
    /*
    double a, b;
    cout << "Podaj dlugosc pierwszej przyprostokatnej: ";
    cin >> a;
    cout << "Podaj dlugosc drugiej przyprostokatnej: ";
    cin >> b;
    if (a > 0 && b > 0) {
        obliczPrzeciwprostokatna(a, b);
    } else {
        cout << "Podano niepoprawne wartosci!" << endl;
    }
    */

    // ----------------- ZADANIE 9 -----------------
    /*
    double a, b;
    char znak;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    
    switch (znak) {
        case '+': cout << "Wynik dodawania: " << dodaj(a, b) << endl; break;
        case '-': cout << "Wynik odejmowania: " << odejmij(a, b) << endl; break;
        case '*': cout << "Wynik mnozenia: " << pomnoz(a, b) << endl; break;
        case '/': 
            if (b != 0) cout << "Wynik dzielenia: " << podziel(a, b) << endl;
            else podziel(a, b);
            break;
        default: cout << "Nieznany znak operacji!" << endl; break;
    }
    */

    // ----------------- ZADANIE 10 -----------------
    /*
    int n;
    cout << "Ile skladnikow chcesz zsumowac? ";
    cin >> n;
    if (n > 0) {
        cout << "\n--- Wersja 1: Funkcja zwracajaca suma (double) ---" << endl;
        double wynik = obliczSumeZwracana(n);
        cout << "Zwrocona suma wynosi: " << wynik << endl;
        
        cout << "\n--- Wersja 2: Funkcja void (sama wyswietla sume) ---" << endl;
        obliczSumeWyswietlana(n);
    } else {
        cout << "Liczba skladnikow musi byc dodatnia!" << endl;
    }
    */

    // ----------------- ZADANIE 11 -----------------
    /*
    float a, b;
    cout << "Podaj dlugosc pierwszego boku prostokata: ";
    cin >> a;
    cout << "Podaj dlugosc drugiego boku prostokata: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "Bledne dane! Boki musza byc > 0." << endl;
    } else {
        cout << "Obwod prostokata wynosi: " << obliczObwodProstokata(a, b) << endl;
    }
    */

    // ----------------- ZADANIE 12 -----------------
    /*
    cout << "--- Program do obliczania objetosci ---" << endl;
    double wynik = obliczObjetosc();
    if (wynik > 0) {
        cout << "[W main] Objetosc prostopadloscianu wynosi: " << wynik << endl;
    }
    */

    // ----------------- ZADANIE 13 -----------------
    /*
    int a, b;
    cout << "Podaj podstawe (a > 0): ";
    cin >> a;
    cout << "Podaj wykladnik (b > 0): ";
    cin >> b;
    if (a > 0 && b > 0) {
        cout << a << " do potegi " << b << " wynosi: " << obliczPotege(a, b) << endl;
    } else {
        cout << "Liczby musza byc dodatnie!" << endl;
    }
    */

    // ----------------- ZADANIE 14 -----------------
    /*
    int n;
    cout << "Podaj liczbe naturalna n: ";
    cin >> n;
    if (n >= 0) {
        cout << n << "! wynosi: " << obliczSilnie(n) << endl;
    } else {
        cout << "Silnia jest zdefiniowana tylko dla liczb naturalnych!" << endl;
    }
    */

    // ----------------- ZADANIE 15 -----------------
    /*
    int n;
    cout << "Podaj wykladnik potegi dla liczby 2: ";
    cin >> n;
    if (n >= 0) {
        cout << "Bez gotowych funkcji: " << potegaDwojkiBezBib(n) << endl;
        cout << "Z uzyciem cmath (pow): " << potegaDwojkiZBib(n) << endl;
    }
    */

    // ----------------- ZADANIE 16 -----------------
    /*
    int numerek;
    cout << "Podaj szczesliwy numerek (1-10): ";
    cin >> numerek;
    if (numerek >= 1 && numerek <= 10) {
        szczesliwyNumerek(numerek);
    } else {
        cout << "Numerek poza przedzialem!" << endl;
    }
    */

    // ----------------- ZADANIE 17 -----------------
    /*
    cout << "Wykonywanie dzialan dla 100 kolejnych liczb naturalnych:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << "Liczba " << i << " (parzysta): " << operacjaParzysta(i) << endl;
        } else {
            cout << "Liczba " << i << " (nieparzysta): " << operacjaNieparzysta(i) << endl;
        }
    }
    */

    // ----------------- ZADANIE 18 -----------------
    /*
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    long long wynik = specyficzneObliczenia(liczba);
    cout << "Wynik z funkcji to: " << wynik << endl;
    */

    return 0;
}

// zad 01
void powitaj(string imie) {
    cout << "Czesc, " << imie << endl;
}

// zad 02
void tabliczka() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

// zad 03
void wyswietlWieksza(int a, int b) {
    if (a > b) cout << "Wieksza liczba to: " << a << endl;
    else if (b > a) cout << "Wieksza liczba to: " << b << endl;
    else cout << "Liczby sa rowne" << endl;
}

int zwrocWieksza(int a, int b) {
    if (a > b) return a;
    else return b;
}

// zad 04 (3 zmienne)
void wyswietlNajmniejsza(int a, int b, int c) {
    int najmniejsza = a;
    if (b < najmniejsza) najmniejsza = b;
    if (c < najmniejsza) najmniejsza = c;
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
}

int zwrocNajmniejsza(int a, int b, int c) {
    int najmniejsza = a;
    if (b < najmniejsza) najmniejsza = b;
    if (c < najmniejsza) najmniejsza = c;
    return najmniejsza;
}

// zad 05
float obliczPoleTrojkata(float podstawa, float wysokosc) {
    float wynik = (wysokosc * podstawa) / 2.0;
    cout << "Pole trojkata wynosi: " << wynik << endl;
    return wynik;
}

// zad 06
void wypiszDzielniki(int liczba) {
    cout << "Dzielniki liczby " << liczba << " to: ";
    for (int i = 1; i <= liczba / 2; i++) {
        if (liczba % i == 0) cout << i << ", ";
    }
    cout << liczba << endl;
}

// zad 07
double obliczSredniaWazona(double a, double b) {
    double w1, w2;
    cout << "Podaj wage dla pierwszej liczby (" << a << "): ";
    cin >> w1;
    cout << "Podaj wage dla drugiej liczby (" << b << "): ";
    cin >> w2;
    if (w1 + w2 == 0) {
        cout << "Blad! Suma wag nie moze wynosic 0." << endl;
        return 0;
    }
    double srednia = (a * w1 + b * w2) / (w1 + w2);
    return srednia;
}

// zad 08
void obliczPrzeciwprostokatna(double a, double b) {
    double c = sqrt(a * a + b * b);
    cout << "Dlugosc przeciwprostokatnej wynosi: " << c << endl;
}

// zad 09
double dodaj(double a, double b) { return a + b; }
double odejmij(double a, double b) { return a - b; }
double pomnoz(double a, double b) { return a * b; }
double podziel(double a, double b) {
    if (b == 0) {
        cout << "Blad! Nie mozna dzielic przez zero!" << endl;
        return 0;
    }
    return a / b;
}

// zad 10
double obliczSumeZwracana(int n) {
    double suma = 0.0;
    double skladnik;
    for (int i = 1; i <= n; i++) {
        cout << "Podaj skladnik " << i << " z " << n << ": ";
        cin >> skladnik;
        suma += skladnik;
    }
    return suma;
}

void obliczSumeWyswietlana(int n) {
    double suma = 0.0;
    double skladnik;
    for (int i = 1; i <= n; i++) {
        cout << "Podaj skladnik " << i << " z " << n << ": ";
        cin >> skladnik;
        suma += skladnik;
    }
    cout << "Wyliczona suma wynosi: " << suma << endl;
}

// zad 11
float obliczObwodProstokata(float a, float b) {
    float obwod = 2 * (a + b);
    return obwod;
}

// zad 12
double obliczObjetosc() {
    double a, b, c;
    cout << "Podaj dlugosc krawedzi a: "; cin >> a;
    cout << "Podaj dlugosc krawedzi b: "; cin >> b;
    cout << "Podaj dlugosc krawedzi c: "; cin >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Blad! Krawedzie musza byc wieksze od zera." << endl;
        return 0; 
    }
    double objetosc = a * b * c;
    return objetosc;
}

// zad 13
long long obliczPotege(int a, int b) {
    long long wynik = 1;
    for (int i = 0; i < b; i++) wynik *= a;
    return wynik;
}

// zad 14
long long obliczSilnie(int n) {
    long long wynik = 1;
    for (int i = 1; i <= n; i++) wynik *= i;
    return wynik;
}

// zad 15
long long potegaDwojkiBezBib(int n) {
    long long wynik = 1;
    for (int i = 0; i < n; i++) wynik *= 2;
    return wynik;
}

long long potegaDwojkiZBib(int n) {
    return pow(2, n);
}

// zad 16
void szczesliwyNumerek(int numerek) {
    int licznik = 0;
    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 10; i++) {
        int los = rand() % 10 + 1;
        cout << los << " ";
        if (los == numerek) licznik++;
    }
    cout << "\nSzczesliwy numerek " << numerek << " wypadl " << licznik << " razy." << endl;
    float procent = (licznik / 10.0f) * 100.0f;
    cout << "Stanowi to " << procent << "% wylosowanych liczb." << endl;
}

// zad 17
int operacjaParzysta(int n) {
    return n / 2;
}

int operacjaNieparzysta(int n) {
    return (n - 1) / 2;
}

// zad 18
long long specyficzneObliczenia(int n) {
    if (n % 6 == 0) {
        cout << "Liczba podzielna przez 6. Zwracam 0." << endl;
        return 0;
    } 
    else if (n % 3 == 0) {
        cout << "Liczba podzielna przez 3. Zwracam szescian." << endl;
        return (long long)n * n * n;
    } 
    else if (n % 2 == 0) {
        cout << "Liczba parzysta. Zwracam kwadrat." << endl;
        return (long long)n * n;
    }
    cout << "Liczba nie spelnia warunkow. Zwracam sama siebie." << endl;
    return n; 
}