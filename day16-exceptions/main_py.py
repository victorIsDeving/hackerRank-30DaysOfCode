

if __name__ == "__main__":
    S = input()

    try:
        n = int(S)
    except ValueError:
        print("Bad String")
    else:
        print(n)
