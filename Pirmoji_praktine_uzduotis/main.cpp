#include <bits/stdc++.h>
using namespace std;
int main() {
    int num=0;
    float kiek;
    string val,kok;
    while(num!=4) {
        cout <<"Pasirinkite veiksma: "<<endl;
        cout << "1. Valiutos kurso palyginimas. " << endl;
        cout << "2. Isigyti valiuta. " << endl;
        cout << "3. Parduoti valiuta. " << endl;
        cout << "4. Iseiti"<< endl;
        cin>>num;
        switch (num) {
            case 1:
                cout<<"Iveskite jusu valiuta (EUR,GBP,USD,INR): "<<endl;
                cin>>val;
                cout<<"Iveskite kieki:"<<endl;
                cin>>kiek;
                if(val=="EUR" || val=="eur") {
                    cout<<"Pasirinkite su kokia valiuta norite palyginti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP" || kok=="gbp") {
                        cout<<"GBP: "<<round((kiek*0.8593)*100)/100<<endl;
                    } else if(kok=="USD" || kok=="usd") {
                        cout<<"USD: "<<round((kiek*1.0713)*100)/100<<endl;
                    } else if(kok=="INR" || kok=="inr") {
                        cout<<"INR: "<<round((kiek*88.8260)*100)/100<<endl;
                    } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
                }else if(val=="GBP" || val=="gbp") {
                    cout<<"EUR: "<<round((kiek/0.8593)*100)/100<<endl;
                } else if(val=="USD" || val=="usd") {
                    cout<<"EUR: "<<round((kiek/1.0713)*100)/100<<endl;
                } else if(val=="INR" || val=="inr") {
                    cout<<"EUR: "<<round((kiek/88.8260)*100)/100<<endl;
                } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
            break;
            case 2:
                cout<<"Iveskite jusu valiuta (EUR,GBP,USD,INR): "<<endl;
                cin>>val;
                cout<<"Iveskite kieki:"<<endl;
                cin>>kiek;
                if(val=="EUR" || val=="eur") {
                    cout<<"Pasirinkite kokia valiuta norite pirkti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP" || kok=="gbp") {
                        cout<<"GBP: "<<round((kiek*0.8450)*100)/100<<endl;
                    } else if(kok=="USD" || kok=="usd") {
                        cout<<"USD: "<<round((kiek*1.0547)*100)/100<<endl;
                    } else if(kok=="INR" || kok=="inr") {
                        cout<<"INR: "<<round((kiek*85.2614)*100)/100<<endl;
                    } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
                } else if(val=="GBP"|| val=="gbp") {
                    cout<<"EUR: "<<round((kiek/0.8450)*100)/100<<endl;
                } else if(val=="USD"|| val=="usd") {
                    cout<<"EUR: "<<round((kiek/1.0547)*100)/100<<endl;
                } else if(val=="INR" || val=="inr") {
                    cout<<"EUR: "<<round((kiek/85.2614)*100)/100<<endl;
                } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
            break;
            case 3:
                cout<<"Iveskite jusu valiuta (EUR,GBP,USD,INR): "<<endl;
                cin>>val;
                cout<<"Iveskite kieki:"<<endl;
                cin>>kiek;
                if(val=="EUR" ||val=="eur") {
                    cout<<"Pasirinkite kokia valiuta norite parduoti (GBP,USD,INR): "<<endl;
                    cin>>kok;
                    if(kok=="GBP" ||kok=="gbp") {
                        cout<<"GBP: "<<round((kiek*0.9060)*100)/100<<endl;
                    } else if(kok=="USD"|| kok=="usd") {
                        cout<<"USD: "<<round((kiek*1.1309)*100)/100<<endl;
                    } else if(kok=="INR"|| kok=="inr") {
                        cout<<"INR: "<<round((kiek*92.8334)*100)/100<<endl;
                    } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
                } else if(val=="GBP"||val=="gbp") {
                    cout<<"EUR: "<<round((kiek/0.9060)*100)/100<<endl;
                } else if(val=="USD"|| val=="usd") {
                    cout<<"EUR: "<<round((kiek/1.1309)*100)/100<<endl;
                } else if(val=="INR" || val=="inr") {
                    cout<<"EUR: "<<round((kiek/92.8334)*100)/100<<endl;
                } else cout<<"Tokio pasirinkimo nera, bandykite dar karta"<<endl;
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
