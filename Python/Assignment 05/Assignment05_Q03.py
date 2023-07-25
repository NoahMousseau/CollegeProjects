dict={'a':15,'c':35,'b':10}
keyList=list(dict.keys())
valueList=list(dict.values())
print("Keys:", end=" ")
for key, value in dict.items():
    print(key, end=" ")
print(" ")
print("Values:", end=" ")
for key, value in dict.items():
    print(value, end=" ")
print(" ")
print("Key-Value Pairs")
for key, value in dict.items():
    print(key, value)
print("")
print("Key-Value pairs- sorted by key")
for key in sorted(dict.keys()):
    print(key, dict[key])
print("")
print("Key-Value pairs- sorted by value")
for value in sorted(dict.values()):
    print(list(dict.keys())[list(dict.values()).index(value)], value)
