// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int>s;
        
//         //step1: push all elements in stack
        
//         for(int i=0;i<n;i++)
//         {
//             s.push(i);
        
//         }

        
//         //step2: upar ke 2 element nikalo
        
//         while(s.size()>1)
//         {
//             int a=s.top();
//             s.pop();
            
//             int b=s.top();
//             s.pop();
            
//             if(M[a][b]==1)
//             {
//                 s.push(b);
//             }
            
//             else
//             {
//                 s.push(a);
//             }
//         }
        
//         int candidate = s.top();
        
//         //step3: single element in stack is potential celebrity 
        
//         // verifying all zeroes in row
        
//         bool rowCheck=false;
//         int zeroCount=0;
        
//         for(int i=0;i<n;i++)
//         {
//             if(M[candidate][i]==0)
//             {
//                 zeroCount++;
//             }
//         }
        
//         if(zeroCount==n)
//         {
//             rowCheck=true;
//         }
        
//         //verifying all 1 in column except for diagonal element
        
//         bool colCheck=false;
//         int oneCount=0;
        
//         for(int i=0;i<n;i++)
//         {
//             if(M[i][candidate]==1)
//             {
//                 oneCount++;
//             }
//         }
        
//         if(oneCount==n-1)
//         {
//             colCheck=true;
//         } 
        
//         if(rowCheck==true && colCheck==true)
//         {
//             return candidate;
//         }
        
//         else
//         {
//             return -1;
//         }
        
//     }
// };