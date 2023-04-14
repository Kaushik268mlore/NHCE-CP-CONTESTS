def bestSumDownwardTreePath(parent, values):
    bestPath = float('-inf')
    n = len(parent)

    if n == 1:
        return values[0]

    tree = {}
    for i in range(1, n):
        if parent[i] not in tree:
            tree[parent[i]] = []
        tree[parent[i]].append(i)

    def findBestSum(root, sum1):
        nonlocal bestPath

        sum1 += values[root]
        bestPath = max(bestPath, sum1)
        sum1 = max(0, sum1)

        if root not in tree:
            return

        for child in tree[root]:
            findBestSum(child, sum1)

    findBestSum(0, 0)

    return bestPath


if _name_ == "_main_":
    parent = list(map(int, input("").split()))
    values = list(map(int, input("").split()))
    print(bestSumDownwardTreePath(parent, values))