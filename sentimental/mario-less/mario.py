from cs50 import get_int

def inp():
    height = get_int("Height: ")
    main(height)

def main(n):

    if n > 8 or n < 1 :
        inp()

    else :

        for i in range(0,n,1):
            print(f"{i}")



main()

