#include <iostream>
#include <vector>

#define MOD 1000000007

class LegoBlocks {
public:
    LegoBlocks(int m, int n) : M(m), N(n), table(n + 1, -1), table2(n + 1, -1) {
        fill_table2(n);

        for (int i = 0; i <= n; ++i) {
            int res = 1;
            for (int j = 0; j < m; ++j) {
                res = (res * table2[i]) % MOD;
            }
            table2[i] = res;
        }
    }

    int evaluate() {
        return helper(N);
    }

private:
    int M, N;
    std::vector<int> table;
    std::vector<int> table2;

    int fill_table2(int n) {
        if (n < 0) {
            return 0;
        }
        if (table2[n] == -1) {
            if (n == 0) {
                table2[n] = 1;
            } else {
                table2[n] = (fill_table2(n - 1) + fill_table2(n - 2) + fill_table2(n - 3) + fill_table2(n - 4)) % MOD;
            }
        }
        return table2[n];
    }

    int helper(int n) {
        if (table[n] == -1) {
            if (n == 1) {
                table[n] = 1;
            } else {
                table[n] = table2[n];
                for (int i = 1; i < n; ++i) {
                    table[n] = (table[n] - helper(n - i) * table2[i]) % MOD;
                }
                if (table[n] < 0) {
                    table[n] += MOD;
                }
            }
        }
        return table[n];
    }
};

int main() {
    int m, n;
    std::cin >> m >> n;

    LegoBlocks lego_blocks(m, n);
    std::cout << lego_blocks.evaluate() << std::endl;

    return 0;
}