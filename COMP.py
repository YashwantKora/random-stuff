import datetime
import random


start_time1 = datetime.datetime.now()
def BubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array)-i -1):
            if array[j] > array[j+1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp

data = [random.randint(1, 10000) for _ in range(1000)]
BubbleSort(data)
end_time1 = datetime.datetime.now()


start_time2 = datetime.datetime.now()
def SelectionSort(array):
    n = len(array)
    for i in range(n):
        min = i
        for j in range(i + 1, n):
            if array[j] < array[min]:
                min = j
        temp = array[min]
        array[min] = array[i]
        array[i] = temp
data = [random.randint(1, 10000) for _ in range(1000)]
print(SelectionSort(data))
end_time2 = datetime.datetime.now()

print("Finised in:", end_time1 - start_time1)
print("Finised in:", end_time2 - start_time2)