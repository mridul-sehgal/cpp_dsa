#include <bits/stdc++.h>
using namespace std;
class Kqueue
{
    int n;
    int k;
    int freespot;
    int *arr;
    int *front;
    int *rear;
    int *next;

public:
    Kqueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        freespot = 0;

        arr = new int[k];

        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    void push(int data, int qn)
    {
        // overflow
        if (freespot == -1)
        {
            cout << "Queue is full" << endl;
            return;
        }

        // find first free index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // check whether firt element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to prevous element
            next[rear[qn - 1]] = index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        //push element
        arr[index]=data;
    }

    int pop(int qn)
    {
        if(front[qn-1]==-1)
        {
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        int index=front[qn-1];
        front[qn-1]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];

    }
};
int main()
{
    Kqueue q(10,3);
    q.push(10,1);
    q.push(11,1);
    q.push(12,1);
    q.push(20,2);
    q.push(21,2);
    q.push(30,3);

    cout<<endl<<q.pop(1);
    cout<<endl<<q.pop(2);
    cout<<endl<<q.pop(3);
    cout<<endl<<q.pop(1);
    return 0;
}
