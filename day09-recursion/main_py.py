#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'factorial' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def factorial(n):
    if n == 2:
        return n
    
    return factorial(n-1) * n

if __name__ == '__main__':

    n = int(input().strip())

    result = factorial(n)

    print(result)
