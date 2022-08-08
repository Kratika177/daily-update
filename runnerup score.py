if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    res = [i for i in arr if i != max(arr)]            
    print(max(res))        
