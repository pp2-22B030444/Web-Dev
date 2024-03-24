N = int(input())
array = input().split()
cnt = 0
for i in range(N):
    if (int(array[i]) > 0):
        cnt += 1

print(cnt)