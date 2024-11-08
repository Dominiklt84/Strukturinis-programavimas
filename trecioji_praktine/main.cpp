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
    }*/

    Firstprog();


    return 0;
}
void Firstprog() {
    const char ABC[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char text[50],key[50],word[50],new_key[50];
    cout<<"Iveskite pradini teksta: "<<endl;
    cin>>text;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>key;
    for(int i=0;i<strlen(text);i++) {
        new_key[i]=key[i%strlen(key)];
    }
    int size_text=strlen(text),size_key=strlen(new_key);

    for(int i=0;i<size_text;i++) {
        for(int j=0;j<sizeof(ABC);j++) {
            if(toupper(text[i])==ABC[j]) {
                text[i]=j;
            }

            if(toupper(new_key[i])==ABC[j]) {
                new_key[i]=j;
            }
        }
    }

    for(int i=0;i<size_text;i++) {
        if(text[i]+new_key[i]<sizeof(ABC)) {
            word[i]=text[i]+new_key[i];
        }else {
            word[i]=(text[i]+new_key[i])%strlen(ABC);
        }
    }
    for(int i=0;i<size_text;i++) {
        for(int j=0;j<sizeof(ABC);j++) {
            if(word[i]==ABC[j]) {
                word[i]=ABC[j];
            }
        }
    }
    cout<<"Jusu kodas:"<<endl;
    cout<<word;


}