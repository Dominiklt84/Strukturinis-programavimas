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
void printCheck(int menuSize, menuItemType menuList[]) {
    int orderNumbers[100], orderQuantities[100], orderCount = 0;

    while (true) {
        cout << "Pasirinkite patiekalus (numeriai nuo 1 iki " << menuSize << "). Jei baigete, iveskite 0." << endl;
        showMenu(menuSize, menuList);
        int choice;
        cout << "Pasirinkite patiekala: "<<endl;
        cin >> choice;

        if (choice == 0) break;

        if (choice >= 1 && choice <= menuSize) {
            int quantity;
            cout << "Kiek norite porciju? "<<endl;
            cin >> quantity;

            bool found = false;
            for (int i = 0; i < orderCount; i++) {
                if (orderNumbers[i] == choice) {
                    orderQuantities[i] += quantity;
                    found = true;
                    break;
                }
            }
            if (!found) {
                orderNumbers[orderCount] = choice;
                orderQuantities[orderCount] = quantity;
                orderCount++;
            }
        } else {
            cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    }

    double total = 0;
    cout << "Jusu uzsakymas:" << endl;
    for (int i = 0; i < orderCount; i++) {
        int itemNumber = orderNumbers[i] - 1;
        int quantity = orderQuantities[i];
        double price = menuList[itemNumber].menuPrice;
        double cost = price * quantity;
        cout << quantity << " " << menuList[itemNumber].menuItem << " " << fixed << setprecision(2) << cost << " EUR" << endl;
        total += cost;
    }

    double taxes = total * 0.21;
    double finalTotal = total + taxes;

    cout << "Mokesciai: " << fixed << setprecision(2) << taxes << " EUR" << endl;
    cout << "Galutine suma: " << fixed << setprecision(2) << finalTotal << " EUR" << endl;

    ofstream outFile("check.txt");
    outFile << "Jusu uzsakymas:" << endl;
    for (int i = 0; i < orderCount; i++) {
        int itemNumber = orderNumbers[i] - 1;
        int quantity = orderQuantities[i];
        double price = menuList[itemNumber].menuPrice;
        double cost = price * quantity;
        outFile << quantity << " " << menuList[itemNumber].menuItem << " " << fixed << setprecision(2) << cost << " EUR\n";
    }
    outFile << "Mokesciai: " << fixed << setprecision(2) << taxes << " EUR" << endl;
    outFile << "Galutine suma: " << fixed << setprecision(2) << finalTotal << " EUR" << endl;
    outFile.close();
}


int main() {
    menuItemType menuList[8];
    int menuSize;
    getData(menuList,menuSize);
    printCheck(menuSize, menuList);
    return 0;
}
