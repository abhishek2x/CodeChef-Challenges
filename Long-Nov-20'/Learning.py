print("Hello")
name = input("What is your name? ")
if name.upper() == "AV" or name.upper() == "AABHAS VERMA" or name.upper() == "AABHAS":
    print("Welcome back sir, let's begin the testing.")
elif name.upper() == "ABHISHEK" or name.upper() == "ABHISHEK SRIVASTAV":
    print("Hey senior, thanks for helping. Let's begin the testing and find some errors")
elif name.upper() == "PREM" or name.upper() == "PREM SAGAR" or name.upper() == "PS":
    print("Hi Mr.Sagar, welcome to the first program created by AV.")
elif name.upper() == "CHIRAG" or name.upper() == "CHIRAG SHARMA":
    print("Welcome footballer")
elif name.upper() == "ADITI" or name.upper() == "ADITI VERMA":
    print("Welcome Panda to the program")
elif name.upper() == "AYUSH" or name.upper() == "AYUSH VAIDYA":
    print(f"Welcome {name}, let's begin testing of the code ")
elif name.upper() == "PRAKHYAT" or "PRAKHYAT SRIVASTAVA":
    print(f"Welcome Godlessnit, let's begin the testing")
elif name.upper() == "ANUNHYA":
    print(f"Hi {name}, let's begin the testing and find some errors")
else:
    print("Welcome to the program ", name)
