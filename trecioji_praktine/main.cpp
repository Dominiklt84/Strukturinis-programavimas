#include <bits/stdc++.h>

using namespace std;
const char ABC[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void Sifravimas();
void Desifravimas();
int main() {
    int num=0,nr=0;

    while(num!=3) {
        cout<<"S ifravimo/deSifravimo sistema. "<<endl;
        cout <<"Pasirinkite veiksma: "<<endl;
        cout << "1. Pirmas pasirinkimas (naudojant abecele). " << endl;
        cout << "2. Antras pasirinkimas (naudojant ASCII koduote). " << endl;
        cout << "3. Iseiti. " << endl;
        cin>>num;
        switch (num) {
            case 1:
                cout<<"Pasirinkite veiksma: "<<endl;
            cout<<"1. Sifruoti "<<endl;
            cout<<"2. Desifruoti "<<endl;
            cin>>nr;
            if(nr==1) {
                Sifravimas();
            }else if(nr==2) {
                Desifravimas();
            }
            break;
            case 2:

                break;

        }
    }

    Sifravimas();


    return 0;
}
void Sifravimas() {
    char text[100],key[100],word[100],key_sifr[100];
    int text_code[100],key_code[100],word_code[100];
    cout<<"Iveskite pradini teksta: "<<endl;
    cin>>text;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>key;
    for(int i=0;i<strlen(text);i++) {
        key_sifr[i]=key[i%strlen(key)];
    }
    for(int i=0;i<strlen(text);i++) {
        for(int j=0;j<sizeof(ABC);j++) {
            if(toupper(text[i])==ABC[j]) {
                text_code[i]=j;
            }
            if(toupper(key_sifr[i])==ABC[j]) {
                key_code[i]=j;
            }
        }
    }
    for(int i=0;i<strlen(text);i++) {
        if(text_code[i]+key_code[i]<sizeof(ABC)) {
            word_code[i]=text_code[i]+key_code[i];
        }else {
            word_code[i]=(text_code[i]+key_code[i])%sizeof(ABC);
        }
    }
    for(int i=0;i<strlen(text);i++) {
                word[i]=ABC[word_code[i]];
    }
    word[strlen(text)] = '\0';
    cout<<"Jusu kodas:"<<word<<endl;
}
void Desifravimas() {
    char text[100],key[100],word[100],key_sifr[100];
    int text_code[100],key_code[100],word_code[100];
    cout<<"Iveskite pradini teksta: "<<endl;
    cin>>text;
    cout<<"Iveskite slapta rakta: "<<endl;
    cin>>key;
    for(int i=0;i<strlen(text);i++) {
        key_sifr[i]=key[i%strlen(key)];
    }
    for(int i=0;i<strlen(text);i++) {
        for(int j=0;j<sizeof(ABC);j++) {
            if(toupper(text[i])==ABC[j]) {
                text_code[i]=j;
            }
            if(toupper(key_sifr[i])==ABC[j]) {
                key_code[i]=j;
            }
        }
    }
    for(int i=0;i<strlen(text);i++) {
        word_code[i] = (text_code[i] - key_code[i] + sizeof(ABC)) % sizeof(ABC);
    }
    for(int i=0;i<strlen(text);i++) {
        word[i]=ABC[word_code[i]];
    }
    word[strlen(text)] = '\0';
    cout<<"Jusu kodas:"<<word<<endl;
}