#include <bits/stdc++.h>

using namespace std;
bool Balse(char raide);
int bendaliklis(int skaicius1,int skaicius2);
void Game(int iv_num);
void fizzbuzz(int n);
int main()
{
    int num=0,skaicius1,skaicius2,iv_num=0,n;
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
            case 3:
                Game(iv_num);
            break;
            case 4:
                cout<<"Iveskite teigiama sveikaji skaičiu: "<<endl;
            cin>>n;
            fizzbuzz(n);
            break;
            case 5:
                cout<<"Jus isejote is programos"<<endl;
            break;
            default:
                cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
        }
    }
    return 0;
}
//funkcija, kuri patikrina, ar raidė yra balsė, jei taip, grąžinama true, jei ne, false
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
            int daliklis=skaicius1 % skaicius2;//dalijasi, kad gautų likutį, kol skaičius 2 bus lygus nuliui, o tada skaičius 1 yra didžiausias jų daliklis
            skaicius1=skaicius2;
            skaicius2=daliklis;
    }
    return skaicius1;
}
//funkcija, kuri generuoja skaičių nuo 1 iki 100 ir tada patikrina, ar žmogus atspėjo skaičių
void Game(int iv_num) {
    int rand_num=rand() % 100 + 1;
    cout<<"Zaidimas: Bandykite atspeti skaiciu nuo 1 iki 100."<<endl;
    while(rand_num!=iv_num) {
        cout<<"Iveskite skaiciu: "<<endl;
        cin>>iv_num;
        if(iv_num>rand_num) {
            cout<<"Jusu skaicius per didelis."<<endl;
        } else if(iv_num<rand_num) {
            cout<<"Jusu skaicius per mazas."<<endl;
        } else cout<<"Sveikiname! Jus atspejote skaiciu. "<<endl;
    }
}
//funkcija, kuri dalijasi nuo 1 iki n skaičių ir patikrina, ar ji dalijasi iš 3 ir 5 be liekanų
void fizzbuzz(int n) {
    for(int i=1;i<=n;i++) {
        if(i%3==0 && i%5==0) {
            cout<<i<<" Fizzbuzz"<<endl;
        }else if(i%3==0) {
            cout<<i<<" Fizz"<<endl;
        }else if(i%5==0) {
            cout<<i<<" Buzz"<<endl;
        }else cout<<i<<endl;
    }
}