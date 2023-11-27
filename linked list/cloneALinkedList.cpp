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


// //*********Approach 2**********
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
        
//         Node *oldNode=head;
//         Node *cloneNode=cloneHead;
        
//         while(oldNode!=NULL && cloneNode!=NULL)
//         {
//             Node * next=oldNode->next;
//             oldNode->next=cloneNode;
//             oldNode=next;
            
//             next=cloneNode->next;
//             cloneNode->next=oldNode;
//             cloneNode=next;
            
//         }
        
//         temp=head;
        
//         while(temp!=NULL)
//         {
//             if(temp->next!=NULL)
//             {
//                 temp->next->arb=temp->arb ? temp->arb->next:temp->arb;
//             }
            
//             temp=temp->next->next;
//         }
        
//         oldNode=head;
//         cloneNode=cloneHead;
        
//         while(oldNode!=NULL && cloneNode!=NULL)
//         {
//             oldNode->next=cloneNode->next;
//             oldNode=oldNode->next;
            
//             if(oldNode!=NULL)
//             {
//                 cloneNode->next=oldNode->next;
//             }
//             cloneNode=cloneNode->next;
            
//         }
        
//        return cloneHead; 
        
        
//     }

// };