// https://www.interviewbit.com/problems/insertion-sort-list/


ListNode* Solution::insertionSortList(ListNode* A) {
ListNode *temp=A;
while(temp->next!=NULL)
{
    ListNode *a=temp->next;
    while(a)
    {
        if(temp->val>a->val)
        {
            swap(a->val, temp->val);
        }
        a=a->next;
    }
    temp=temp->next;
}
return A;
}
