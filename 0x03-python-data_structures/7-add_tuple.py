#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    size_a = len(tuple_a)
    size_b = len(tuple_b)

    if size_a == 0:
        a1 = 0
        a2 = 0
    elif size_a == 1:
        a1 = tuple_a[0]
        a2 = 0
    else:
        a1 = tuple_a[0]
        a2 = tuple_a[1]

    if size_b == 0:
        b1 = 0
        b2 = 0
    elif size_b == 1:
        b1 = tuple_b[0]
        b2 = 0
    else:
        b1 = tuple_b[0]
        b2 = tuple_b[1]

    sum_tuple = (a1 + b1, a2 + b2)

    return (sum_tuple)
