#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node* point;
};
struct node* head;
struct node* temp;
struct node* last;
int sz=0,n;
void Push(int x)
{
    sz++;
    if(sz>1)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->point=head;
    }
    temp->value=x;
    head=temp;
}

void Pop()
{
    temp=head;
    head=head->point;
    free(temp);
    sz--;
}

int top()
{
    return head->value;
}

int Size()
{
    return sz;
}

int main()
{
    int i,j,k;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter elements:"<<endl;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->point=NULL;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        Push(k);
    }
    cout<<"size of your stack is: "<<Size()<<endl;
    Pop();
    cout<<"after delete first element new size is: "<<Size()<<endl;
    cout<<"after delete the first element "<<top()<<" become first element"<<endl;
    while(head!=NULL)
    {
        Pop();
    }
    return 0;
}
