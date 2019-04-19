words = {1: "one", 2: "two",   3: "three", 4: "four",  5: "five",
         6: "six", 7: "seven", 8: "eight", 9: "nine", 10: "ten",
         11: "eleven",   12: "twelve",  13: "thirteen",   14: "fourteen",
         15: "fifteen",  16: "sixteen", 17: "seventeen",  18: "eighteen",
         19: "nineteen", 20: "twenty",  21: "twenty one", 22: "twenty two",
         23: "twenty three", 24: "twenty four",  25: "twenty five",
         26: "twenty six",   27: "twenty seven", 28: "twenty eight",
         29: "twenty nine"}
h=input()
m=input()
h1=int(h)
m1=int(m)
if(m=="00"):
    print(words[h1],"o' clock")
elif(m=="30"):
    print("half past",words[h1])
if(m1<30 and m1!=0):

    if(m=="1"):
        print("one minute past",words[h1])
    elif(m=="15"):
        print("quarter past",words[h1])
    else:
        print(words[m1],"minutes past",words[h1])

if(m1>30):
    m1=60-m1
    h1=h1+1
    if(m1==15):
        print("quarter to",words[h1])
    else:
        print(words[m1],"minutes to",words[h1])


        
    
