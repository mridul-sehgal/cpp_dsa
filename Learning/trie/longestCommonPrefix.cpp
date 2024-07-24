
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;
//     int childCount;

//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }

//         childCount=0;
//         isTerminal = false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode *root;

//     Trie()
//     {
//         root = new TrieNode('\0');
//     }

//     // Insertion in a TRIE

//     void insertUtil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }

//         int index = word[0] - 'a';

//         TrieNode *child;

//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }

//         else
//         {
//             child = new TrieNode(word[0]);
//             root->childCount++;
//             root->children[index] = child;
//         }

//         insertUtil(child, word.substr(1));
//     }

//     void insertWord(string word)\
//     { 
//         insertUtil(root, word); 
//     }

//     void lcp(string str,string &ans)
//     {
//         for(int i=0;i<str.length();i++)
//         {
//             char ch=str[i];

//             if(root->childCount==1)
//             {
//                 ans.push_back(ch);
//                 int index=ch-'a';
//                 root=root->children[index];
//             }

//             else{
//                 break;
//             }

//             if(root->isTerminal==true)
//             {
//                 break;
//             }
//         }
//     }



// };

// string longestCommonPrefix(vector<string> &arr, int n) {
//     Trie *t = new Trie();

//     for(int i=0;i<n;i++)
//     {
//         t->insertWord(arr[i]);
//     }

//     string first=arr[0];
//     string ans="";

//     t->lcp(first,ans);
//     return ans;
    
// }
