n=int(input())

arr=[]
count=0
count1=0
for i in range(0,n):
    a=input()
    b=a.split()
    for i in range(len(b)):
        if(b[i]=="not"):
            arr.append("fancy Quote")
            break
    if(len(arr)==0 or arr[-1]!="fancy Quote"):
        arr.append("regularly quote")
    
        
        
    
        
            
            

    

print(arr)
print(len(arr))


        
