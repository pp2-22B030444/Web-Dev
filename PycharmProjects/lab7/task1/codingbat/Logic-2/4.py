def no_teen_sum(a, b, c):
  a1 = a if a not in [13,14,17,18,19] else 0
  b1 = b if b not in [13,14,17,18,19] else 0
  c1 = c if c not in [13,14,17,18,19] else 0

  return a1 + b1 + c1