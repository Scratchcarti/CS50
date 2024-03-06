def main():
    time = input("What time is it? ")
    hours, minutes = time.split(":")
    min = float(minutes)
    hr = float(hours)
    fuck = convert(min, hr)
    if 7.0 <= fuck <= 8.0:
        print("breakfast time")
    elif 12.0 <= fuck <= 13.0:
        print("lunch time")
    elif 18.0 <= fuck <= 19.0:
        print("dinner time")
    else:
        pass
def convert(min, hr):
    min = min/60
    x = hr+min
    return x
if __name__ == "__main__":
    main()
