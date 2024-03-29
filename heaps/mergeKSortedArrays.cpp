// #include <bits/stdc++.h>

// class node
// {
// public:
//     int data;
//     int row;
//     int col;

//     node(int data, int row, int col)
//     {
//         this->data = data;
//         this->row = row;
//         this->col = col;
//     }
// };

// class compare
// {
// public:
//     bool operator()(node *a, node *b)
//     {
//         return a->data > b->data;
//     }
// };

// vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
// {
//     priority_queue<node *, vector<node *>, compare> minHeap;

//     for (int i = 0; i < k; i++)
//     {
//         node *temp = new node(kArrays[i][0], i, 0);
//         minHeap.push(temp);
//     }

//     vector<int> ans;

//     while (minHeap.size() > 0)
//     {
//         node *tmp = minHeap.top();
//         ans.push_back(tmp->data);
//         minHeap.pop();

//         int row = tmp->row;
//         int col = tmp->col;

//         if (col + 1 < kArrays[row].size())
//         {
//             node *next = new node(kArrays[row][col + 1], row, col + 1);
//             minHeap.push(next);
//         }
//     }
//     return ans;
// }