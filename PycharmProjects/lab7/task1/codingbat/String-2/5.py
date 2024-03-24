def end_other(a, b):
  l, s = (a,b) if len(a) >= len(b) else (b,a)
  return l.lower().endswith(s.lower())