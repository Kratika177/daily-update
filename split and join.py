def split_and_join(line):
    res=line.split(" ")
    ans="-".join(res)
    return ans

if __name__ == '__main__':
    line = raw_input()
    result = split_and_join(line)
    print result
