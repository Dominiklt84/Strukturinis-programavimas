#include <bits/stdc++.h>

using namespace std;

int suskaiciuotiPerimetra(int krastine, int Perimetras);
void suskaiciuotiPlota(int krastine,int& plotas);
int main()
{
    int krastine, plotas, Perimetras=0;
    cout<<"Iveskite krastines ilgi: "<<endl;
    cin>>krastine;
    Perimetras=suskaiciuotiPerimetra(krastine,Perimetras);
    cout<<"Perimetras: "<<Perimetras<<endl;
    suskaiciuotiPlota(krastine,plotas);
    return 0;
}



int suskaiciuotiPerimetra(int krastine, int Perimetras) {
    Perimetras=4*krastine;
    return Perimetras;
}
void suskaiciuotiPlota(int krastine,int& plotas) {
    plotas=krastine*krastine;
    cout<<"Plotas: "<<plotas;
}