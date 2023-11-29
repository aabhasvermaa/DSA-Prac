import math

class Solution:
    def search(arr, N, X):
        for i in range(N):
            if arr[i] == X:
                return i
        return i 



#drivercode
def main():
    T = int(input())
    while(T>0):
        N = int(input())
        A = [int(x) for x in input().strip().split()]
        x = int(input())
        ob= Solution()
        print(ob.search(A,N,x))

        T-=1

if __name__ == '__main__':
    
    main()