#!/bin/python3


if __name__ == '__main__':
    N = int(input().strip())
    
    if N % 2 or (N>=6 and N<=20):
        print("Weird")
    else:
        print("Not Weird")
    
