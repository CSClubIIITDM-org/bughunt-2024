def countSort(arr):
    k = max(arr)
    count = [0 for _ in range(k+1)]
    ans = [0 for _ in range(len(arr))]
    
    # Count occurrences of each element
    for i in arr:
        count[i] += 1
    
    # Modify count array to contain actual positions in the sorted array
    for i in range(1, k+1):
        count[i] += count[i-1]
    
    # Place elements in the correct positions in the ans array
    for i in range(len(arr)-1, -1, -1):
        ans[count[arr[i]] - 1] = arr[i]
        count[arr[i]] -= 1
    
    return ans 

arr = [3, 4, 12, 2, 4, 5, 5, 6, 12, 33, 10, 1, 2, 8, 6]
ans = countSort(arr)
print(f"Sorted array is {ans}")
