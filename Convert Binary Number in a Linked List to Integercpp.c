#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
};

int main()
{
    ListNode* head;
    ListNode* temp;
    head=(ListNode*)malloc(sizeof(ListNode));
    head->val=10;
    temp=head;
    free(head);
    cout<<temp->head<<endl;
}
