from random import randint
from statistics import mean


arr = []
tmp_arr=[]
   


def generate_arr():
    length = randint(0,1000)
    for i in range(length):
        num = randint(0,1000)
        arr.append(num)

    return arr



arr = generate_arr()

for i in range(len(arr)):
    i = randint(1,len(arr)-2)
    if arr[i] in tmp_arr:
        pass

    else:
        tmp_arr.append(arr[i])

print "MAIN ARR  MEAN is : " + str(mean(arr)) + "LENGTH " + str(len(arr))
print "SAMPLED ARR  MEAN is : " + str(mean(tmp_arr)) + "LENGTH " + str(len(tmp_arr))