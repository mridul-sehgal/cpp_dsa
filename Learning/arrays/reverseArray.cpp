#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Original array:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

    for(int i=0;i<n/2;i++)
    {
        swap(a[i],a[n-1-i]);
    }
    cout<<endl;
    cout<<"Reversed  array:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
}