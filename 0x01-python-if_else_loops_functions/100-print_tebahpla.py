#!/usr/bin/python3
for i in range(ord('z'), ord('a'), -1, -1):
    if p % 2 == 0:
        diff = 0
    else:
        diff = 32
        print('{}'.formate(chr(p - diff)), end="")
