void insert(int key, int data)
{
 int found = 0;
 temp = head;
 do
 {
 if(temp->data == key)
 {
 found = 1;
 break;
 }
 temp = temp->next;
 }while(temp != head);
 if(found == 0)
 {
 printf("key element not found \n");
 }
 else
 {
 createnode(data);
 if(temp == tail)
 {
 temp->next = newnode;
 tail = newnode;
 tail->next = head;
 } else {
 newnode->next = temp->next;
 temp->next = newnode;
 }
 printf("inserted :%d after :%d",data,key);
 }
}
void prepend(int d)
{
 createnode(d);
 if(head == NULL)
 {
 head = tail = newnode;
 tail->next = head;
 }
 else
 {
 newnode->next = head;
 head = newnode;
 tail->next = head;
 }
 printf("data prepended :%d \n",d);
}