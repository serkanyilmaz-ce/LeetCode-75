struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr)
        {
            next = curr->next; // Store next node before breaking the link
            curr->next = prev; // Reverse the link
            prev = curr;       // Move prev pointer forward
            curr = next;       // Move curr pointer forward
        }
        return prev; // prev points to the new head of reversed list
    }
};