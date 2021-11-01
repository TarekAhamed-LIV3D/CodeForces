p = ["a","b","c","d","e","f","g","h"]
s = input()
t = input()
x = p.index(t[0]) - p.index(s[0])
y = int(s[1]) - int(t[1])
a = p.index(s[0])
b = p.index(t[0])
c = int(s[1])
d = int(t[1])
x,y = abs(x), abs(y)
count = (max(x,y))
print(count)
if a > b:
    hmove = "L"
else:
    hmove = "R"
if c > d:
    vmove = "D"
else:
    vmove = "U"
 
z = min(x,y)
for i in range(z):
    print(str(hmove) + str(vmove))
if y== count:
    for i in range(count-z):
        print(vmove)
else:
    for i in range(count-z):
        print(hmove)