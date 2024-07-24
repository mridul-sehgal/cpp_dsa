// class Solution
// {
//     stack<int>s;
//     public:
    
//     // Function to reverse first k elements of a queue.
//     queue<int> modifyQueue(queue<int> q, int k) {
//         //step1:remove first k elements from q
        
//         for(int i=0;i<k;i++)
//         {
//             int ans=q.front();
//             q.pop();
//             s.push(ans);
//         }
        
//         //step2: put elements back into stack
        
//         while(!s.empty())
//         {
//             int ans=s.top();
//             s.pop();
//             q.push(ans);
//         }
        
//         // step3
        
//         int t=q.size()-k;
//         while(t--)
//         {
//             int ans=q.front();
//             q.pop();
//             q.push(ans);
//         }
        
//         return q;
//     }
// }; 