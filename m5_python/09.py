def plus(list0):
    s = 0
    for i in list0:
        s += i
    return s


def plus1(list0):
    s = 0
    i = len(list0)
    while i > 0:
        s += list0[i - 1]
        i -= 1
    return s


def plus2(list0):
    i = len(list0)
    s = list0[0]
    if i == 1:
        s = list0[0]
    else:
        s += plus2(list0[1:])
    return s


def step(n):
    i = 0
    while 2 ** i <= n:
        i += 1
    print i - 1, 2 ** (i - 1)


def mid(list0):
    a = len(list0)
    return reduce(lambda x, y: x + y, list0) / float(a)


def fib(n):
    i = 0

    def fib1(x):
        a = 0
        b = 1
        for __ in range(x):
            a, b = b, a + b
        return a
    while fib1(i) < n:
        i += 1

    if fib1(i) == n:
        print i
    else:
        print -1


def fact(n):
    if n == 0:
        return 1
    f = n * fact(n - 1)
    return f


def ro(a, b, c, d):
    import math
    l = math.sqrt((c-a)**2+(d-b)**2)
    return l
