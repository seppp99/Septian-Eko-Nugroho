e#include<iostream>
using namespace std;
int main (){
    int a , b;
    cout<<"=========================================="<<endl;
    cout<<"masukkan jumlah kolom yang anda inginkan :";
    cin>>a;
    cout<<"masukkan jumalah baris yang anda inginkan :";
    cin>>b;
    system("CLS");
    cout<<"__ __ __ "<<endl;
    
    for(int d = 1; d <= a; d++ ){
        for(int e = 1; e < b; e++){

            cout<<"|_|";
        }
        cout<<"|_|"<<endl;
    }



}
