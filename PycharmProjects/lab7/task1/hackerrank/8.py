def swap_case(s):
    swapped_string = ""
    for char in s:
        if char.isupper():
            swapped_string += char.lower()
        else:
            swapped_string += char.upper()
    return swapped_string

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
