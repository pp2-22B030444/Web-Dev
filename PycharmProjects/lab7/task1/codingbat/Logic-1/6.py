def alarm_clock(day, vacation):
  t = "10:00" if not vacation else "off"
  p = "7:00" if not vacation else "10:00"
  return p if day not in [6,0] else t