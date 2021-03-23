#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;
};

int main()
{
    int n,k,i;
    node* head;
    node* temp;
    head=(node*)malloc(sizeof(node));
    temp=head;
    cout<<"enter size of linked list: ";
    cin>>n;
    node* temp1[n];
    for(i=0; i<n; i++)
    {
        cin>>head->val;
        temp1[i]=head;
        if(i!=n-1)
            head->next=(node*)malloc(sizeof(node));
        else
            head->next=temp;   ///last node er sathe first node er connection diye loop kora hoyeche.
        head=head->next;
    }
    head=temp;
    while(head!=NULL)
    {
        if(head!=head->next)
            cout<<head->val<<endl;
        else
        {
            cout<<"loop"<<endl;
            break;
        }
        temp=head;
        head=head->next;
        temp->next=temp;   ///protita node er next e tar nijer address rakha hocche jate buja jay node ti
        ///visit hoye geche.
    }
    for(i=0; i<n; i++)   ///sobgulo address clear kora hocche.
        free(temp1[i]);
    return 0;
}
