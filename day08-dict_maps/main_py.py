n = int(input())

phonebook = {}
for _ in range(n):
    a = input().split(" ")
    phonebook.update({a[0]: int(a[1])})

try:
    while (m := input()):
        if m in phonebook:
            print(f"{m}={phonebook[m]}")
        else:
            print("Not found")
except EOFError:
    pass
