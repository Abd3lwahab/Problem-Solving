n = int(input())
arr = [input() for i in range(n)]
T = arr.count('Tetrahedron') * 4
C = arr.count('Cube') * 6
O = arr.count('Octahedron') * 8
D = arr.count('Dodecahedron') * 12
I = arr.count('Icosahedron') * 20
print(T + C + D + O + I)