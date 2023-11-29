MOD = 1000000007

class LegoBlocks:
    def __init__(self, m, n):
        self.M = m
        self.N = n
        self.table = [-1] * (n + 1)
        self.table2 = [-1] * (n + 1)
        self.fill_table2(n)
        
        for i in range(n + 1):
            res = 1
            for j in range(m):
                res = (res * self.table2[i]) % MOD
            self.table2[i] = res

    def fill_table2(self, n):
        if n < 0:
            return 0
        if self.table2[n] == -1:
            if n == 0:
                self.table2[n] = 1
            else:
                self.table2[n] = (self.fill_table2(n - 1) + self.fill_table2(n - 2) +
                                  self.fill_table2(n - 3) + self.fill_table2(n - 4)) % MOD
        return self.table2[n]

    def evaluate(self):
        result = self.helper(self.N)
        return result

    def helper(self, n):
        if self.table[n] == -1:
            if n == 1:
                self.table[n] = 1
            else:
                self.table[n] = self.table2[n]
                for i in range(1, n):
                    self.table[n] = (self.table[n] - self.helper(n - i) * self.table2[i]) % MOD
                if self.table[n] < 0:
                    self.table[n] += MOD
        return self.table[n]

if __name__ == "__main__":
    m, n = map(int, input().split())
    lego_blocks = LegoBlocks(m, n)
    print(lego_blocks.evaluate())
