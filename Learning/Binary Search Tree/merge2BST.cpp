
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

// void convertIntoSortedDLL(Node *root, Node *head)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }

//     convertIntoSortedDLL(root->right, head);
//     root->right = head;
//     if (head != NULL)
//     {
//         head->left = root;
//     }

//     head = root;
//     convertIntoSortedDLL(root->leftt, head);
// }

// Node *mergeLL(Node *head1, Node *head2)
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (head1 != NULL && head2 != NULL)
//     {
//         if (head1->data < head2->data)
//         {
//             if (head == NULL)
//             {
//                 head = head1;
//                 tail = head1;
//                 head1 = head1->right;
//             }
//             else
//             {
//                 tail->right = head1;
//                 head->left = tail;
//                 tail = head1;
//                 head1 = head1->right;
//             }
//         }
//         else
//         {
//             if (head == NULL)
//             {
//                 head = head2;
//                 tail = head2;
//                 head1 = head2->right;
//             }
//             else
//             {
//                 tail->right = head2;
//                 head->left = tail;
//                 tail = head2;
//                 head2 = head2->right;
//             }
//         }
//     }

//     while (head1 != NULL)
//     {
//         tail->right = head1;
//         head->left = tail;
//         tail = head1;
//         head1 = head1->right;
//     }

//     while (head2 != NULL)
//     {
//         tail->right = head2;
//         head->left = tail;
//         tail = head2;
//         head2 = head2->right;
//     }

//     return head;
// }

// int countNode(Node *head)
// {
//     int cnt = 0;
//     Node *temp = head;
//     while (temp->right != NULL)
//     {
//         cnt++;
//         temp = temp->right;
//     }
//     return cnt;
// }

// Node *sortedLLToBst(Node *&head, int n)
// {
//     if (n <= 0 || head == NULL)
//         return NULL;

//     Node *leftTree = sortedLLToBst(head, n / 2);
//     Node *root = head;
//     root->left = leftTree;

//     head = head->right;

//     root->right = sortedLLToBst(head, n - (n / 2) - 1);
//     return root;
// }

// Node *mergeBst(Node *root1, Node *root2)
// {
//     Node *head1 = NULL;
//     convertIntoSortedDLL(root1, head1);
//     head1->left = NULL;

//     Node *head2 = NULL;
//     convertIntoSortedDLL(root2, head2);
//     head2->left = NULL;

//     Node *head = mergeLL(head1, head2);

//     int n = countNode(head);
//     return sortedLLToBst(head, n);
// }