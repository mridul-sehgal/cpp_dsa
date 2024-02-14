// class Solution
// {
// public:
//     int findPosition(vector<int> &in, int element, int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (in[i] == element)
//             {
//                 return i;
//             }
//         }

//         return -1;
//     }

//     TreeNode *solve(vector<int> &in, vector<int> &pre, int &index, int inOrderStart, int inOrderEnd, int n)
//     {
//         if (index >= n || inOrderStart > inOrderEnd)
//         {
//             return NULL;
//         }

//         int element = pre[index++];
//         TreeNode *root = new TreeNode(element);
//         int position = findPosition(in, element, n);

//         root->left = solve(in, pre, index, inOrderStart, position - 1, n);
//         root->right = solve(in, pre, index, position + 1, inOrderEnd, n);
//         return root;
//     }

//     TreeNode *buildTree(vector<int> &pre, vector<int> &in)
//     {
//         int preOrderIndex = 0;
//         int n = pre.size();
//         TreeNode *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
//         return ans;
//     }
// };  