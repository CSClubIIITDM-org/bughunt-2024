def listmaker(r, g, b):
    return [r, g, b]

pixel1 = listmaker(23, 78, 34)
pixel2 = listmaker(210, 56, 67)
pixel3 = listmaker(23, 78, 248)

r = (pixel1[0] + pixel2[0] + pixel3[0]) / 3
g = (pixel1[1] + pixel2[1] + pixel3[1]) / 3
b = (pixel1[2] + pixel2[2] + pixel3[2]) / 3

rgb = [r, g, b]
print("Average RGB values of the pixels are", rgb)
