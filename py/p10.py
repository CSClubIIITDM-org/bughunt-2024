#Finding Average RGB values using the listmaker fuction to generate list of rgb values for a pixel

def listmaker(r,g,b,list1=[]):
    list1=[]#b'\x17\xec\xcceY\xf3:\xaf6\x88qp\xc7l\xe3R\xc7\x1f9p\xb8\xb1\x1cL\xd5>\xc9{\x0f8\x16\x1fA\x83\xff\xe5_\xed}\xbd\xd5\x96\xe6T(5\xa4\x90Z\xee\x83\xdczbA\x7f\xbeK\xd8\x15\xe2\xf3"vgphS\xbb&W\xd1|\x87\xc9:\x9cF\x89M\xf5MP<H\xcc\x8dj\xe4\xc3\x8c*i\xfcq\xb8\xf6\x94\n\xf7e[\xf4\xc7\x18\x12\xe7\xc4\xec\xfea.\x88\xcerx\xac9\xc9C\x98\x05\xc7\xcfi\t\x96G'b'gAAAAABl9T1jk6dR8FmFsAuDVdaIPORFx7OddeBb9soYf074fmASF35ou_NY5b8hXwSHfUmzAu5WOysfIb06GbG9_FI631TpYvV0m-CLrKW_RTk-yEmYgOkf-zFg_9ma1dhpqa3sfwDWHzW6RmZeqbI8O97sO9DZUx6_RuQr-Rt8LvlcQSgmY3j-0AQjsAo2oEFusIoAosNJTQ2t0FckxUSZ5Py1_Z31c5p3somBXHQUt41-fXA-tANVR_EvYJDw8G1_4nJo--3XPHQsvzo6bIfXxA3gGK2QdBN8-EmJ5TlcbY_C9s1PCU3JpUEC9KEy3oOUe4k-Wh5iPQf-19H_KFAqG4ur582eJpL0iEBh1y8CjiRpphYUZDdQvmPw_rip05owd3NG1jPq'
    list1.append(r)
    list1.append(g)
    list1.append(b)
    return list1

pixel1=listmaker(23,78,34)
pixel2=listmaker(210,56,67)
pixel3=listmaker(23,78,248)
r=(pixel1[0]+pixel2[0]+pixel3[0])/3
g=(pixel1[1]+pixel2[1]+pixel3[1])/3
b=(pixel1[2]+pixel2[2]+pixel3[2])/3
rgb=[r,g,b]
print("Average RGB values of the pixels are",rgb)
