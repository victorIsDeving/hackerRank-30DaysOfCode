#!/bin/python3


if __name__ == '__main__':
    n = int(input().strip())
    b = bin(n)
    # seq = 0
    max_seq = 0
    # for c in b[2:]:
    #     if c == "1":
    #         seq += 1
    #     else:
    #         if max_seq < seq:
    #             max_seq = seq
    #         seq = 0
    # print(max_seq if max_seq > seq else seq)
    
    #trying to improve the solution
    for el in b[2:].split("0"):
        if len(el) > max_seq:
            max_seq = len(el)
    print(max_seq)
