def recursive(n):
    if(n>1):
        recursive(n-1)
        print(n)
    else:
        print(n)
recursive(5)
        
