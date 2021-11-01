x = int(input())
arr = []
for i in range(x):
  y = int(input())
  z = input()
  if(z[0]==">"):
    arr.append(0)
  elif(z[y-1]== "<"):
    arr.append(0)
  else:
    for i in range(y):
      if(z[i]==">"):
        a = i
        break
    for i in range(y):
      if(z[i]=="<"):
        b = i
    xxx = min(a,y-b-1)
    arr.append(xxx)
print(*arr, sep='\n')