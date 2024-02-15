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

    string = input("Text: ")

    L = let_count(string)
    W = word_count(string)
    S = sent_count(string)

    index = round ((5.88 * ((L)/(W))) - (29.6 * ((S)/(W))) - (15.8))

    if (index > 16):

        print(f"Grade 16+")

    elif (index < 1):

        print(f"Before Grade 1")

    else:

        print(f"Grade {index}")



main()






