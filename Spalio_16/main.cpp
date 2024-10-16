#include <bits/stdc++.h>
using namespace std;
int Suma(int &sum,int M[]);
int Max_Sk(int &max_sk,int M[]);
int Min_Sk(int &min_sk,int M[]);
int main() {
    int M[5],sum = 0,max_sk=0,min_sk;
    for (int i=0; i < 5; i++) {
        cout<<"Iveskite "<<i+1<<endl;
        cin>>M[i];
    }
    Suma(sum,M);
    cout<<"Suma: "<<sum<<endl;
    Max_Sk(max_sk,M);
    cout<<"Max: "<<max_sk<<endl;
    Min_Sk(min_sk,M);
    cout<<"Min: "<<min_sk<<endl;

    return 0;
}

int Suma(int &sum,int M[]) {
    for(int i=0; i < 5; i++) {
        sum=sum+M[i];
    }
    return sum;
}
int Max_Sk(int &max_sk,int M[]) {
    for(int i=0; i < 5; i++) {
        if(M[i]>max_sk) {
            max_sk=M[i];
        }
    }
        return max_sk;
}
int Min_Sk(int &min_sk,int M[]) {
    for(int i=0; i < 5; i++) {
        if(M[i]<min_sk) {
            min_sk=M[i];
        }
    }
    return min_sk;
}