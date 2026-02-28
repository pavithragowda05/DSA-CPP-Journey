// Sum of First N Numbers
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of first  "<<n<<" natural number's is "<<sum;
}
