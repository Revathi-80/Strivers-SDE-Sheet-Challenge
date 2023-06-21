/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *temp=new Node();
    Node *temp1=temp,*p=num1,*q=num2;
    int carry=0,sum=0;
    while(p!=NULL || q!=NULL){
        int x = (p!=NULL)?p->data:0;
        int y= (q!=NULL)? q->data:0;
        sum=x+y+carry;
        carry=sum/10;
        sum=sum%10;
        temp1->next = new Node(sum);
        temp1=temp1->next;
        if(p!=NULL)
            p=p->next;
        if(q!=NULL)
            q=q->next;
        
    }
    if(carry>0)
        temp1->next=new Node(carry);
    
    return temp->next;
}
