#!/bin/python3



if __name__ == '__main__':
    n = int(input().strip())
    
    arr = list(map(int, input().rstrip().split()))
    
    print(" ".join([str(arr[i]) for i in range(n-1,-1,-1)]))
