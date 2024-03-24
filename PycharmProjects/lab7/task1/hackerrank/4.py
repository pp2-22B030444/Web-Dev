# Enter your code here. Read input from STDIN. Print output to STDOUT
a = int(input())
b = set()
for i in range(a):
    s = input()
    b.add(s)
print(len(b))