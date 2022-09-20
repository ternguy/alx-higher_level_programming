#!/usr/bin/python3

def uppercase(str):
    for p in str:
        if ord(p) >= 97 and ord(p) <= 122:
            p = chr(ord(p) - 32)
            print("{}".format(p), end='')
            print()
