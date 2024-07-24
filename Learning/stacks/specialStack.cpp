// #include<bits/stdc++.h>

// class SpecialStack {
//     public:
//         stack<int>s;
//         int mini;
//     void push(int curr) {
//         if(s.empty())
//         {
//             s.push(curr);
//             mini=curr;
//         }

//         else
//         {
//             if(curr<mini)
//             {
//                 int val=2*curr-mini;
//                 s.push(val);
//                 mini=curr;
//             }

//             else
//             {
//                 s.push(curr);
//             }

//         }
//     }

//     void pop() {
//         if(s.empty())
//         {
//             return ;
//         }

//         int curr=s.top();

//         if(curr>mini)
//         {
//             s.pop();
//         }

//         else
//         {

//             int val=2*mini-curr;
//             mini=val;
//             s.pop();
//         }
//     }

//     int top() {

//          if(s.empty())
//         {
//             return -1 ;
//         }

//         int curr=s.top();

//         if(curr>mini)
//         {
//             return curr;
//         }

//         else{
//             return mini;
//         }
//     }

//     int getMin() {
//          if(s.empty())
//         {
//             return -1;
//         }

//         return mini;
//     }
// };