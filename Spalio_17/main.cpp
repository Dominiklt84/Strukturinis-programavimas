#include <bits/stdc++.h>
using namespace std;
int main() {
    const int eil=3;
    const int stulp =2;
    int M[5][3];
    cout<<"Iveskite 5 eiluciu ir 3 stulpeliu masyvo elementus"<<endl;
    for(int i=0;i<eil;i++) {
        for(int j=0;j<stulp;j++) {
            cout<<" Masyvo ["<<i+1<<"]["<<j+1<<"] elementus"<<endl;
            cin>>M[i][j];
        }
    }
    //Masyvo spausdinimas
    cout<<"Masyvo spausdinimas"<<endl;
    for(int i=0;i<eil;i++) {
        for(int j=0;j<stulp;j++) {
            cout<<setw(5)<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    //Masyvo suma
    cout<<"Masyvo spausdinimas ir jo suma"<<endl;
    for(int i=0;i<eil;i++) {
        int eil_sum=0;
        for(int j=0;j<stulp;j++) {
            cout<<setw(5)<<M[i][j]<<" ";
            eil_sum+=M[i][j];
        }
        cout<<setw(5)<<eil_sum;
        cout<<endl;
    }
    cout<<"Masyvo spausdinimas ir stulpeliu elementu suma"<<endl;
    for(int j=0;j<stulp;j++) {
        int stulp_sum=0;
        for(int i=0;i<eil;i++) {
            cout<<setw(5)<<M[i][j]<<" ";
            stulp_sum+=M[i][j];
        }
        cout<<setw(5)<<stulp_sum;
        cout<<endl;
    }

    return 0;
}
