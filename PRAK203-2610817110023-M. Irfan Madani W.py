a, b, i, j, x, y = map(int, input().split())

result = ((a - b) * (i / j) - (x + y))
print(f"{result:.3f}")