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
void printCheck(int menuSize,menuItemType menuList[]) {

}
int main() {
    menuItemType menuList[8];
    int menuSize;
    getData(menuList,menuSize);
    showMenu(menuSize,menuList);

    return 0;
}
