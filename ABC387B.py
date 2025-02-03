import numpy as np
X = int(input())
A = []
for i in range(1,10):
    tmp = []
    for j in range(1,10):
        tmp.append(i*j)
    A.append(tmp)
B = np.array(A)
n = np.count_nonzero(B==X)
print(2025-X*n)