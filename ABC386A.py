A = [int(i) for i in input().split()]
d = {}
for i in range(len(A)):
  if A[i] not in d:
    d[A[i]] = 1
  else:
    d[A[i]] += 1
flag = 0
for k in d.values():
    if k == 3:
       flag += 1
    elif k == 2:
        flag += 10
    elif k == 1:
       flag += 100
if flag == 20 or flag == 101:
  print("Yes")
else:
  print("No")