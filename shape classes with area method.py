#!/bin/python

import math
import os
import random
import re
import sys


class Rectangle:
    pass
    
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def area(self):
        return (self.a * self.b)    

class Circle:
    pass
    
    def __init__(self,r):
        self.r=r
        
    def area(self):
        return ((3.141592653589)*self.r * self.r)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(raw_input())
    queries = []
    for _ in xrange(q):
        args = raw_input().split()
        shape_name, params = args[0], map(int, args[1:])
        if shape_name == "rectangle":
            a, b = params[0], params[1]
            shape = Rectangle(a, b)
        elif shape_name == "circle":
            r = params[0]
            shape = Circle(r)
        else:
            raise ValueError("invalid shape type")
        fptr.write("%.2f\n" % shape.area())
    fptr.close()
