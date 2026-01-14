import sys, random
from time import *

n = 512

# Record time of our experiment
start = time()

# Initialize our arrays
A = [[random.random() for row in range(n)]for col in range(n)]
print(len(A))
B = [[random.random() for row in range(n)]for col in range(n)]
C = [[0 for row in range(n)]for col in range(n)]


for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

# Stop time of our experiment
end = time()
print("%0.5f" % (end-start))

