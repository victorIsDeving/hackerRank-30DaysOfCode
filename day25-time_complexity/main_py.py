
if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        prime = True
        for i in range(2,int(n**(1/2))+1):
            if n % i == 0:
                prime = False
                break
        print("Prime" if prime and n != 1 else "Not prime")
