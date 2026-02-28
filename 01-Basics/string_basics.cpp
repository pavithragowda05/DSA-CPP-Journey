#include<iostream>
using namespace std;
int main(){
    string str,revstr="";
    int j=0,i;
    cin>>str;    // Input string

    cout<<"length of the string:"<<str.length()<<endl; // Find length

    for(i=str.size()-1;i>=0;i--){         // Reverse string
        revstr+=str[i];
    }
    cout<<revstr<<endl;
    if(str==revstr){      // Check palindrome
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl; 
    }
    // Count vowels
    char ch;
    int k=0,count=0;
    while ((ch=str[k++])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
            count+=1;
    }
    cout<<"count of vowels is :"<<count;

}
