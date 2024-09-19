#include <iostream>

using namespace std;
int main() {
    int choise = 0;


    while (choise != 4) {
        cout << "Paprastas meniu pasrinkimas" << endl;
        cout<<"1 Pirma opcija"<<endl;
        cout<<"2 Antra opcija"<<endl;
        cout<<"3 Trecia opcija"<<endl;
        cout<<"4 Iseiti"<<endl;
        cout<<"Jusu pasirinkimas"<<endl;
        cin>> choise;
        switch (choise) {
            case 1:
                cout<<"Jus pasirinkote 1 opcija"<<endl;
            break;
            case 2:
                cout<<"Jus pasirinkote 2 opcija"<<endl;
            break;
            case 3:
                cout<<"Jus pasirinkote 3 opcija"<<endl;
            break;
            case 4:
                cout<<"Jus isejote is programos"<<endl;
            break;
            default:
                cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
        }
    }

    return 0;
}
