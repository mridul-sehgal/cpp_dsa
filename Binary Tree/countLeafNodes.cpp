// void inOrder(BinaryTreeNode<int> *root, int &cnt)
// {
//     if(root==NULL)
//     {
//         return;
//     }

//     inOrder(root->left,cnt);
//     if(root->left ==NULL && root->right==NULL)
//     {
//         cnt++;
//     }
//     inOrder(root->right,cnt);
// }


// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int count=0;
//     inOrder(root, count);
//     return count;
// }