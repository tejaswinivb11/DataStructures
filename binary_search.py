import time
def binary_search(array,key):
    low=0
    high=len(array)
    while high>=low:
        mid=(low+high)//2
        if array[mid]==key:
            print(mid)
            break
        else:
            if array[mid]<key:
                low=mid+1
            else:
                high=mid-1

arr=[5]
key=5
start = time.time()
binary_search(arr,key)
end = time.time()
print("time:",end - start)