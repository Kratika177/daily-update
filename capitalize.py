#!/bin/python

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    l=s.split(" ")
    s1=""
    for i in l:
        s1=s1+i.capitalize()+" "
    
    return s1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
