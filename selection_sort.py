def selection_sort(array):
    for i in range(len(array)):
        min=i
        for j in range(i+1,len(array)):
            if array[j]<array[min]:
                min=j
        array[i],array[min]=array[min],array[i]
    print(array)


array=[16,12,15,13,19]
selection_sort(array)