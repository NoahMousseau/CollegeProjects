print("first nested loop")
print("")
for i in range(1,9):
    for j in range(1,i):
        print("*", end="")
    print("")
print("")
print("second nested loop")
print("")
for i in range(7,0,-1):
    for j in range(1,i+1):
        print("*", end="")
    print("")
