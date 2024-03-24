def sum67(nums):
  cnt, flag = 0, False
  for i in nums:
    if i == 6:
      flag = True
      continue
    if i == 7 and flag:
      flag = False
      continue
    if not flag:
      cnt += i
  return cnt