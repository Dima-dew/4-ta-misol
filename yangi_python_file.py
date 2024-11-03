son  = int(input("SON:  "))
t  = 0
for   i  in  range(2, son):
    if  (son  %  i  ==  0):
        t  +=  1 

if  (t ==  0):
    print("Tub son")
else :
    print("Tub  emas")