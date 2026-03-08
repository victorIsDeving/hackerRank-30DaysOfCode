# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
words = []

for i in range(int(n)):
    words.append(input())

for el in words:
    even = ""
    odd = ""
    for i,c in enumerate(el):
        if i % 2 == 0:
            even += c
        else:
            odd += c
    print(f"{even} {odd}")


# very interesting solution
# for i in range(int(input())): s=input(); print(*["".join(s[::2]),"".join(s[1::2])])
