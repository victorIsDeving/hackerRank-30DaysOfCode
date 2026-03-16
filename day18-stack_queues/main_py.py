import queue

class Solution:
    '''queue and stack implementation'''
    def __init__(self):
        self.queue = queue.Queue()
        self.stack = queue.LifoQueue()
        
    def enqueueCharacter(self,c):
        self.queue.put(c)
    def dequeueCharacter(self):
        if self.queue.empty():
            raise Exception("queue is empty")
        return self.queue.get()
    
    def pushCharacter(self,c):
        self.stack.put(c)
    def popCharacter(self):
        if self.stack.empty():
            raise Exception("stack is empty")
        return self.stack.get()

# read the string s
s=input()
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
#finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    
