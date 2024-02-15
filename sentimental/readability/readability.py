def let_count(string):

    lcount = 0
    for character in string:
        if character.isalpha():
            lcount += 1

    return lcount




def word_cont(string):

    wcount = string.count(" ")
    return wcount


def sent_count(string):

    scount = string.count(".")






