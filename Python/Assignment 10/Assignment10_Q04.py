def raised(base,exponent):
    if exponent==1:
        return base
    else:
        return base*raised(base,exponent-1)
print(raised(2,4))
