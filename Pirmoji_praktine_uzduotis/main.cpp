#include <bits/stdc++.h>
using namespace std;
int main() {
    int kiek,num=0;
    string val,kok;
    while(num!=4) {
        cout<<"Pasirinkite veiksma: "<<endl;
        cout << "1. Valiutos kurso palyginimas. " << endl;
        cout << "2. Isigyti valiutos. " << endl;
        cout << "3. Parduoti valiuta. " << endl;
        cin>>num;
        cout<<"Iveskite valiuta (EUR,GBP,USD,INR): "<<endl;
        cin>>val;
        cout<<"Iveskite kieki:"<<endl;
        cin>>kiek;
        switch (num) {
            case 1:
                if(val=="EUR") {
                    cout<<"Pasirinkite su kokia valiuta norite palyginti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP") {
                        cout<<"GBP: "<<round((kiek*0.8593)*100)/1000<<endl;
                    } else if(kok=="USD") {
                        cout<<"USD: "<<round((kiek*1.0713)*100)/1000<<endl;
                    } else if(kok=="INR") {
                        cout<<"INR: "<<round((kiek*88.8260)*100)/1000<<endl;
                    }
                }else if(val=="GBP") {
                    cout<<"EUR: "<<round((kiek/0.8593)*100)/1000<<endl;
                } else if(val=="USD") {
                    cout<<"EUR: "<<round((kiek/1.0713)*100)/1000<<endl;
                } else if(val=="INR") {
                    cout<<"EUR: "<<round((kiek/88.8260)*100)/1000<<endl;
                }
            break;
            case 2:
                if(val=="EUR") {
                    cout<<"Pasirinkite kokia valiuta norite pirkti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP") {
                        cout<<"GBP: "<<kiek*0.8450<<endl;
                    } else if(kok=="USD") {
                        cout<<"USD: "<<kiek*1.0547<<endl;
                    } else if(kok=="INR") {
                        cout<<"INR: "<<85.2614<<endl;
                    }
                } else if(val=="GBP") {
                    cout<<"EUR: "<<kiek/0.8450<<endl;
                } else if(val=="USD") {
                    cout<<"EUR: "<<kiek/1.0547<<endl;
                } else if(val=="INR") {
                    cout<<"EUR: "<<kiek/85.2614<<endl;
                }
            break;
            case 3:
                if(val=="EUR") {
                    cout<<"Pasirinkite kokia valiuta norite parduoti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP") {
                        cout<<"GBP: "<<kiek*0.9060<<endl;
                    } else if(kok=="USD") {
                        cout<<"USD: "<<kiek*1.1309<<endl;
                    } else if(kok=="INR") {
                        cout<<"INR: "<<92.8334<<endl;
                    }
                } else if(val=="GBP") {
                    cout<<"EUR: "<<kiek/0.9060<<endl;
                } else if(val=="USD") {
                    cout<<"EUR: "<<kiek/1.1309<<endl;
                } else if(val=="INR") {
                    cout<<"EUR: "<<kiek/92.8334<<endl;
                }
            break;
            default:
                cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
        }
    }


    return 0;
}
