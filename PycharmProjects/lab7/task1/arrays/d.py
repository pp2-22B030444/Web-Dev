N = int(input())
array = list(map(int, input().split()))
cnt = 0
for i in range(1, N):
    if int(array[i]) > int(array[i-1]):
        cnt += 1

print(cnt)
