// class Solution
// {
// public:
//     void createMapping(vector<int> &in, map<int ,int> &nodeToIndex, int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//            nodeToIndex[in[i]]=i;
//         }
//     }

//     TreeNode *solve(vector<int> &in, vector<int> &pre, int &index, int inOrderStart, int inOrderEnd, int n, map<int,int> &nodeToIndex)
//     {
//         if (index >= n || inOrderStart > inOrderEnd)
//         {
//             return NULL;
//         }

//         int element = pre[index++];
//         TreeNode *root = new TreeNode(element);
//         int position = nodeToIndex[element];

//         root->left = solve(in, pre, index, inOrderStart, position - 1, n,nodeToIndex);
//         root->right = solve(in, pre, index, position + 1, inOrderEnd, n,nodeToIndex);
//         return root;
//     }

//     TreeNode *buildTree(vector<int> &pre, vector<int> &in)
//     {
//         int preOrderIndex = 0;
//         int n = pre.size();
//         map<int,int>nodeToIndex;
//         createMapping(in,nodeToIndex,n);
//         TreeNode *ans = solve(in, pre, preOrderIndex, 0, n - 1, n,nodeToIndex);
//         return ans;
//     }
// }; 