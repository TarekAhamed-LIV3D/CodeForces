T = int(input())
ar = []
for i in range(T):
    M,N = input().split()
    y = int(M)
    z = int(N)
    x = (y * z) % 3
    if(i < T):
        ar.append(x)
print(*ar, sep='\n')