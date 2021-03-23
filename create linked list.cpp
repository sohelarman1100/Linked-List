#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node* next;
};
struct node* head;

int main()
{
    head=(struct node*) malloc(sizeof(struct node));
    head->value=6;
    head->next=(struct node*) malloc(sizeof(struct node));
    cout<<head->value<<"  "<<head->next<<endl;
    free(head);
    return 0;
}
