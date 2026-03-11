class Difference:
    def __init__(self, a):
        self.__elements = a
        self.maximumDifference = -1

	# Add your code here
    def computeDifference(self):
        # from itertools import permutations
        # l = list(permutations(self.__elements,2))
        # for i in l:
        #     val = abs(i[0]-i[1])
        #     if val > self.maximumDifference:
        #         self.maximumDifference = val
        
        # super cool solution, linear time
        self.maximumDifference = abs(max(self.__elements) - min(self.__elements)) 


# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)
