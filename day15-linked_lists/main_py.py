class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next
        print('')

    def insert(self,head,data): 
        new_node = Node(data)
        if not head:
            return new_node
        else:
            cur_node = head
            while cur_node.next:
                cur_node = cur_node.next
            cur_node.next = new_node
            #recursive solution
            # head.next = self.insert(head.next,data)

        return head

mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)   
mylist.display(head); 	  
