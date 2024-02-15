from cs50 import get_float


def get_money():

    money = -1

    while (money < 0):

        money = get_float("Change Owed ")

    return (money*100)


def quaters(money):

    money = int(money/25)
    return money


def dimes(money):

    money = int(money/10)
    return money


def nickels(money):

    money = int(money/5)
    return money


def pennies(money):
    money = int(money/1)
    return money


def main():

    money = get_money()

    quater = quaters(money)

    money = money - (quater * 25)

    dime = dimes(money)

    money = money - (dime * 10)

    nickel = nickels(money)

    money = money - (nickel * 5)

    pennie = pennies(money)

    money = money - (pennie * 1)

    coins = quater + dime + nickel + pennie

    print(f"{coins}")


main()
