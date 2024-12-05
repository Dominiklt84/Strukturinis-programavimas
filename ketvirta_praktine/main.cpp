#include <bits/stdc++.h>

using namespace std;

struct menuItemType  {
    string menuItem;
    double menuPrice;
};
void getData(menuItemType menuList[],int &menuSize) {
    menuList[0] = {"Kiausiniene", 1.45};
    menuList[1] = {"Kiaulienos sonine su keptu kiausiniu", 2.45};
    menuList[2] = {"Keksiukas su vysnia", 0.99};
    menuList[3] = {"Prancuziskas skrebutis", 1.99};
    menuList[4] = {"Vaisiu salotos", 2.49};
    menuList[5] = {"Pusryciu dribsniai", 0.69};
    menuList[6] = {"Kava", 0.50};
    menuList[7] = {"Arbata", 0.75};
    menuSize = 8;
}
void showMenu(int menuSize,menuItemType menuList[]) {
    cout<<"Sveiki atvyke i restorana Pavadinimas "<<endl;
    for(int i=0;i<menuSize;i++) {
        cout<<i+1<<". "<<menuList[i].menuItem<<" "<<fixed<<setprecision(2)<<menuList[i].menuPrice<<" EUR"<<endl;
    }
}
void printCheck(int menuSize, menuItemType menuList[], int quantities[]) {
    double subtotal = 0.0, taxRate = 0.21;

    cout << left << setw(45)  << "Saskaita:" << endl;
    ofstream Fileout("saskaita.txt");
    Fileout << left << setw(45)  << "Saskaita:" << endl;

    for (int i = 0; i < menuSize; i++) {
        if (quantities[i] > 0) {
            double itemTotal = quantities[i] * menuList[i].menuPrice;
            subtotal = subtotal + itemTotal;

            cout << left << setw(45)  << (to_string(quantities[i]) + " x " + menuList[i].menuItem) << right << setw(8) << fixed << setprecision(2) << itemTotal << " EUR" << endl;
            Fileout << left << setw(45)  << (to_string(quantities[i]) + " x " + menuList[i].menuItem) << right << setw(8) << fixed << setprecision(2) << itemTotal << " EUR" << endl;
        }
    }

    double tax = subtotal * taxRate;
    double total = subtotal + tax;

    cout << left << setw(45) << "Mokesciai"<< right << setw(8) << fixed << setprecision(2) << tax << " EUR" << endl;
    cout << left << setw(45)  << "Galutine suma"<< right << setw(8) << fixed << setprecision(2) << total << " EUR" << endl;

    Fileout << left << setw(45)  << "Mokesciai"<< right << setw(8) << fixed << setprecision(2) << tax << " EUR" << endl;
    Fileout << left << setw(45)  << "Galutine suma"<< right << setw(8) << fixed << setprecision(2) << total << " EUR" << endl;

    Fileout.close();
}
int main() {
    menuItemType menuList[8];
    int menuSize,choice,quantity,quantities[8] = {0};;
    getData(menuList,menuSize);
    while (true) {
        showMenu(menuSize,menuList);
        cout << "Iveskite patiekalo numeri (arba 0, jei baigete): ";
        cin >> choice;

        if (choice == 0) break;

        if (choice < 1 || choice > menuSize) {
            cout << "Netinkamas pasirinkimas. Bandykite dar karta."<<endl;
            continue;
        }

        cout << "Iveskite kieki: "<<endl;
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Kiekis turi buti teigiamas skaicius. Bandykite dar karta."<<endl;
            continue;
        }

        quantities[choice - 1] = quantities[choice - 1] + quantity;
    }

    printCheck(menuSize, menuList, quantities);
    return 0;
}
