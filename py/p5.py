#recursive program to accept a number between 1 and 10 and print it

def get_number():
    val1 = input('Enter a number: ')
    try:
        val1 = int(val1)
        while val1 < 1 or val1 > 10:
            val1 = input('Enter a number: ')
            val1 = int(val1)

        str_to_print = '{:.1f}'.format(val1)
        return str_to_print

    except ValueError:
        get_number()

print(get_number())
#b'Q\x8e\xee\x84S\xba\x13F\x82P~\x1c\xef\xc0\x02\xe6\x8a\xdb\xfeR\x03x\x1a\xcc\xb8\xb7\xfb\xd3z\xe7\xfb\xde\xd1v\xb0\xff(h\x97\x18\x19<\xabkqxw\x98;\xe3\x90 HI\xfb}\xe8\xc5\xe2v%\xce\x8cm\xeb~\xc5e\x1a~"\x18\xe4\xe4\x94\xb0OS8\xa0\x1a\xa3\t\xc1k\xb97\xd8s\xe9<\xbcL/\xac\xad\xe3\xb7d\xdcR@\x1d<M\xf5\xde+F\x07b3\xcdb\x1eC2&\xfc\xff\x93X o\xcf?Vc'

b'gAAAAABl9TRCwKmRgyB5bpihwRW8qcTFjsBDBarWGaPaHORGUyfGqieFG51Jee2np6ZKMPD9lF3YfO5o31F1lcv6hBLYSCNiBQyQZR3lXyBSC46vejP1WLRPDeA066lcn7gy2T0eHu21W4SJKe2xPW3MNKou5DhpBKeilmlNcP_pX1ELOJbOR5eDHXoBVf_EG0c62RW1pKoIUk1O2o-s6j6S9HKzqimjn8HxFAijGcBOThv5nHbCNSg='