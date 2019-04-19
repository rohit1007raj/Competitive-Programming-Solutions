testcase=int(input())
mainarr=[]
while(testcase!=0):
    n=input().split()
    arr=[]
    for i in n:   
        arr.append(int(i))

    n=arr[0]  #Total money           
    c=arr[1]  #Cost of bars
    m=arr[2]  #rappers required to untern
    count=0
    wrapper=0
    while(n!=0 or n>c):
        n=n-c
        count=count+1
        wrapper=wrapper+1
        if(wrapper>=m):
            count=count+1
            wrapper=wrapper-m   
            wrapper=wrapper+1
            if(wrapper<m):
                break
        if(n==0 or n<c):
            break
        

    mainarr.append(count)
    testcase=testcase-1

for i in range(0,len(mainarr)):
    print(mainarr[i])
        
    
  

     
    

      
