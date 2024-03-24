def caught_speeding(speed, is_birthday):
  s = speed - (65 if is_birthday else 60)
  if s > 20:
    return 2
  elif s > 0:
    return 1
  else:
    return 0