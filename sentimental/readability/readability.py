def let_count(string):

    lcount = 0
    for character in string:
        if character.isalpha():
            lcount += 1

    return lcount




def word_count(string):


    wcount = string.count(" ")
    wcount += 1
    return wcount


def sent_count(string):

    scount1 = string.count(".")
    scount2 = string.count("?")
    scount3 = string.count("!")
    scount = scount1 + scount2 + scount3
    return scount

def main():

    string = input("Enter string:  ")

    L = let_count(string)
    W = word_count(string)
    S = sent_count(string)

    
main()






