def make_bricks(small, big, goal):
    return small >= goal - min(big, goal // 5) * 5