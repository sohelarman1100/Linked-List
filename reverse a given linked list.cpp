#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;
};

int main()
{
    int i,n;
    node* head;
    node* temp;
    node* temp1=NULL;
    head=(node*)malloc(sizeof(node));
    temp=head;
    cout<<"enter size of list:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>head->val;
        if(i!=n-1)
            head->next=(node*)malloc(sizeof(node));
        else
            head->next=NULL;
        head=head->next;
    }
    head=temp;
    i=1;
    while(head!=NULL)
    {
        temp=head;
        //temp->val=head->val;
        head=head->next;
        if(i==1)
            temp->next=NULL;
        else
            temp->next=temp1;
        temp1=temp;
        i++;
    }
    head=temp1;
    while(head!=NULL)
    {
        temp=head;
        cout<<head->val<<" ";
        head=head->next;
        free(temp);
    }
    cout<<endl;
    return 0;
}
