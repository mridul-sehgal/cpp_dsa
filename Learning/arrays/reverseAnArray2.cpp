#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>&arr,int index,int size)
{
    if(index>size/2)
    {
        return;
    }
    swap(arr[index],arr[size-1-index]);
    reverseArray(arr,index+1,size);
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int size=arr.size();
    reverseArray(arr,0,size);

    for(auto it : arr)
    {
        cout<<it<<" ";
    }

    return 0;
}