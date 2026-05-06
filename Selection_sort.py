def selection_sort(arr):
    n=len(arr)
    for i in range (n-1):
        min_index=i
        for j in range(i+1,n):
            if arr[j]<arr[min_index]:
                min_index=j
        arr[i],arr[min_index]=arr[min_index],arr[i]

arr=[1,2,3,12,4,5,6,7,8,9,10]
print(f"Original List:{arr}")
selection_sort(arr)
print(f"Sorted List:{arr}")
