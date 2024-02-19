
// **************************************************** Approach 1 **********************************************

// void inorder(TreeNode *root, vector<int> &in)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//     vector<int> inorderVal1;
//     inorder(root1, inorderVal1);

//     vector<int> inorderVal2;
//     inorder(root2, inorderVal2);

//     vector<int> ans;
//     int n = inorderVal1.size();
//     int m = inorderVal2.size();

//     int i = 0;
//     int j = 0;

//     while (i < n && j < m)
//     {
//         if (inorderVal1[i] < inorderVal2[j])
//         {
//             ans.push_back(inorderVal1[i]);
//             i++;
//         }

//         else
//         {
//             ans.push_back(inorderVal2[j]);
//             j++;
//         }
//     }

//     while (i < n)
//     {
//         ans.push_back(inorderVal1[i]);
//         i++;
//     }

//     while (j < m)
//     {
//         ans.push_back(inorderVal2[j]);
//         j++;
//     }

//     return ans;
// }





// **************************************************** Approach 2 **********************************************