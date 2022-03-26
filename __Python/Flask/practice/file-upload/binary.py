arr = [1,2,3,4,5,6,7,8,9]

def bin(arr, l, r, x):
    while(l<=r):
        mid = l+ (r-l)//2
        if arr[mid] == x:
            return mid
        elif arr[mid]<x:
            l = mid+1
        else:
            r = mid-1
    return "Not Found"    

print(bin(arr, 0, len(arr)-1, 7))


1-100
duplicated
not sorted
 