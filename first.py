# encoded_string = "\u7069\u636F\u4354\u467B\u3136\u5F62\u6974\u735F\u696E\u7374\u3334\u645F\u6F66\u5F38\u5F30\u3463\u3037\u3630\u647D"



# decoded_string = ''.join([chr((ord(encoded_string[i]) << 8) + ord(encoded_string[i + 1])) for i in range(0, len(encoded_string), 2)])

# print(decoded_string)

flag="灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弰摤捤㤷慽"

for i in range(0,len(flag)):
    print(chr(ord(flag[i])>>8), end="")
    print(chr(int(bin(ord(flag[i]))[9:], 2)),end="")
