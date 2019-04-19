x=input().split()
arr=[]
for i in x:
    arr.append(int(i))

p=arr[0]  #ACTuAL PRICE
d=arr[1]   #DIfference price
m=arr[2]   #leAST vALUE
s=arr[3]      #Money in wallet
mainarr=[]
count=0

while(s>=p):
    s=s-p
    count=count+1
    p=p-d
    if(p<m):
        p=m

print(count)
     
     


        
        
    
    
