#include <bits/stdc++.h>

using namespace std;
void Firstprog();
int main() {
    int num=0;
    char zn;

    /*while(num!=3) {
        cout <<"Pasirinkite veiksma: "<<endl;
        cout << "1. Pirmas pasirinkimas (naudojant abėcėlę). " << endl;
        cout << "2. Antras pasirinkimas (naudojant ASCII koduotę). " << endl;
        cout << "3. Iseiti. " << endl;
        cin>>num;
        switch (num) {
            case 1:
                break;

        }
    }
    */
    Firstprog();


    return 0;
}
void Firstprog() {
    int ABC[32]={'A','Ą','B','C','Č','D','E','Ę','Ė','F','G','H','I','Į','Y','J','K','L','M','N','O','P','R','S','Š','T','U','Ų','Ū','V','Z','Ž'};
    char text[100]={'0'},key[100]={'0'},word[100]={'0'};
    cout<<"Iveskite pradini teksta: "<<endl;
    cin>>text;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>key;
    for(int i=0;i<100;i++) {
        for(int j=0;j<32;j++) {
            if(text[i]==ABC[j]) {
                text[i]=j;
            }
            if(key[i]=ABC[j]) {
                key[i]=j;
            }
        }
    }
    for(int i=0;i<100;i++) {
        if(text[i]+key[i]<32) {
            word[i]=text[i]+key[i];
        }else {
            word[i]=(text[i]+key[i])%32;
        }
    }
    for(int i=0;i<100;i++) {
        for(int j=0;j<32;j++) {
            if(word[i]==ABC[j]) {
                word[i]=j;
            }
        }
    }
    cout<<"Jusu kodas:"<<endl;
    for(int i=0;i<100;i++) {
        cout<<word[i];
    }



}