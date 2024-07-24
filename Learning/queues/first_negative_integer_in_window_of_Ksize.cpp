// vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) 
// {
    
//     queue<long long int>q;
//     vector<long long int>ans;
    
//     //process first window of k size
    
//     for(int i=0;i<k;i++)
//     {
//         if(a[i]<0)
//         {
//             q.push(i);
//         }
//     }
    
//     // store answer of first k sized window
    
//     if(q.size()>0)
//     {
//         ans.push_back(a[q.front()]);
//     }
//     else
//     {
//         ans.push_back(0);
//     }
    
//     //process for remaining windows
//     for(int i=k;i<n;i++)
//     {
//         //removal
        
//         if(!q.empty() && i-q.front()>=k)
//         {
//             q.pop();
//         }
        
//         //addition
//             if(a[i]<0)
//             {
//                 q.push(i);
//             }
        
    
//     // store answer
    
//         if(q.size()>0)
//         {
//             ans.push_back(a[q.front()]);
//         }
//         else
//         {
//             ans.push_back(0);
//         }
        
//     }
    
//     return ans;
// }