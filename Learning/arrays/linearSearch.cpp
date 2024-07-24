#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    int num;
    cin>>num;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            cout<< true;
            return 0;
        }
    }

cout<< false;
return 0;
    
}