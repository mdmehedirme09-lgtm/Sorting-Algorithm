def bubble_sort(arr):
    #n=len(arr)
    for i in range(len(arr)):
        isSwap=False #Check the list is already sorted or not
        for j in range(len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]#python neednt any temp variable
                isSwap=True
        if isSwap=False:#if there was no swapping just return the array
            return
                
                # temp=arr[j]
                # arr[j]=arr[j+1]
                # aee[j+1]=temp
list=[1,6,7,3,4,5,2,1,1,3,5,89,23,455,566,45]
print(f"Original List:{list}")

bubble_sort(list)
print(f"Sorted List:{list}")
