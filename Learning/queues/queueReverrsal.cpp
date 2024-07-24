// **************Approach 1*************

// class Solution
// {
//     stack<int>s;
    
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         while(q.size()!=0)
//         {
//             int ans=q.front();
//             q.pop();
//             s.push(ans);
//         }
        
//         while(s.size()!=0)
//         {
//             int ans=s.top();
//             s.pop();
//             q.push(ans);
//         }
        
//         return q;
//     }
// };