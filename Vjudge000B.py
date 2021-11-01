n = int(input())
if(1 <= n <= pow(10,15)):
    if(n%2 == 0):
        x = int(n/2)
        print(x)
    else:
        x = int(-1*((n/2)+1))
        print(x)