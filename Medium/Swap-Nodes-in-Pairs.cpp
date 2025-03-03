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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head != nullptr) {
            Solve(head, true);
        }
        return head;
    }

    void Solve(ListNode* curr, bool can_swap) {

        // base case
        if (curr->next == nullptr) {
            return;
        }

        if (can_swap) {
            swap(curr->val, curr->next->val);
        }

        // Transition
        Solve(curr->next, !can_swap);
    }
};