#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter n:";
    cin>>n;
    int *a=new int [n];
    for(i=0;i<n;i++)
    {
        cout<<"enter value:";
        cin>>a[i];
    }
    cout<<"\noutput";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    delete []a;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
