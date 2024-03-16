#recursive program to accept a number between 1 and 10 and print it

def get_number():
    val1 = input('Enter a number: ')
    try:
        val1 = int(val1)
        while val1 > 1 and val1 < 10:
            return val1

    except ValueError:
        get_number()

print(get_number())
