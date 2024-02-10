// class Solution {
//   public:
//     vector <int> bottomView(Node *root) {
// vector<int> ans;
// if (root == NULL)
// {
//     return ans;
// }

// map<int, int> topNode;
// queue<pair<Node *, int>> q;

// q.push(make_pair(root, 0));

// while (!q.empty())
// {
//     pair<Node *, int> temp = q.front();
//     q.pop();
//     Node *frontNode = temp.first;
//     int hp = temp.second;

//     // same question as top veiw bss yaha pe condition check nhi hogi
//     // uski vajah se jo pehle nodes discard ho rhi thi vo ab jo nayi node
//     // aaegi usse replacec hojaegi
//     topNode[hp] = frontNode->data;

//     if (frontNode->left)
//     {
//         q.push(make_pair(frontNode->left, hp - 1));
//     }

//     if (frontNode->right)
//     {
//         q.push(make_pair(frontNode->right, hp + 1));
//     }
// }

// for (auto i : topNode)
// {
//     ans.push_back(i.second);
// }

// return ans;
//    }
// };