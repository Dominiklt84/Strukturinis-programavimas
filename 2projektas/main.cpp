#include <bits/stdc++.h>

using namespace std;
bool Balse(char raide);
int bendaliklis(int skaicius1,int skaicius2);

int main()
{
    int num=0,skaicius1,skaicius2;
    char raide;
    while(num!=5) {
        cout <<"Pasirinkite veiksma: "<<endl;
        cout << "1. Patikrinimas ar raide yra balse. " << endl;
        cout << "2. Rasti maziausia bendra dalikli tarp dvieju ivestu skaitmenu. " << endl;
        cout << "3. Mini zaidimas. " << endl;
        cout << "4. Skaiciu tvarka. " << endl;
        cout << "5. Iseiti. "<<endl;
        cin>>num;
        switch(num) {
            case 1:
                if(Balse(raide)) {
                    cout<<"Tai yra balse."<<endl;
                }else {
                    cout<<"Tai nera balse."<<endl;
            }
            break;
            case 2:
                cout<<"Iveskite pirma skaitmuo: "<<endl;
                cin>>skaicius1;
                cout<<"Iveskite antra skaitmeni: "<<endl;
                cin>>skaicius2;
                cout << "Didziausias bendras daliklis: " << bendaliklis(skaicius1, skaicius2) << endl;
            break;

        }
    }
    return 0;
}
bool Balse(char raide) {
    char balse[]={'a','e','i','o','u','A','E','I','O','U'};
    cout<<"Iveskite raide: "<<endl;
    cin>>raide;
    for(int i=0;i<10;i++) {
        if(raide==balse[i]) {
            return true;
        }
    }
    return false;
}

int bendaliklis(int skaicius1,int skaicius2) {
    while(skaicius2 !=0) {
            int daliklis=skaicius2 % skaicius1;
            skaicius1=skaicius2;
            skaicius2=daliklis;
    }
    return skaicius1;
}