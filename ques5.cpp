// Display this GP - 3,12,48,.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int a = 3;
    int d = 4;

    for(int i = 1 ; i<=n ; i++)
    {
        cout<<a<<endl;
        a = a*d ;
    }

}