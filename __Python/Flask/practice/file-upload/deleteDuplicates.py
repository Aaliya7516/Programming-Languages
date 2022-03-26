# arr = [1,3,4,5,12,65,23,65,2,13,44,33,23,86,65,2,13,44,33,23,86]

# arr.sort()

# def deleteDuplicates(arr,n):
#     if n == 0 or n == 1:
#         return n
    
#     l = 0
#     r = 1
#     while(r<n):
#         if arr[l] != arr[r]:
#             l+=1
#             arr[l] = arr[r]
#         r+=1
#     return l+1

    
# last = deleteDuplicates(arr, len(arr))
# print (arr[:last])

# print(list(set(arr)).sort())


arr = ["I", "code", "in", "Python"]

print(' '.join(arr))