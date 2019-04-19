x=input().split(":")
hours=x[0]   #HOURS
minutes=x[1] #NINUTES
ss=x[2]

time=ss[2:]  #AM OR PM

seconds=ss[0:2]#SECONDS
 

if(time=="AM" and hours==12 and minutes=="00" and seconds=="00"):
    y="00:00:00"
    print(y)
    
    
if(time=="PM" and hours==12 and minutes=="00" and seconds=="00"):
    z="12:00:00"
    print(z)

if(time=="AM" and hours!="12"):
   
    k=hours+":"+minutes+":"+seconds
    print(k)
elif(time=="AM" and hours=="12"):
    g="00"+":"+minutes+":"+seconds
    print(g)

if(time=="PM" and hours!="12"):
    f=12+int(hours)
    w=str(f)
    l=w+":"+minutes+":"+seconds
    print(l)
elif(time=="PM" and hours=="12"):
     print(hours+":"+minutes+":"+seconds)



