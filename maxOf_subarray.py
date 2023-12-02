from collections import deque

def max_of_subarrays(arr, N, K):
    result = []

    # Create a deque to store indices of elements in the current window
    window = deque()

    # Process the first window
    for i in range(K):
        # Remove elements smaller than the current element from the back of the deque
        while window and arr[i] >= arr[window[-1]]:
            window.pop()
        window.append(i)

    # Process the remaining windows
    for i in range(K, N):
        # The front of the deque contains the maximum element index for the current window
        result.append(arr[window[0]])

        # Remove elements that are outside the current window
        while window and window[0] <= i - K:
            window.popleft()

        # Remove elements smaller than the current element from the back of the deque
        while window and arr[i] >= arr[window[-1]]:
            window.pop()

        # Add the current element index to the deque
        window.append(i)

    # Add the maximum element of the last window
    result.append(arr[window[0]])

    return result

# Example usage:
arr = [1, 2, 3, 1, 4, 5, 2, 3, 6]
N = 9
K = 3
output = max_of_subarrays(arr, N, K)
print(output)
