
def reverse(arr, start, end):
 
    # Stores mid of start and end
    mid = (end - start + 1) // 2
 
    # Traverse the array in
    # the range [start, end]
    for i in range(mid):
 
        # Stores arr[start + i]
        temp = arr[start + i]
 
        # Update arr[start + i]
        arr[start + i] = arr[end - i]
 
        # Update arr[end - i]
        arr[end - i] = temp
    return arr
 
# Utility function to shuffle the given array
# in the of form {a1, b1, a2, b2, ....an, bn}
def shuffleArrayUtil(arr, start, end):
    i = 0
 
    # Stores the length of the array
    l = end - start + 1
 
    # If length of the array is 2
    if (l == 2):
        return
 
    # Stores mid of the { start, end }
    mid = start + l // 2
 
    # Divide array into two
    # halves of even length
    if (l % 4):
 
        # Update mid
        mid -= 1
 
    # Calculate the mid-points of
    # both halves of the array
    mid1 = start + (mid - start) // 2
    mid2 = mid + (end + 1 - mid) // 2
 
    # Reverse the subarray made
    # from mid1 to mid2
    arr = reverse(arr, mid1, mid2 - 1)
 
    # Reverse the subarray made
    # from mid1 to mid
    arr = reverse(arr, mid1, mid - 1)
 
    # Reverse the subarray made
    # from mid to mid2
    arr = reverse(arr, mid, mid2 - 1)
 
    # Recursively calls for both
    # the halves of the array
    shuffleArrayUtil(arr, start, mid - 1)
    shuffleArrayUtil(arr, mid, end)
 
# Function to shuffle the given array in
# the form of {a1, b1, a2, b2, ....an, bn}
def shuffleArray(arr, N, start, end):
 
    # Function Call
    shuffleArrayUtil(arr, start, end)
 
    # Print the modified array
    for i in arr:
        print(i, end=" ")
 
# Driver Code
if __name__ == '__main__':
 
    # Given array
    arr = [1, 2, 9, 15]
 
    # Size of the array
    N = len(arr)
 
    # Shuffles the given array to the
    # required permutation
    shuffleArray(arr, N, 0, N - 1)
 