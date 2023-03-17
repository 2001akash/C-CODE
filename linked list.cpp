#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
node * start=NULL;

node * createNode(int a)
{
node *n1=new node();
n1->data=a;
n1->next=NULL;
return n1;
}
void insertAtBeg(int a)
{
node *newNode=createNode(a);
if(start==NULL)
start=newNode;
else
{
newNode->next=start;
start=newNode;
}
}
void display()
{
node *ptr=start;
while(ptr!=NULL)
{
cout<<ptr->data<<"->";
ptr=ptr->next;
}
}
int main ()
{
insertAtBeg(7);
insertAtBeg(789);
insertAtBeg(99);
insertAtBeg(67);
display();
}


