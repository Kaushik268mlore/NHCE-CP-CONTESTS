import sys


def minDistance(s1, s2):
    dp = [[float("inf")] * (len(s2) + 1) for i in range(len(s1) + 1)]

    for j in range(len(s2) + 1):
        dp[len(s1)][j] = len(s2) - j
    for i in range(len(s1) + 1):
        dp[i][len(s2)] = len(s1) - i

    for i in range(len(s1) - 1, -1, -1):
        for j in range(len(s2) - 1, -1, -1):
            if s1[i] == s2[j]:
                dp[i][j] = dp[i + 1][j + 1]
            else:
                dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j + 1], dp[i + 1][j + 1])
    return dp[0][0]


def get_string():
    return sys.stdin.readline().strip()


def main():
    s1 = get_string()
    s2 = get_string()
    print(minDistance(s1, s2))


main()