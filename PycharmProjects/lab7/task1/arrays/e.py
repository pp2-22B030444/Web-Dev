N = int(input())
array = list(map(int, input().split()))

found = False
for i in range(1, N):
    if array[i] * array[i - 1] > 0:
        found = True
        break

if found:
    print("YES")
else:
    print("NO")
