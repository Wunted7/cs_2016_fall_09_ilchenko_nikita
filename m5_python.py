def plus(list0):
    s = 0
    for x in list0:
        s += x
    return s


def plus1(list0):
    s = 0
    a = len(list0)
    while a > 0:
        s += list0[a-1]
        a -= 1
    return s
