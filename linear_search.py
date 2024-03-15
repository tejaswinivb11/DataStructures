import time 
class linear_search:
    def search(array,key):
        flag=0
        for i in range(0,len(array)-1):
            if array[i]==key:
                flag=1
                break
        if flag==1:
            print("element found at",i)
        else:
            print("element not found")
obj = linear_search()
arr=[1,3,4,5,6,7]
key=3
start = time.time()
obj.search(arr,key)
end  = time.time()
print("the total time take is:",end - start)