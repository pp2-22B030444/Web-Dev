def xyz_there(str):
  j = 0
  while "xyz" in str[j:]:
    if str[j - 1 + str[j:].index("xyz")] != ".":
        return True
    j += str[j:].index("xyz") + 2
  return False