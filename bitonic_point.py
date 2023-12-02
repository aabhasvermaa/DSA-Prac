def findMaximum(arr, n):
    start, end = 0, n - 1

    while start <= end:
        mid = start + (end - start) // 2

        # Check if mid is the maximum element
        if (mid == 0 or arr[mid] > arr[mid - 1]) and (mid == n - 1 or arr[mid] > arr[mid + 1]):
            return arr[mid]

        # If the left side is increasing, search on the right side
        elif arr[mid] > arr[mid - 1] and arr[mid] < arr[mid + 1]:
            start = mid + 1

        # If the right side is increasing, search on the left side
        elif arr[mid] > arr[mid + 1]:
            end = mid - 1
        # If the right side is decreasing, search on the right side
        else:
            start = mid + 1

# Example usage:
arr = [1, 15, 25, 45, 42, 21, 17, 12, 11]
n = len(arr)

result = findMaximum(arr, n)
print(result)
