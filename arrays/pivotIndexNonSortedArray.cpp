#include <iostream>
using namespace std;

int left(int a[], int i)
{
    int sum = 0;
    
    if (i == 0)
    {
        return 0;
    }

    else
    {
        for (int j = i-1; j >= 0; j--)
        {
            sum += a[j];
        }

        return sum;
    }
}

int right(int a[], int i,int n)
{
    int sum = 0;
    
    if (i == n-1)
    {
        return 0;
    }

    else
    {
        for (int j = i+1; j<n; j++)
        {
            sum += a[j];
        }

        return sum;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int lsum = 0, rsum = 0;
int i;
    for ( i = 0; i < n; i++)
    {
        lsum=left(a,i);
        rsum=right(a,n-i-1,n);

        cout<<lsum<<" "<<rsum;
        cout<<endl;
        // if(rsum==lsum)
        // {
        //     cout<<"pivot index is: "<<i;
        //     break;
        // }
        
    }

    // if(i==n)
    // {
    //     cout<<"-1";
    // }
return 0;
}