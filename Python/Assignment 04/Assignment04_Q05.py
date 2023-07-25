#I had an idea for this that would have taken at least 52 lines, so I thought,
#there must be a more effecient way. I googled the best way to count a character in
#a string and found "collections", a module that has within it specialized container
#datatypes, more specialized than dict, list, set, and tuple
import collections
userInput=input("Enter a string: ")
values1=collections.Counter(userInput).most_common(1)[0]
values2=str(values1)
comChar=values2[2:3]
print("The charcter that appears most frequently in the string is: "+comChar.upper())
