// //***********Logic 1**************

// class Solution
// {
//     private:
    
//     void insertAtTail(Node*&head,Node*& tail,int data)
//     {
//         Node *newNode= new Node(data);
//         if(head==NULL)
//         {
//             head=newNode;
//             tail=newNode;
//             return;
//         }
        
//         else
//         {
//             tail->next=newNode;
//             tail=newNode;
//         }
//     }
    
    
//     public:
//     Node *copyList(Node *head)
//     {
//         Node *cloneHead=NULL;
//         Node *cloneTail=NULL;
        
//         Node *temp=head;
        
//         while(temp!=NULL)
//         {
//             insertAtTail(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
        
        
//         unordered_map<Node*,Node*>oldToNew;
        
//         Node *oldNode=head;
//         Node *cloneNode=cloneHead;
        
//         while(oldNode!=NULL && cloneNode!=NULL)
//         {
//             oldToNew[oldNode]=cloneNode;
//             oldNode=oldNode->next;
//             cloneNode=cloneNode->next;
//         }
        
        
//         oldNode=head;
//         cloneNode=cloneHead;
        
//         while(oldNode!=NULL && cloneNode!=NULL)
//         {
//             cloneNode->arb=oldToNew[oldNode->arb];
//             oldNode=oldNode->next;
//             cloneNode=cloneNode->next;
//         }
        
        
//         return cloneHead;
        
//     }

// };