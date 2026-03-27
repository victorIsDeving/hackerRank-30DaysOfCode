#!/bin/python3

import os

#
# Complete the 'bitwiseAnd' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER N
#  2. INTEGER K
#

def bitwiseAnd(N, K):
    max_val = 0
    # print(N,K,max_val)
    
    for i in range(1,N+1):
        for j in range(i+1,N+1):
            # print("  ",i,j,i&j)
            val = i & j
            if val > max_val and val < K:
                # print(" :)")
                max_val = val
    
    return max_val

if __name__ == '__main__':

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        count = int(first_multiple_input[0])

        lim = int(first_multiple_input[1])

        res = bitwiseAnd(count, lim)

        print(res)

