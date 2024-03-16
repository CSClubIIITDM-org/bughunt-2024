#program to add two numbers represented by linked lists in reverse order
#e.g. 2->4->3 + 5->6->4 = 7->0->8 (342 + 465 = 807)

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummyHead = ListNode(0)
        tail = dummyHead
        carry = 0

        while l1 or l2 or carry:
            digit1 = l1.val if l1 else 0
            digit2 = l2.val if l2 else 0

            total_sum = digit1 + digit2 + carry
            digit = total_sum % 10
            carry = total_sum // 10

            newNode = ListNode(digit)
            tail.next = newNode
            tail = tail.next

            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next

        return dummyHead.next
