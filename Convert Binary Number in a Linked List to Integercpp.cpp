#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

int main()
{
    struct ListNode* head;
    head=(ListNode*)malloc(sizeof(ListNode));
    head->val=1;
    head->next=NULL;
    struct ListNode* temp;
    temp=head;
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    cnt--;
    head=temp;
    int res=0;
    while(head!=NULL)
    {
        res+=(head->val * pow(2,cnt));
        cnt--;
        temp=head;
        head=head->next;
        free(temp);
    }
    cout<<res<<endl;
}
