// class Solution
// {
// public:
//     // Function to return a list of nodes visible from the top view
//     // from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> ans;
//         if (root == NULL)
//         {
//             return ans;
//         }

//         map<int, int> topNode;
//         queue<pair<Node *, int>> q;

//         q.push(make_pair(root, 0));

//         while (!q.empty())
//         {
//             pair<Node *, int> temp = q.front();
//             q.pop();
//             Node *frontNode = temp.first;
//             int hp = temp.second;

//             if (topNode.find(hp) == topNode.end())
//              // agar find function ko koi value nhi milti to vo end return krta hai
//              // is condition ka mtlb hai ki find ko hp ke respect me map me koi mapping nhi mili...to hum HP ki value ke liye
//             //  ab mapping daal skte hai.
//              {
//                 topNode[hp] = frontNode->data;
//             }

//             if (frontNode->left)
//             {
//                 q.push(make_pair(frontNode->left, hp - 1));
//             }

//             if (frontNode->right)
//             {
//                 q.push(make_pair(frontNode->right, hp + 1));
//             }
//         }

//         for (auto i : topNode)
//         {
//             ans.push_back(i.second);
//         }

//         return ans;
//     }
// };