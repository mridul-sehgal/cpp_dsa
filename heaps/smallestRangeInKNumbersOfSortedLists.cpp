// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     int row, col;

//     Node(int data, int row, int col)
//     {
//         this->data = data;
//         this->row = row;
//         this->col = col;
//     }
// };

// class compare
// {
// public:
//     bool operator()(Node *a, Node *b)
//     {
//         return a->data > b->data;
//     }
// };

// int kSorted(vector<vector<int>> &kArrays, int K, int N)
// {
//     priority_queue<Node *, vector<Node *>, compare> minHeap;
//     int mini = INT_MAX, maxi = INT_MIN;

//     for (int row = 0; row < K; row++)
//     {
//         int element = kArrays[row][0];
//         mini = min(mini, element);
//         maxi = max(maxi, element);
//         minHeap.push(new Node(element, row, 0));
//     }

//     int start = mini, end = maxi;

//     while (!minHeap.empty())
//     {

//         // fetching minimum element
//         Node *temp = minHeap.top();
//         minHeap.pop();

//         mini = temp->data;

//         if (maxi - mini < end - start)
//         {
//             start = mini;
//             end = maxi;
//         }

//         if (temp->col < N)
//         {
//             maxi = max(maxi, kArrays[temp->row][temp->col + 1]);
//             minHeap.push(new Node(kArrays[temp->row][temp->col + 1], temp->row, temp->col + 1));
//         }
//         else
//         {
//             break;
//         }
//     }

//     return (end - start) + 1;
// }