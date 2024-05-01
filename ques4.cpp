// Display this AP - 4,7,10,13,16.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int a = 4;
    int d = 3;

    for(int i = 1 ; i<=n ; i++)
    {
        cout<<a<<endl;
        a = a+d ;
    }

}