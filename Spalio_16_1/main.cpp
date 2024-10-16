#include <bits/stdc++.h>

using namespace std;
int main()
{
    int st[40];
    int rp[11]={0};
    for (int i = 1; i <= 10; i++) {
        cin >> st[i];
    }
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 40; j++) {
            if (st[j] == i) {
                rp[i]++;
            }
        }
    }
    for (int i = 1; i <= 10; i++) {
        cout<<i<<" balas"<<rp[i]<<endl;
    }


    return 0;
}
