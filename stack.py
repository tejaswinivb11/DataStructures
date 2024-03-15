#implementation of statck useing list
class stack:
    def __init__(self):
       self.sta=[]
    def add(self,data):
        self.sta.append(data)

    def delete(self):
        if len(self.sta)>=0:
            self.sta.pop()
        else:
            print("the stakck in empty")
    
    def display(self):
        print(self.sta)


st=stack()
st.add(1)
st.add(2)
st.add(3)
st.display()
st.delete()
st.display()


#implementation of stack using deque
from collections import deque

class destack:
    def __init__(self):
        self.sta=deque()
    def add(self,data):
            self.sta.append(data)

    def delete(self):
        if len(self.sta)>=0:
            self.sta.pop()
        else:
            print("the stakck in empty")
    
    def display(self):
        print(self.sta)

st=destack()
st.add(1)
st.add(2)
st.add(3)
st.display()
st.delete()
st.display()

#implementation using lifo queue

from  queue import LifoQueue  
   
class lifostack:
    def __init__(self):
        size=int(input("enter the size of stack"))
        self.sta=LifoQueue(maxsize=size)
    def add(self,data):
        self.sta.put(data)

    def delete(self):
        if len(self.sta)>=0:
            self.sta.get()
        else:
            print("the stakck in empty")
    
    def display(self):
        print(self.sta)

st=lifostack()
st.add(1)
st.add(2)
st.add(3)
st.display()
st.delete()
st.display()
    

