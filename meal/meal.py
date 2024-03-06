def main():
    time = input("What time is it? ")

    fuck = convert(time)

    if 7.0 <= fuck <= 8.0:
        print("breakfast time")
    elif (12.0 <= fuck <= 13.0):
        print("lunch time")
    elif 18.0 <= fuck <= 19.0:
        print("dinner time")
    else:
        pass
def convert(time):
    hours, minutes = time.split(":")
    min = float(minutes)/60
    hr = float(hours)
    x = hr+min
    return x
if __name__ == "__main__":
    main()
