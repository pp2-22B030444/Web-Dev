def has22(nums):
  for i, k in enumerate(nums[:-1]):
    if k == 2 and nums[i + 1] == 2:
      return True
  return False