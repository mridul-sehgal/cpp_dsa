// #include <bits/stdc++.h> 

//  void solve(stack<int>& myStack, int x)
//  {
//      if(myStack.empty()|| (!myStack.empty() && myStack.top()< x ))
//      {
//          myStack.push(x);
//          return;
//      }

//      int num=myStack.top();
//      myStack.pop();

//      solve(myStack,x);
//      myStack.push(num);

//  }

// void sortStack(stack<int> &stack)
// {
// 	if(stack.empty())
// 	{
// 		return;
// 	}


// 	int num=stack.top();
// 	stack.pop();

// 	sortStack(stack);
// 	solve(stack,num);
// }