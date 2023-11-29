class Solution:
    def missingNumber(self,array,n):
        arr_sum = sum(array)
        expected_sum = (n*(n+1))//2
        
        return expected_sum - arr_sum
    
#driver code
t = int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int, input().split()))
    s=Solution().missingNumber(a,n)
    print(s)