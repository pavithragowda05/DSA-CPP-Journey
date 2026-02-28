#include<iostream>
using namespace std;
int main(){
    int choice,a,b;
    cout<<"enter values:";
    cin>>a>>b;
    cout<<"1.add"<<endl<<"2.substract"<<endl<<"3.divide"<<endl<<"4.multiply"<<endl<<"enter yourchioce:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        /* code */
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a/b;
        break;
    case 4:
        cout<<a*b;
        break;        
    default:
        cout<<"invalid choice!";
        break;
    }

    return 0;

}
