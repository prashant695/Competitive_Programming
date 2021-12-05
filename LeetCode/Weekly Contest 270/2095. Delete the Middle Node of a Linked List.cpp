/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {

        if (head->next == nullptr)
            return nullptr;
        ListNode *slow = head;
        ListNode *fast = head, *p = head;
        while (fast != NULL && fast->next != NULL)
        {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        p->next = slow->next;
        return head;
    }
};