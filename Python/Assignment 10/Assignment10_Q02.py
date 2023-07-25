def multi(x,y):
   if x==0:
      return 0
   elif x==1:
      return y
   else:
      return y+multi(x-1,y)
print(multi(3,5))
