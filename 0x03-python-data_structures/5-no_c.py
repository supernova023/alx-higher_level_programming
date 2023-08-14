#!/usr/bin/python3

def no_c(my_string):
    crem_str = ''
    for char in my_string:
        if char != 'c' and char != 'C':
            crem_str += char
    return (crem_str)
