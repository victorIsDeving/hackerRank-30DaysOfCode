#!/bin/python3

import re


def check_email(email,domain):
    # don't have to use regex for this one :P
    # if domain in email:
    #     return True
    # return False

    # using regex
    pat = re.compile(f'{domain}$')
    if pat.search(email):
        return True
    return False

if __name__ == '__main__':
    N = int(input().strip())

    emails = []
    for N_itr in range(N):
        first_multiple_input = input().rstrip().split()

        firstName = first_multiple_input[0]

        emailID = first_multiple_input[1]
        if check_email(emailID,"@gmail.com"):
            emails.append(firstName)
    emails.sort()
    print(*emails,sep="\n")
        