#!/bin/python

import math
import os
import random
import re
import sys



class Car:
    pass
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def __str__(self):
        return "Car with the maximum speed of "+str(self.a)+" "+(self.b) 
        
        
            

class Boat:
    pass
    def __init__(self,n):
        self.n=n
    def __str__(self):    
        return "Boat with the maximum speed of "+str(self.n)+" knots"
 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(raw_input())
    queries = []
    for _ in xrange(q):
        args = raw_input().split()
        vehicle_type, params = args[0], args[1:]
        if vehicle_type == "car":
            max_speed, speed_unit = int(params[0]), params[1]
            vehicle = Car(max_speed, speed_unit)
        elif vehicle_type == "boat":
            max_speed = int(params[0])
            vehicle = Boat(max_speed)
        else:
            raise ValueError("invalid vehicle type")
        fptr.write("%s\n" % vehicle)
    fptr.close()
