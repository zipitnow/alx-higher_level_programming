#!/usr/bin/python3
def uppercase(str):
    string = ''
    for char in str:
        if ord(char) in range(97, 123):
            string += chr(ord(char) - 32)
        else:
            string += char
    return print(string)
