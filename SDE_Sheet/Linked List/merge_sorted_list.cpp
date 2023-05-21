#include<bits/stdc++.h>


using namespace std;

class Solution
{
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // iterative method
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val > l2->val)
            std ::swap(l1, l2);

        ListNode *res = l1;

        while (l1 && l2)
        {
            ListNode *temp = NULL;
            while (l1 != NULL && l1->val <= l2->val)
            {
                tmp = l1;
                l1 = l1->next;
            }
            tmp->next = l2;
            std::swap(l1, l2);
        }
        return res;
    }
};