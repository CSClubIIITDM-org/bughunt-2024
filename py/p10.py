def listmaker(r, g, b, list1=None):
    if list1 is None:
        list1 = []
    list1.append(r)
    list1.append(g)
    list1.append(b)
    return list1

pixel1 = listmaker(23, 78, 34)
pixel2 = listmaker(210, 56, 67)
pixel3 = listmaker(23, 78, 248)

r = (int(pixel1[0]) + int(pixel2[0]) + int(pixel3[0])) / 3
g = (int(pixel1[1]) + int(pixel2[1]) + int(pixel3[1])) / 3
b = (int(pixel1[2]) + int(pixel2[2]) + int(pixel3[2])) / 3

rgb = [r, g, b]
print("Average RGB values of the pixels are", rgb)
