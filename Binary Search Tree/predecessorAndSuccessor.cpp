// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     TreeNode *temp = root;
//     int pred = -1;
//     int succ = -1;
//     while (temp && temp->data != key)
//     {
//         if (temp->data > key)
//         {
//             succ = temp->data;
//             temp = temp->left;
//         }

//         else
//         {
//             pred = temp->data;
//             temp = temp->right;
//         }
//     }

//     if (temp)
//     {
//         reeNode *leftTree = temp->left;
//         while (leftTree != NULL)
//         {
//             pred = leftTree->data;
//             leftTree = leftTree->right;
//         }

//         TreeNode *rightTree = temp->right;
//         while (rightTree != NULL)
//         {
//             succ = rightTree->data;
//             rightTree = rightTree->left;
//         }
//     }

//     pair<int, int> ans = make_pair(pred, succ);
//     return ans;
// }