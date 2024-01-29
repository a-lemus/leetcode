#https://leetcode.com/problems/implement-queue-using-stacks/?envType=daily-question&envId=2024-01-29
class node:
    def __init__(self,val,child):
        self.val = val
        self.child = child


class MyQueue:

    def __init__(self):
        self.head = None

    def push(self, x: int) -> None:
        newNode = node(x,None)
        if self.head:
            hed = self.head
            while hed.child:
                hed = hed.child
            hed.child = newNode
        else:
            self.head = newNode



    def pop(self) -> int:
        hed = self.head
        if self.head.child:
            self.head = self.head.child
        else:
            self.head = None
        return hed.val
        

    def peek(self) -> int:
        return self.head.val

    def empty(self) -> bool:
        if self.head: return False
        return True


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()