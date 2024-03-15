def insertion_sort(array):
    for i in range(1,len(array)):
        key=array[i]
        j=i-1
        while j>=0 and key <array[j]:
            array[j+1]=array[j]
            j-=1
        array[j+1]=key

    print(array)

array=[3,5,1,6,8,-4]
insertion_sort(array)
