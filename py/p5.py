#recursive program to accept a number between 1 and 10 and print it

def get_number():
    val1 = input('Enter a number: ')
    try:
        val1 = int(val1)
        while val1 < 1 or val1 > 10:
            val1 = input('Enter a number: ')
            val1 = int(val1)

        return val1

    except ValueError:
        return get_number()

print(get_number())
