int res[21][21][21];
    int solve(string &a, string &b, string &c, int i, int j, int k) {
        if (i >= a.size() || j >= b.size() || k >= c.size()) {
            return 0;
        }
        if (res[i][j][k] != -1) {
            return res[i][j][k];
        }
        if (a[i] == b[j] && b[j] == c[k]) {
            return res[i][j][k] = solve(a, b, c, i + 1, j + 1, k + 1) + 1;
        }
        return res[i][j][k] = max({solve(a, b, c, i + 1, j, k),
                                   solve(a, b, c, i, j + 1, k),
                                   solve(a, b, c, i, j, k + 1)});
    }
    int LCSof3(string a, string b, string c, int n1, int n2, int n3) 
    {
        memset(res, -1, sizeof(res));
        return solve(a, b, c, 0, 0, 0);
    }
