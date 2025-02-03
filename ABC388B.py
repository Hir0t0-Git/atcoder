N, D = (int(i) for i in input().split())
T = [0] * N
L = [0] * N
for i in range(N):
    T[i], L[i] = (int(x) for x in input().split())
ans = []
for k in range(1,D+1):
    tmp = []
    for i in range(N):
        tmp.append(T[i]*(L[i]+k))
    ans.append(max(tmp))
for i in range(len(ans)):
    print(ans[i])