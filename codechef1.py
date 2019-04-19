n=int(input())
arr=[]
for i in range(n):
    b=input().split()
    if 'not' in b:
        arr.append("Real Fancy")
    else:
        arr.append("regularly fancy")

for i in arr:
    print(i)
