#include <bits/stdc++.h>
using namespace std;

/*void Rekursija(int num) {
    if (num < 10) {
        cout << num;
        return;
    }
    cout << num % 10;
    Rekursija(num / 10);
}

int main() {
    int num;
    cout <<"Įveskite skaiciu: ";
    cin >> num;

    cout << "Skaicius atvirksciai: ";
    Rekursija(num);
    cout << endl;

    return 0;
}

void Laipsnis(int num, int lp,int n) {

    cout<<pow(num,lp)<<" "<<endl;
   if(n>1) {
       Laipsnis(num=pow(num,lp),lp,n-1);
   }
}
int main() {
    int num,lp,n;
    cout<<"Iveskite skaiciu: "<<endl;
    cin>>num;
    cout<<"Iveskite i kuria laipsni: "<<endl;
    cin>>lp;
    cout<<"Iveskite kiek kartu: "<<endl;
    cin>>n;
    Laipsnis(num, lp, n);
    return 0;
}*/

void DešimtainisĮDvejetainį(int n) {
    if (n == 0) {
        return;
    }
    DešimtainisĮDvejetainį(n / 2);
    cout << n % 2;
}

int main() {
    int num;
    cout << "Įveskite dešimtainį skaičių: ";
    cin >> num;
    if (num == 0) {
        cout << "Dvejetainis skaičius: 0" << endl;
    } else {
        cout << "Dvejetainis skaičius: ";
        DešimtainisĮDvejetainį(num);
        cout << endl;
    }

    return 0;
}


