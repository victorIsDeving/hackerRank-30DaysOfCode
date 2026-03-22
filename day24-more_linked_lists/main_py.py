class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def insert(self,head,data):
            p = Node(data)           
            if head==None:
                head=p
            elif head.next==None:
                head.next=p
            else:
                start=head
                while(start.next!=None):
                    start=start.next
                start.next=p
            return head  
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next
        print()

    def removeDuplicates(self,head):
        #Write your code here
        data = []
        cur = head
        last = None
        while cur:
            changed = False
            if cur.data in data and last is not None:
                changed = True
                last.next = cur.next
            if not changed:
                data.append(cur.data)
                last = cur
            cur = cur.next
        return head

mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)    
head=mylist.removeDuplicates(head)
mylist.display(head); 
