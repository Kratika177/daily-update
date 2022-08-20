from __future__ import division

def average(array):
    sum=0
    a=set()
    # your code goes here
    for i in array:
        a.add(i)
        
    for i in a:
        sum=sum+i    
    return sum/len(a)    

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result
