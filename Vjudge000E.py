n = int(input())
ar = []
for i in range(n):
    inv = int(input())
    arr = []
    for j in range(inv):
        m,n = input().split()
        arr.append(int(m))
        arr.append(int(n))
    pos = [x for x in range(len(arr)) if x%2==0]
    pos1 = [x for x in range(len(arr)) if x%2!=0]
    fvalue = [arr[i] for i in pos]
    svalue = [arr[i] for i in pos1]
    fvalue = "".join(str(x) for x in fvalue)
    svalue = "".join(str(x) for x in svalue)
    ans = int(fvalue) + int(svalue)
    ar.append(ans)
print(*ar, sep='\n')