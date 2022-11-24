#!/usr/bin/python3

import random

g1Count = 0
g2Count = 0

for x in range (1,10000000):
    car = random.randint(1, 3)
    guess1 = 1
    if car == 1:
        g1Count += 1
    else:
        g2Count += 1

print ("Guess 1 Count: %d"%g1Count)
print ("Guess 2 Count: %d"%g2Count)
