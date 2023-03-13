#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # extract the first and second elements of each tuple
    a = tuple_a[0] if len(tuple_a) > 0 else 0
    b = tuple_a[1] if len(tuple_a) > 1 else 0
    c = tuple_b[0] if len(tuple_b) > 0 else 0
    d = tuple_b[1] if len(tuple_b) > 1 else 0
    
    # add the corresponding elements and return the result as a tuple
    return (a+c, b+d)
