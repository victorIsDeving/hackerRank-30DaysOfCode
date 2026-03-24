
def fine (due,returned):
    fee = 0
    if due[2] < returned[2]:
        fee = 10000
    elif due[1] < returned[1] and returned[2] >= due[2]:
        fee = 500 * (returned[1] - due[1])
    elif due[0] < returned[0] and returned[1] >= due[1] and returned[2] >= due[2]:
        fee = 15 * (returned[0] - due[0])
    
    # tuple comparison, nice solution, works the same with lists
    # if (returned[2],returned[1],returned[0]) <= (due[2],due[1],due[0]):
    #     fee = 0
    # elif (returned[2],returned[1]) <= (due[2],due[1]):
    #     fee = 15 * (returned[0] - due[0])
    # elif returned[2] == due[2]:
    #     fee = 500 * (returned[1] - due[1])
    # else:
    #     fee = 10000

    return fee

if __name__ == "__main__":
    returned = list(map(int,input().split()))
    due = list(map(int,input().split()))
    
    print(fine(due,returned))
