class node
{
int data;
node *next;
public:


void add(int data);

void display();
}*head=NULL;
void node::add(int data)
{
node *newnode=new node;
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
node *curr=head;
while(curr->next!=NULL)
curr=curr->next;
curr->next=newnode;
}
}
void node::display()
{
if(head==NULL)
cout<<"LIST IS EMPTY";
else
{
node *curr=head;
while(curr!=NULL)
{
cout<<curr->data<<endl;
curr=curr->next;
}
}
}
int main()
{
int c,data;
node obj;
while(1)
{
cout<<"1.ADD NODE"<<endl;
cout<<"2.DISPLAY NODES"<<endl;
cout<<"3.EXIT"<<endl;
cout<<"ENTER CHOICE"<<endl;
cin>>c;
switch(c)
{
case 1:cout<<"ENTER DATA"<<endl;
cin>>data;
obj.add(data);//10
break;
case 2:obj.display();
break;
case 3:exit(0);
}
}
}


