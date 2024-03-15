def bubble_sort(array):
    for i in range(len(array)):
        for j in range(len(array)-1-i):
            if array[j+1]<array[j]:
                array[j+1],array[j]=array[j],array[j+1]
    print(array)

arr=[16,12,15,13,19]
bubble_sort(arr)