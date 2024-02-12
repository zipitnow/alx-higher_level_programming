#!/usr/bin/python3
for i in range(90, 64, -1):
    if (90 - i) % 2 == 0:
        print("{0}{1}".format(chr(i + 32), chr(i-1)), end="")
