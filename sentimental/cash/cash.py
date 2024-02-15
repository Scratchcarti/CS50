from cs50 import get_float

def get_money():

    money = -1

    while(money < 0):

        money = get_float("Change Owed ")

    return money*100

def quaters(money):

    money = money/25
    return money

def dimes(money):

    money = money/10
    return money

def nickels(money):

    money = money/5
    return money

def pennies(money):
    money = money/1
    return money


def main():

    money = get_money()

    quaters = quaters(money)

    money = money - quaters * 25

    dimes = dimes(money)

    money = money - dimes * 10

    nickels = nickels(money)

    money = money - nickels * 5

    pennies = pennies(money)

    money = money - pennis * 1

    coins = quaters + dimes + nickels + pennies

    print("f{coins}")


main()




