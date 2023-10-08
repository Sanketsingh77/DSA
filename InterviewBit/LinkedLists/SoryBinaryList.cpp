ListNode* Solution::solve(ListNode* A) {
    ListNode *current = A, *prev = NULL;
    int count0 = 0, count1 = 0;
    while (current) {
        if (current->val == 0) count0++;
        else count1++;
        current = current->next;
    }
    current=A;
    while(count0--){
        current->val=0;
        current= current->next;
        
    }
    while(count1--){
        current->val=1;
        current= current->next;
    }
    return A;
    //this A is head of linked list
    
}
