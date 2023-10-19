def factorial(num):
    factorial = 1
    if num < 0:
        print("Factorial is not possible ")
    elif num==0:
        factorial=1
    else:
        for i in range(1,num+1):
            factorial = factorial*i
    return factorial