import random
x=random.randrange(1,151,1)
y=0.0
discountAmount=0.0
amount=0.0
if (x<=9):
    y=x*25
    amount=y-discountAmount
elif(x<=19):
    y=x*25
    discountAmount=y*0.20
    amount=y-discountAmount
elif(x<=49):
    y=x*25
    discountAmount=y*0.30
    amount=y-discountAmount
elif(x<=99):
    y=x*25
    discountAmount=y*0.40
    amount=y-discountAmount
else:
    y=x*25
    discountAmount=y*0.50
    amount=y-discountAmount
print("Number of packages purchased: "+str(x))
print("Discount Amount: "+str(discountAmount))
print("Total Amount: "+str(amount))
