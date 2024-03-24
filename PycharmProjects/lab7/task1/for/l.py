binary_number = input().strip()

decimal_number = 0

for i in range(len(binary_number)):

    decimal_number += int(binary_number[i]) * (2 ** (len(binary_number) - 1 - i))

print(decimal_number)