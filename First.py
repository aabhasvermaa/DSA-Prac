# GREETINGS
print("Hello")
name = input("What is your name? ")
# SPECIFIC RESPONSE FOR PARTICIPANTS
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
    print("Welcome ProFfessOrOP, let's begin testing of the code ")
elif name.upper() == "PRAKHYAT" or name.upper() == "PRAKHYAT SRIVASTAVA":
    print("Welcome Godlessnit, let's begin the testing")
elif name.upper() == "ANUHYA" or name.upper() == 'ANUHYA DEVARAKONDA':
    print(f"Hi {name.title()}, let's begin some fun coding")
elif name.upper() == "SOUMYAA" or name.upper() == "SOUMYAA MEHTA":
    print(f"Hey Blogger, welcome to my first code. Hope you'd like and better if you'll find mistakes")
# GENERAL RESPONSE
else:
    print(f"Welcome to the program, {name.title()}")
print("")
# NORMAL MATHEMATICS
print("We are going to calculate sum of two numbers first")
print("The number should be an integer")
x = input("first value: ")
y = input("second value: ")
su = int(x) + int(y)
print("Sum of the numbers your provided is " + str(su))
print("")
# FLOAT VALUES
print("Now you can enter decimal values too")
x = input("Enter first value: ")
y = input("Enter second value: ")
su = float(x) + float(y)
print('Sum of the numbers you provided is "' + str(su))
print("")
# UNIT CONVERSIONS
print("Now let's try convert some values")
print("Currently I can convert following units (W)eight & (T)emperautre")
print("Annotation for (W)weight is 'W' and for (T)emperature is 'T'.")
print("If you want to quit type 'quit' ")
unit = ""
while unit.upper() != "W" or unit.upper() != "T":
    unit = input("What do you want to convert? ")
    # TEMPERATURE CONVERSION
    if unit.upper() == "T":
        print("I can only convert units like (C)elsius, (F)arenheit and (K)elvin")
        a = input("Enter the value of temperature ")
        q = ""
        while q.upper() != "C" or q.upper() != "CELSIUS" or q.upper() != "F" or q.upper() != "FAHRENHEIT" or q.upper() \
                != "K" or q.upper() != "KELVIN":
            q = input("What's the unit of the value? ")
            # FROM CELSIUS
            if q.upper() == "C":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "F":
                    converted = (((float(a) * 9) / 5) + 32)
                    print("The temperature in (F)arenheit is " + str(converted))
                if w.upper() == "K":
                    converted = float(a) + 273.15
                    print("The temperature in (K)elvin is " + str(converted))
            # FROM FAHRENHEIT
            elif q.upper() == "F":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "C":
                    converted = ((float(a) - 32) * 5) / 9
                    print("The temperature in (C)elsius is " + str(converted))
                if w.upper() == "K":
                    converted = (((float(a) - 32) * 5) / 9) + 273.15
                    print("The temperature in (K)elvin is " + str(converted))
            # FROM KELVIN
            elif q.upper() == "K":
                w = input("Which unit you want me to convert it into? ")
                if w.upper() == "C":
                    converted = float(a) - 273.15
                    print("The temperature in (C)elsius is " + str(converted))
                if w.upper() == "F":
                    converted = (((float(a) - 273.15) * 9) / 5) + 32
                    print("The temperature in (F)arenheit is " + str(converted))
            elif q.upper() == "C" or q.upper() == "F" or q.upper() == "K":
                break
            else:
                print("Please input proper annotation of unit")
                print(" Annotation for (C)elsius is 'C', (F)ahrenheit is 'F' and (K)elvin is 'K'")
    # WEIGHT CONVERSION
    elif unit.upper() == "W":
        print("As of now i can convert provided weight into (K)g, (G), (L)bs and (N)ewtons ")
        a = input("So let me learn about your weight")
        b = ""
        while b.upper() != "K" or b.upper() != "G" or b.upper() != "L" or b.upper() != "N":
            b = input("What's the unit?? ")
            # FROM KILOGRAMS
            if b.upper() == "K":
                e = input("Now tell me which unit you want me to convert it into? ")
                if e.upper() == "G":
                    converted = float(a) * 1000
                    print("So your weight in (G)rams is " + str(converted), ".")
                elif e.upper() == "L":
                    converted = float(a) * 2.20462
                    print("So your weight in (L)bs is " + str(converted), ".")
                elif e.upper() == "N":
                    converted = float(a) * 9.81
                    print(
                        "Other than in scientific only a stupid person would weight in newtons. Not judging. \
                        Your provided value of weight in (N)ewtons is" + str(converted))
            # FROM GRAMS
            if b.upper() == "G":
                e = input("Which one you want me convert me it into?")
                if e.upper() == "K":
                    converted = float(a) / 1000
                    print("Your converted weight is " + str(converted))
                elif e.upper() == "L":
                    converted = float(a) / 454
                    print("Your weight in America will be " + str(converted))
                elif e.upper() == "N":
                    converted = float(a) * 0.009807
                    print("Your provided weight in newtons will be " + str(converted))
            # FROM POUNDS
            if b.upper() == "L":
                e = input('Which unit you want me to convert it into? ')
                if e.upper() == "K":
                    converted = float(a) / 2.205
                    print(f"Your provided weight in (L)bs is {converted}")
                elif e.upper() == "G":
                    converted = float(a) * 454
                    print(f"Your provided weight in (G)rams is {converted}")
                elif e.upper() == "N":
                    converted = float(a) * 4.4482
                    print(f"Your provided weight in (N)ewtons is {converted} ")
            # FROM NEWTONS
            if b.upper() == "N":
                e = input("Which unit you want me to convert it into? ")
                if e.upper() == "K":
                    converted = float(a) * 0.1019716213
                    print(f"Your converted value in (K)g is {converted}")
                elif e.upper() == "G":
                    converted = float(a) * 101.9716213
                    print(f"Your converted value is {converted}")
                elif e.upper() == "L":
                    converted = float(a) / 4.4482
                    print(f"Your converted value in (L)bs is {converted}")
            else:
                print("Please input proper annotaions")
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
