#!/usr/bin/python3
for i in range(1, 10):
    for j in range(i + 1, 10):
        print("{:02d}, ".format(i) + "{:02d}".format(j), end=", " if j < 9 else "\n")