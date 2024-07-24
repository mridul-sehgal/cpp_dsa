#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    // Insertion in a TRIE

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';

        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    // Search in a TRIE

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    }

    // does word exists with a given prefix

    bool prefixUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return true;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        else
        {
            return false;
        }

        return prefixUtil(child, word.substr(1));
    }

    bool startsWith(string prefix)
    {
        return prefixUtil(root, prefix);
    }

    // Deletion in a TRIE

    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i] != NULL)
            {
                return false;
            }
        }

        return true;
    }

    TrieNode *deleteUtil(TrieNode *root, string &word, int i = 0)
    {
        if (root == NULL)
        {
            return NULL;
        }

        if (i == word.length())
        {
            root->isTerminal = false;
            if (isEmpty(root) == true)
            {
                delete (root);
                root = NULL;
            }

            return root;
        }

        int index = word[i] - 'A';
        root->children[index] = deleteUtil(root->children[index], word, i + 1);

        if (isEmpty(root) && root->isTerminal == false)
        {
            delete (root);
            root = NULL;
        }
        return root;
    }

    void deletion(string word)
    {
        deleteUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("TIM");
    t->insertWord("TIME");

    cout << "present or not: " << t->search("ABCD");
    cout << endl
         << "present or not: " << t->search("TIM");
    cout << endl
         << "present or not: " << t->search("TIME");

    cout << endl
         << " word with prefix TI exits or not ? :" << t->startsWith("TI");

    t->deletion("TIME");
    cout << endl
         << "present or not: " << t->search("TIME");

    return 0;
}