#!usr/bin/python3

def weight_average(my_list=[]):
    if my_list and len(my_list):
        x = 0
        y = 0
        for qup in my_list:
            x += (qup[0] * qup[1])
            y += (qup[1])
        return (x/y)
    return 0
