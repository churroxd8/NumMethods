#include <bits/stdc++.h>
#define PRECISION 6
using namespace std;
double funcion(double x);
void biseccion(double a, double b, double epsilon);

int main()
{
    double a, b, epsilon;
    cout << "Programa que calcula la aproximaci\242n de la ra\241z de una ecuaci\242n mediante el m\202todo de bisecci\242n: " << endl << endl;
    cout << "Ingresa el valor de a del intervalo: ";
    cin >> a;
    cout << "Ingresa el valor de b del intervalo: ";
    cin >> b;
    cout << "Ingresa la tolerancia (epsilon): ";
    cin >> epsilon;
    cout << endl;
    biseccion(a,b,epsilon);
    cout << endl;
    system("pause");
    return 0;

}

double funcion(double x)
{
    return x*x + 4*x + 3;       // esta función se puede intercambiar por otra
}

void biseccion(double a, double b, double epsilon)
{
    cout << setprecision(PRECISION) << fixed;
    if(funcion(a) * funcion(b) > 0){
        cout << "El intervalo ingresado es incorrecto para aplicar el m\202todo de bisecci\242n\n";
        return;
    }
    if(funcion(a) * funcion(b) == 0){
        cout << "Un dato del intervalo es la ra\241z, por lo que no podemos aplicar el m\202todo\n";
        return;
    }
    double c = a;
    int pasos = 0;
    cout << "\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315" << endl;
    cout << "n" << setw(10) << "\ta" << setw(10) << "\tb" << setw(10) << "\tx" << setw(10) << "\t     f(x)" << endl;
    cout << "\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315" << endl;
    while((b - a) >= epsilon){
        cout << pasos << "\t " << setw(10) << a << "\t " << setw(10) << b << "\t " << setw(10) << c << "\t " << setw(10) << funcion(c) << endl;
        c = (a + b) / 2;
        if(funcion(c) == 0.0)
            break;
        else if (funcion(c) * funcion(a) < 0)
            b = c;
        else
            a = c;
        pasos = pasos + 1;
    }
    cout << "\nLa ra\241z se aproxima a: " << c;
    cout << endl;
}
