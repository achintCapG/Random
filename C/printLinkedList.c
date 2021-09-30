// Printing the list forward and backward

/* struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

void forwardPrint(struct Node* head)
{
//   printf("%d-",head->data);
//   while(head->next != NULL) {
//     head=head->next;
//     printf("%d-",head->data);
//   }

//   while (head != NULL)
//   {
//     printf("%d -> ", head->data);
//     head = head->next;
//   }
  if(head==NULL)
    return;
  printf("%d-",head->data);
  forwardPrint(head->next);

}

void backwardPrint(struct Node* head)
{
  // int count=0;
  // while(head!=NULL) {
  //   count++;
  //   head = head->next;
  // }
  
	// int ar[count],i=0;
  // while(head!=NULL) {
  //   ar[i]=head->data;
  //   head=head->next;
  //   i++;
  // }
  // for(i=0;i<count;i++) {
  //   printf("%d-",ar[i]);
  // }

  // Recursive approach 
//   if(head==NULL)
//     return;
//   while(head!=NULL) {
//     struct Node* temp=head;
//     head=head->next;
//     backwardPrint(head);
//     printf("%d-",temp->data);
//   }
  if(head==NULL)
    return;
  backwardPrint(head->next);
  printf("%d-",head->data);

}
