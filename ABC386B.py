import numpy as np
d = [00,0,1,2,3,4,5,6,7,8,9]
S = input()
n = len(S)
i = 0
cnt = 0
while i < n:
    if i != n-1 and S[i] == "0" and S[i+1] == "0":
        i += 2
    else:
        i += 1
    cnt += 1
print(cnt)