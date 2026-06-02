def quick_sort(arr):
    if len(arr)<=1:
        return arr
    else:
        pivot=arr[0]
        
    smaller=[]
    larger=[]
    for num in arr[1:]:
        if num<pivot:
            smaller.append(num)
        else:
            larger.append(num)
    return quick_sort(smaller)+[pivot]+quick_sort(larger)

arr=[1,2,3,12,4,5,6,7,8,9,10]
print(f"Original List:{arr}")
sorted_arr=quick_sort(arr)
print(f"Sorted List:{sorted_arr}")
