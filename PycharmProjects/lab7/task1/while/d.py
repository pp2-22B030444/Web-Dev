a = int(input())
i = 0
p = 1
while p < a:
    i += 1
    p *= 2

if p == a:
    print("YES")
else:
    print("NO")
