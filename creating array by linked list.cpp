#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node* point;
};

int main()
{
    int i,j,k,l,m,n;
    struct node* head;
    struct node* temp;
    head=(struct node*)malloc(sizeof(struct node));
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    temp=head;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        head->value=k;
        if(i!=n)
            head->point=(struct node*)malloc(sizeof(struct node));
        else
            head->point=NULL;
        head=head->point;
    }
    cout<<"your array elements are:"<<endl;
    head=temp;
    for(i=1; i<=n; i++)
    {
        cout<<head->value<<" ";
        temp=head;
        head=head->point;
        free(temp);
    }
    return 0;
}
