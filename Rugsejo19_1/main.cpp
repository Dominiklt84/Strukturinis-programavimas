#include <iostream>

using namespace std;

int main() {
    int paz1,paz2,paz3,v,i,egz, choise=0;
    while(choise !=3) {
        cout<<"Paprasta meniu pasirinkimas"<<endl;
        cout<<"1. Pirma opcija"<<endl;
        cout<<"2. Antra opcija"<<endl;
        cout<<"3. Iseiti"<<endl;
        cout<<"Jusu pasirinkimas"<<endl;
        cin>>choise;
        switch (choise) {
            case 1:
            cout<<"Jus pasirinkote pirma opcija"<<endl;
            cout<<"Iveskite 1 pazymi"<<endl;
            cin>>paz1;
            i++;
            cout<<"Iveskite 2 pazymi"<<endl;
            cin>>paz2;
            i++;
            cout<<"Iveskite 3 pazymi"<<endl;
            cin>>paz3;
            i++;
            v=(paz1+paz2+paz3)/i;
            if(v>=5) {
                cout<<"Vidurkis yra teigiamas"<<endl;
            } else cout<<"Vidurkis yra neigiamas"<<endl;
            break;
            case 2:
                cout<<"Jus pasirinkote antra opcija"<<endl;
            cout<<"Iveskite egzamino ivertinimas"<<endl;
            cin>>egz;
            if(egz==10)
            {
                cout<<"puiku"<<endl;
            }
            else if(egz>=9) {
                cout<<"labai gerai"<<endl;
            }
            else if(egz>=7) {
                cout<<"gerai"<<endl;
            }
            else if(egz>=5) {
                cout<<"patenkinamai"<<endl;
            }
            else cout<<"egzaminas neislaikytas"<<endl;
            break;
            case 3:
                cout<<"jus isejote is programos"<<endl;
            default:
                cout<<"Tokio pasirinkimo nera. Bandykite dar karta"<<endl;

        }
    }


    return 0;
}

