#include <bits/stdc++.h>

using namespace std;
int main() {
    int num=0;
    while (num!=3) {
        cout<<"Pasrinkite veiksma: "<<endl;
        cout<<"1. Pirma programa. "<<endl;
        cout<<"2. Antra programa. "<<endl;
        cin>>num;
        switch (num) {
            case 1:

                break;
            case 2:

                break;
            case 3:
                cout<<"Jus isejote is programos "<<endl;
            break;
            default:
                cout<<"Tokio pasirinkimo nera, bandykite dar karta."<<endl;
        }
    }
    return 0;
}
