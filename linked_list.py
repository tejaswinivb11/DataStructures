#singly linked list

class node:
    def __init__(self,data):
        self.data=data
        self.next=None
    
class singly_linked_list:
    def __init__(self):
        self.head=None
        
    def insertion_in_beginning(self,data):
        print()
        ne=node(data)
        if self.head is not None:
            ne.next=self.head
            self.head=ne
        else:
            self.head=ne
    def insertion_at_end(self,data):
        print()
        nb=node(data)
        a=self.head
        while a.next is not None:
            a=a.next
        a.next=nb
    def insertion_in_between(self,data,position):
        print()
        nib=node(data)
        a=self.head
        for i in range(1,position-1):
            a=a.next
        nib.next=a.next
        a.next=nib
    def deletion_at_beginning(self):
        print()
        a=self.head
        self.head=a.next
        a.next=None
    def deletion_at_end(self):
        print()
        a=self.head.next
        prev=self.head
        while a.next is not None:
            a=a.next
            prev=prev.next
        prev.next=None
    def deletion_in_between(self,position):
        print()
        a=self.head.next
        prev=self.head
        for i in range(1,position-1):
            a=a.next
            prev=prev.next
        prev.next=a.next
        a.next=None
    def traversal(self):
        
        a=self.head
        while a is not None:
            print(a.data,end=" ")
            a=a.next




n1=node(1)
sll=singly_linked_list()
sll.head=n1
n2=node(2)
n1.next=n2
n3=node(3)
n2.next=n3
sll.insertion_in_beginning(10)
sll.traversal()
sll.insertion_at_end(20)
sll.traversal()
sll.insertion_in_between(30,3)
sll.traversal()



#doubly linked list
class dnode:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None
class doubly_linked_list():
    def __init__(self):
        self.head=None
    def insertion_at_beginning(self,data):
        print( )
        nb=node(data)
        self.head.prev=nb
        nb.next=self.head
        self.head=nb
    def insertion_at_end(self,data):
        ne=node(data)
        a=self.head
        while a.next is not None:
            a=a.next
        a.next=ne
        ne.prev=a
    def insertion_in_between(self,data,position):
        nib=node(data)
        a=self.head.next
        bef=self.head
        for i in range(1,position-1):
            a=a.next
            bef=bef.next
        nib.next=bef.next
        nib.prev=bef
        bef.next=nib
    def deletion_at_beginning(self):
        a=self.head
        self.head=a.next
        a.next=None
        self.head.prev=None
    def deletion_at_end(self):
        a=self.head.next
        bef=self.head
        while a.next is not None:
            a=a.next
            bef=bef.next
        bef.next=None
        a.prev=None
    def deletion_in_between(self,position):
        a=self.head.next
        bef=self.head
        for i in range(1,position-1):
            a=a.next
            bef =bef.next
        bef.next=a.next
        a.next.prev=bef
        a.next=None
        a.prev=None
        
    def traversal(self):
        a=self.head
        while a is not None:
            print(a.data,end=" ")
            a=a.next


dll=doubly_linked_list()
n1=node(1)
dll.head=n1
n2=node(2)
n1.next=n2
n2.prev=n1
dll.insertion_at_beginning(10)
dll.traversal()
dll.insertion_in_between(20,3)
dll.traversal()
dll.deletion_at_beginning()
dll.traversal()
dll.deletion_at_end()
dll.traversal()
dll.deletion_in_between(1)
dll.traversal()