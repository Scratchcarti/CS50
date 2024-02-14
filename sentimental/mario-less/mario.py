from cs50 import get_int


def inp():
    height = get_int("Height: ")
    return height


def main():

    h = inp()

    while (h > 8 or h < 1):

        h = inp()

    for i in range(0, h, 1):

        for j in range(h-i-1, 0, -1):

            print(" ", end="")

        for k in range(0, i+1, 1):

            print("#", end="")

        print()


main()
