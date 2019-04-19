w=input().split()
x=[]
for i in w:
    x.append(int(i))

n=x[0]
testcases=x[1]

q=input().split()
mainarr=[]     #array including 8 elements
for i in q:
    mainarr.append(int(i))
mainarr2=[]
for i in range(0,testcases):
    e=input().split()
    
    for j in e:
        mainarr2.append(int(j))
    
        k=mainarr2[int(j)]   #1st element of range
        m=mainarr2[int(j+1)] #2nd element 
    

    for i in range(mainarr[k],mainarr[m]):
        mainarr3.append(int(i))
mainarr4=[]
a=min(mainarr3)
mainarr4.append(a)

print(mainarr4)

    
        
        

    
    
    
  
    
