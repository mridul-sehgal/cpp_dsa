// Node *solve(Node *root, int &k, int node)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }

//     if (root->data == node)
//     {
//         return root;
//     }

//     Node *leftAns = solve(root->left, k, node);
//     Node *rightAns = solve(root->right, k, node);

//     if (leftAns != NULL && rightAns == NULL)
//     {
//         k--;
//         if (k <= 0)
//         {
//             k = INT_MAX; // ye humne isliye kiya bcz recursive me k ki value decrement hogi;
//             return root; // to humne k ki value ko itna bda bda diya ki age ki calculation me
//                          // decrement hone ke baad bhi kbhi bhi k ki value 0 nhi hogi. Humne ans
//             // lock krdia or hamesha ye root hi return hogi.
//         }

//         return leftAns;
//     }

//     if (leftAns == NULL && rightAns != NULL)
//     {
//         k--;
//         if (k <= 0)
//         {
//             k = INT_MAX; // ye humne isliye kiya bcz recursive me k ki value decrement hogi;
//             return root; // to humne k ki value ko itna bda bda diya ki age ki calculation me
//                          // decrement hone ke baad bhi kbhi bhi k ki value 0 nhi hogi. Humne ans
//             // lock krdia or hamesha ye root hi return hogi.
//         }

//         return rightAns;
//     }

//     return NULL;
// }
// int kthAncestor(Node *root, int k, int node)
// {
//     Node *ans = solve(root, k, node);
//     if (ans == NULL || ans->data == node) // or wali condition ka mtlb ye hai ki agar aapki node
//     {                                     // root node ke equal hogyi to uska koi ancestor krta hi nhi
//         return -1;                        // to us case me bhi no ancestor exists isliye return -1
//     }
//     else
//     {
//         return ans->data;
//     }
// }