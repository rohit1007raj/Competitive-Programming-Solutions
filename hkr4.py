def checkIsKaprekar( num ):
    string_num = str(num**2)
    if num == int('0'+string_num[:len(string_num)//2]) + int(string_num[len(string_num)//2:]):
        return True

kaprekars=[]
for i in range(int(input()),int(input())+1):
    if(checkIsKaprekar(i) == True):
        kaprekars.append(str(i))
 
print (' '.join(kaprekars))
if(kaprekars==[]):
    print("INVALID RANGE")
