#include <iostream>
using namespace std;

int main()
{
    int b,c;
    cout<<" PROGRAM MENGHITUNG FAKTORIAL\n";
    cout<<"==============================\n"<<endl;
    cout<<"Masukkan bilangan yang akan difaktorialkan = ";
    cin>>b;
    c=b;
    cout<<"bilangan = "<<b<<endl;
    cout<<b<<"! = ";
    for (int i=1;i<=b;i++){
        cout<<i;
        if(i==b){
            cout<<"=";
        }else{
        cout<<"*";
        }
    }
    //ngiyug start
    for (int i=1;b>i;){
        b=b-1;
        c=c*b;
    }
    //end
    //menampilkan start
    cout<<c;

    return 0;
}
