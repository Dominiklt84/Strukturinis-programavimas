#include <iostream>

using namespace std;

int main()
{
    //1uzd
    string varda = "Dominik", pavarde = "Alencinovic", grupe="PI24",studiju_pav="Programu Sistemos";
    int amzius = 18,kursas=1;

    cout<<"Vardas: "<<varda<<endl;
    cout<<"Pavarde: "<<pavarde<<endl;
    cout<<"Amzius: "<<amzius<<endl;
    cout<<"Grupe: "<<grupe<<endl;
    cout<<"Kursas: "<<kursas<<endl;
    cout<<"Studiju programos pavadinimas: "<<studiju_pav<<endl;
    cout<<" "<<endl;

    //2uzd
    string pavadinimas="Madrido Real",savininkas="....",arena=".....";
    int metai=1902, vietu= 999;

    cout<<"Pavadinimas: "<<pavadinimas<<endl;
    cout<<"Ikurimo metai: "<<metai<<endl;
    cout<<"Savininkas: "<<savininkas<<endl;
    cout<<"Arena: "<<arena<<endl;
    cout<<"Vietu skaicius: "<<vietu<<endl;
    cout<<" "<<endl;

    //3uzd
    string marke="Audi", modelis="c6",spalva="juodos";
    int metais=2007;
    float litrazas= 3.0;

    cout<<"Automobilis "<<marke<<" "<<modelis<<" yra pagamintas "<<metais<<" metais. Jo motoras "<<litrazas<<" litrazo. Automobilis yra "<<spalva<<" spalvos"<<endl;
    cout<<" "<<endl;

    //4uzd
    int a=13,b=5;
    float c=17.5;

    cout<<a+b-c<<endl;
    cout<<15/2+c<<endl;
    cout<<a/static_cast<double>(b)+2*c<<endl;
    cout<<14%3+6.3+b/a<<endl;
    cout<<static_cast<int>(c)%5+a-b<<endl;
    cout<<13.5/2+4.0*3.5+18<<endl;
    cout<<" "<<endl;

    //5uzd
    int g=5,h=77,i=9,j=22,k=13;

    cout<<(g+h+c+i+j)/5<<endl;
    cout<<" "<<endl;

    //6uzd
    int x=33, p=66,y;

    y=p-x;
    cout<<x<<" + "<<y<<" = "<<p<<endl;
    return 0;
}

