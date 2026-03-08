#!/bin/python3


if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    
    max_hg_sum = -9*7 #valor minimo
    for i in range(4):
        for j in range(4):
            hg_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            if hg_sum > max_hg_sum:
                max_hg_sum = hg_sum
    print(max_hg_sum)
