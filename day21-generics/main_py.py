# no option to develop in Python at HackerRank
# because python is already dynamically typed
# but since 3.5 we do have generics in Python with typing module
# it can be used for static type checking
from typing import TypeVar,List


T = TypeVar('T')
def printArray (arr: List[T]):
    for i in arr:
        print(i)

if __name__ == "__main__":
    int_arr: List[int] = []
    for _ in range(int(input())):
        n = int(input())
        int_arr.append(n)
    
    str_arr: List[str] = []
    for _ in range(int(input())):
        s = input()
        str_arr.append(s)

    printArray(int_arr)
    printArray(str_arr)
