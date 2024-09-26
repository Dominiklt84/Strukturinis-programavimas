#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*void info() {
    string vard="Dominik", priez="Labai gera profesija";
    cout<<vard<<endl;
    cout<<priez<<endl;
}
void V1() {
    string var="Vilniaus kolegija";
    cout<<var<<endl;
}
void V2() {
    string var2="Elektronikos ir informatikos fakultetas";
    cout<<var2<<endl;
}

int Random() {
    for (int i = 1; i <=10; i++)
        cout << rand() <<endl;
}

double dv() {
    int sk1,sk2;
    cin>>sk1;
    cin>>sk2;
    cout<<"Suma: "<<sk1+sk2<<endl;
    cout<<"Skirtumas: "<<sk1-sk2<<endl;
    cout<<"Sandauga: "<<sk1*sk2<<endl;
    cout<<"Dalyba: "<<sk1/sk2<<endl;
}
*/
int skaiciai() {
    int a,b;
    cout<<"Pirmas skaicius: "<<endl;
    cin>>a;
    cout<<"Antras skaicius: "<<endl;
    cin>>b;
    if(a>b) {
        cout<<a<<" Skaicius didesnis"<<endl;
    }else if(a<b) {
        cout<<b<<" Skaicius didesnis";
    }else cout<<" Skaiciai lygus"<<endl;

}
int main() {
    /*info();
    V1();
    V2();
    Random();
    dv();
    */
    skaiciai();



    return 0;
}
