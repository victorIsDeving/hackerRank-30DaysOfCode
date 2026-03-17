#!/bin/python3

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    swap_counter = 1
    swap_total = 0
    while swap_counter:
        swap_counter = 0
        for i in range(len(a)-1):
            if a[i] > a[i+1]:
                swap_counter += 1;
                temp = a[i]
                a[i] = a[i+1]
                a[i+1] = temp
        swap_total += swap_counter
        
    print(f"Array is sorted in {swap_total} swaps.")
    print(f"First Element: {a[0]}")
    print(f"Last Element: {a[-1]}")
