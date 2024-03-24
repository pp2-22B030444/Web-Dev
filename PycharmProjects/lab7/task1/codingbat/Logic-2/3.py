def lucky_sum(a, b, c):
  sumi = 0
  list = [a, b, c, 13]
  for n in list[:list.index(13)]:
    sumi += n
  return sumi