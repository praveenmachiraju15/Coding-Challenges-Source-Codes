t=int(raw_input())
for i in range(0,t):
    n=int(raw_input())
    res=1
    for j in range(0,n):
        res=res*2
    print (res-1)%100000