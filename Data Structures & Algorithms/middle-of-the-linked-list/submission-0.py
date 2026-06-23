# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        length = 0
        curr = head
        while(curr is not None):
            length += 1
            curr = curr.next
        middle = length/2
        print(middle)
        curr2 = head
        while(middle >= 1):
            middle -= 1
            curr2 = curr2.next
        head = curr2
        return head