// void solve(Node*root,int k,map<int,int> &m,int &count, int sum)
//     {
//         if(root==NULL)
//         {
//             return;
//         }
//         sum+=root->data;// calculating prefix sum

//             count+=m[sum-k]; // count is updated by the frequency of how many times (sum-k) is present in map

//         m[sum]++; // increasing the frequency in map for the current prefix sum

//         solve(root->left,k,m,count,sum);
//         solve(root->right,k,m,count,sum);

//         m[sum]--; //decreasing the frequency in the map because as we go back in the recurssion call we dont required the sum for previous node
//     }
//     int sumK(Node *root,int k)
//     {
//         map<int,int>m;
//         int count=0;
//         m[0]=1;
//         solve(root,k,m,count,0);
//         return count;
//     }
// };