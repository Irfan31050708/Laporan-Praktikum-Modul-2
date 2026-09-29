pi: float = 22.0 / 7.0
radius, height = map(int, input().split())

volume: float = pi * (radius * radius) * height
area: float = 2 * pi * radius * (radius + height)
perimeter: float = 2 * pi * radius

print(f"Volume = {volume:.2f}")
print(f"Luas = {area:.2f}")
print(f"Keliling = {perimeter:.2f}")