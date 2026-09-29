import math

height, side = map(int, input().split()) 

base: int = math.sqrt((side * side) - (height * height))
perimeter: int = height + side + base
area: int = (base * height) / 2

print(f"Alas = {base:.0f} cm")
print(f"Tinggi = {height:.0f} cm")
print(f"Luas = {area:.0f} cm")