print("")
print("We are going to calculate sum of two numbers first")
print("The number should be an integer")
x = input("first value: ")
y = input("second value: ")
su = int(x) + int(y)
print("Sum of the numbers your provided is " + str(su))
print("")
print("Now you can enter decimal values too")
x = input("Enter first value: ")
y = input("Enter second value: ")
su = float(x) + float(y)
print('Sum of the numbers you provided is "' + str(su))
print("")
print("Now let's try convert some values")
print("Currently I can convert following units (W)eight & (T)emperautre")
unit = ""
while unit.upper() != "W" or unit.upper() != "T":
    unit = input("What do you want to convert? ")
    if unit.upper() == "T":
        print("I can only convert units like (C)elsius, (F)arenheit and (K)elvin")
        a = input("Enter the value of temperature ")
        q = ""
        while q.upper() == "C" or q.upper() == "CELSIUS" or q.upper() == "F" or q.upper() == "FAHRENHEIT" or q.upper() \
                ==\
                "K" or q.upper() == "KELVIN":
            q = input("What's the unit of the value? ")
            if q.upper() == "C":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "F":
                    converted = (((int(a) * 9) / 5) + 32)
                    print("The temperature in (F)arenheit is " + str(converted))
                if w.upper() == "K":
                    converted = int(a) + 273.15
                    print("The temperature in (K)elvin is " + str(converted))
            elif q.upper() == "F":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "C":
                    converted = ((int(a) - 32) * 5) / 9
                    print("The temperature in (C)elsius is " + str(converted))
                if w.upper() == "K":
                    converted = (((int(a) - 32) * 5) / 9) + 273.15
                    print("The temperature in (K)elvin is " + str(converted))
            elif q.upper() == "K":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "C":
                    converted = int(a) - 273.15
                    print("The temperature in (C)elsius is " + str(converted))
                if w.upper() == "F":
                    converted = (((int(a) - 273.15) * 9) / 5) + 32
                    print("The temperature in (F)arenheit is " + str(converted))
            elif q.upper() == "C" or q.upper() == "F" or q.upper() == "K":
                break
            else:
                print("Please input proper annotation of unit")
                print(" Annotation for (C)elsius is 'C', (F)ahrenheit is 'F' and (K)elvin is 'K'")
    elif unit.upper() == "W":
        print("As of now i can convert your weight into (K)g, (G), (L)bs and (N)ewtons ")
        g = input("Do you really wanna embarress yourself in different units too?")
        if g.upper() == "NO":
            print("That's a good choice according to me")
            a = input("So let me learn about your weight")
            b = input("What's the unit?? ")
            if b.upper() == "K":
                print("Ohk, jokes aside, in which unit want yourself to be embaressed in? ;) ")
                e = input("Now tell me which one? ")
                if e.upper() == "G":
                    converted = int(a) * 1000
                    print("So your weight in (G)rams is " + str(converted), ".")
                elif e.upper() == "L":
                    converted = int(a) * 2.20462
                    print("So your weight in (L)bs is " + str(converted), ".")
                elif e.upper() == "N":
                    converted = int(a) * 9.81
                    print(
                        "Other than in scientific only a stupid person would weight in newtons. Not judging. Your "
                        "provided value of weight in (N)ewtons is" + str(
                            converted))
            if b.upper() == "G":
                e = input("Which one you want me convert me it into?")
                if e.upper() == "K":
                    converted = int(a) / 1000
                    print("Your converted weight is " + str(converted))
                elif e.upper() == "L":
                    converted = int(a) / 454
                    print("Your weight in America will be " + str(converted))
                elif e.upper() == "N":
                    converted = int(a) * 0.009807
                    print("Your provided weight in newtons will be " + str(converted))
            if b.upper() == "L":
                e = input('Which unit you want me to convert it into? ')
                if e.upper() == "K":
                    converted = int(a) / 2.205
                    print(f"Your provided weight in (L)bs is {converted}")
                elif e.upper() == "G":
                    converted = int(a) * 454
                    print(f"Your provided weight in (G)rams is {converted}")
                elif e.upper() == "N":
                    converted = int(a) * 4.4482
                    print(f"Your provided weight in (N)ewtons is {converted} ")
            if b.upper() == "N":
                e = input("Which unit you want me to convert it into? ")
                if e.upper() == "K":
                    converted = int(a) * 0.1019716213
                    print(f"Your converted value in (K)g is {converted}")
                elif e.upper() == "G":
                    converted = int(a) * 101.9716213
                    print(f"Your converted value is {converted}")
                elif e.upper() == "L":
                    converted = int(a) / 4.4482
                    print(f"Your converted value in (L)bs is {converted}")
        if g.upper() == "YES":
            a = input("So let me learn about your weight")
            b = input("What's the unit?? ")
            if b.upper() == "K":
                print("Ohk, jokes aside, in which unit want yourself to be embaressed in? ;) ")
                e = input("Now tell me which one? ")
                if e.upper() == "G":
                    converted = int(a) * 1000
                    print("So your weight in (G)rams is " + str(converted), ".")
                elif e.upper() == "L":
                    converted = int(a) * 2.20462
                    print("So your weight in (L)bs is " + str(converted), ".")
                elif e.upper() == "N":
                    converted = int(a) * 9.81
                    print(
                        "Other than in scientific only a stupid person would weight in newtons. Not judging. Your "
                        "provided value of weight in (N)ewtons is" + str(
                            converted))
            if b.upper() == "G":
                e = input("Which one you want me convert me it into?")
                if e.upper() == "K":
                    converted = int(a) / 1000
                    print("Your converted weight is " + str(converted))
                elif e.upper() == "L":
                    converted = int(a) / 454
                    print("Your weight in America will be " + str(converted))
                elif e.upper() == "N":
                    converted = int(a) * 0.009807
                    print("Your provided weight in newtons will be " + str(converted))
            if b.upper() == "L":
                e = input('Which unit you want me to convert it into? ')
                if e.upper() == "K":
                    converted = int(a) / 2.205
                    print(f"Your provided weight in (L)bs is {converted}")
                elif e.upper() == "G":
                    converted = int(a) * 454
                    print(f"Your provided weight in (G)rams is {converted}")
                elif e.upper() == "N":
                    converted = int(a) * 4.4482
                    print(f"Your provided weight in (N)ewtons is {converted} ")
            if b.upper() == "N":
                e = input("Which unit you want me to convert it into? ")
                if e.upper() == "K":
                    converted = int(a) * 0.1019716213
                    print(f"Your converted value in (K)g is {converted}")
                elif e.upper() == "G":
                    converted = int(a) * 101.9716213
                    print(f"Your converted value is {converted}")
                elif e.upper() == "L":
                    converted = int(a) / 4.4482
                    print(f"Your converted value in (L)bs is {converted}")
    elif unit.upper() == "W" or unit.upper() == "T":
        break
    elif unit.upper() == "I DON'T WANNA GO AHEAD" or unit.upper() == "I WANT TO QUIT" or unit.upper() == "QUIT":
        print("Program has ended")
        print(f"Have a nice day ahead {name}")
        break
    else:
        print("Please input proper annotations provided. ")
        print("Annotation for (W)weight is 'W' and for (T)emperature is 'T'.")
        print("If you want to quit type 'quit' ")
