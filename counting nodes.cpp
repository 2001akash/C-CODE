#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
node *start=NULL;
node* createNode(int a)
{
node *n1=new node();
n1->data=a;
//cout<<n1.data<<" ";
n1->next=NULL;
return n1;
}
void addAtBeg(int a)
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
void addAtEnd(int a)
{
node *newNode=createNode(a);
if(start==NULL)
start=newNode;
else
{
node *ptr=start;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newNode;
}
}
void display()
{
node *ptr=start;
while(ptr!=NULL)
{
cout<<ptr->data<<" ";
ptr=ptr->next;
}
}
int main()
{
addAtEnd(7);
addAtBeg(4);
addAtEnd(20);
addAtEnd(40);
addAtBeg(11);
addAtBeg(17);
display();
}


