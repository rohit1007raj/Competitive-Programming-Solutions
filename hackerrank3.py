def kaprekarNumbers(x):
    y=x**2
    count_digits=0
    count_digits1=0
    #while(x):   #digits of actual number
        count_digits1=count_digits1+1
        x=x//10
    print(count_digits1)
    #while(y):   #digits of squared number
        count_digits=count_digits+1
        y=y//10
    print(count_digits)
    a=str(y)
    part1=a[count_digits1:]

kaprekarNumbers(25)
    

