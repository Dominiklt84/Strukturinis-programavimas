#include <bits/stdc++.h>

using namespace std;

bool Balse(char raide);

int main()
{
    int num=0;
    char raide;
    while(num!=5) {
        cout <<"Pasirinkite veiksma: "<<endl;
        cout << "1. Patikrinimas ar raide yra balse. " << endl;
        cout << "2. Rasti mažiausia bendra dalikli tarp dvieju įvestu skaitmenu. " << endl;
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
