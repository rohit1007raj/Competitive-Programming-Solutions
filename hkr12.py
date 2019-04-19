x=input().split()
arr=[]
for i in x:
    arr.append(int(i))

y=input().split()
arr2=[]
for i in y:
    arr2.append(int(i))
arr2.sort()
n=arr[0]

arr3=[]
#for i in range(0,6#if(i==arr2[i]):
        #arr3.append(i)
i=0
while(n!=0):
    if(arr2[i]==i):
        arr3.append(i)
    n=n-1
    i=i+1
    
    


arr4=[]
distance=0
for i in range(0,arr[0]):
    if(arr3[i]==True):
        if(arr3[i]==i):
            distance=0
            arr4.append(distance)
        elif(arr3[i]>i):
            distance=arr3[i]-i
            arr4.append(distance)
        else:
            distance=i-arr3[i]
            arr4.append(distance)

print(max(arr4))


            
        
    
    
        


