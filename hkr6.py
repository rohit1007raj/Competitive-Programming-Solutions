n=int(input())
a=input().split()
arr=[]
for i in a:
    arr.append(int(i))
diffarr=[]
for i in range(0,n,1):
    for j in range(i+1,n,1):
        if(a[i]==a[j]):
            diff=j-i
            diffarr.append(diff)
        

if(len(diffarr)==1):
    print(diff)
elif(len(diffarr)>1):
    print(min(diffarr))
else:
    print("-1")
