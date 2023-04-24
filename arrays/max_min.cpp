#include<iostream>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    int min=INT_MAX;
    int max=INT_MIN;
int index;
    for(int i=0;i<4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
index=i;
        }


        if(a[i]<min)
        {
            min=a[i];
        }
    }


    cout<<"MAX term is: "<<max<<" at index:"<<index<<endl;
    cout<<"MIN term is: "<<min;
    return 0;
}