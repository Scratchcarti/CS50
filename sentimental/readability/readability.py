def let_count(string):

    lcount = 0
    for character in string:
        if character.isalpha():
            lcount += 1

    return lcount




def word_count(string):

    wcount = string.count(" ")
    return wcount


def sent_count(string):

    scount = string.count(".","!","?")
    return scount

def main():

    string = input("Enter string")

    L = let_count(string)
    W = word_count(string)
    S = sent_count(string)

    print(f"{L,W,S}")

main()






