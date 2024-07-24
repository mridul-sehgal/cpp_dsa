// class Solution
// {
// public:
//     // Function to check if two trees are identical.
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         if (r1 == NULL && r2 == NULL)
//         {
//             return true;
//         }

//         if (r1 != NULL && r2 == NULL)
//         {
//             return false;
//         }

//         if (r1 == NULL && r2 != NULL)
//         {
//             return false;
//         }

//         bool cond1 = isIdentical(r1->left, r2->left);
//         bool cond2 = isIdentical(r1->right, r2->right);
//         bool cond3 = r1->data == r2->data;

//         if (cond1 && cond2 && cond3)
//         {
//             return true;
//         }

//         else
//         {
//             return false;
//         }
//     }
// }; 