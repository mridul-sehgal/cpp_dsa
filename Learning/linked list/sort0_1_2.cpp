

// ****************Method 1****************
// Node *sortList(Node *head)
// {
//     int countZero = 0;
//     int countOne = 0;
//     int countTwo = 0;

//     Node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             countZero++;
//         }

//         else if (temp->data == 1)
//         {
//             countOne++;
//         }

//         else if (temp->data == 2)
//         {
//             countTwo++;
//         }

//         temp = temp->next;
//     }

//     Node *tp = head;
//     while (tp != NULL)
//     {
//         if (countZero != 0)
//         {
//             tp->data = 0;
//             countZero--;
//         }

//         else if (countOne != 0)
//         {
//             tp->data = 1;
//             countOne--;
//         }

//         else if (countTwo != 0)

//         {
//             tp->data = 2;
//             countTwo--;
//         }

//         tp = tp->next;
//     }

//     return head;
// }









  //****************Method2***********

// void insertTail(Node*&tail,Node*curr)
// {
//     tail->next=curr;
//     tail=curr;
// }
// Node* sortList(Node *head){

//     Node *head0=new Node(-1);
//     Node *head1=new Node(-1);
//     Node *head2=new Node(-1);

//     Node *tail0=head0;
//     Node *tail1=head1;
//     Node *tail2=head2;

//     Node *curr=head;

//     while(curr!=NULL)
//     {
//         if(curr->data==0)
//         {
//             insertTail(tail0,curr);
//         }

//         else if (curr->data==1)
//         {
//             insertTail(tail1,curr);
//         }

//         else if (curr->data==2)
//         {
//             insertTail(tail2,curr);
//         }

//         curr=curr->next;
//     }

//     if(head1->next!=NULL)
//     {
//         tail0->next=head1->next;
//     }

//     else{
//         tail0->next=head2->next;
//     }

//     tail1->next=head2->next;
//     tail2->next=NULL;
//     head=head0->next;

//     free(head0);
//     free(head1);
//     free(head2);
//     return head;
// }