if __name__ == '__main__':
    a = int(input())
    b = int(input())

    for i in range(3):
        if i == 0:
            print(a + b)
        elif i == 1:
            print(a - b)
        else:
            print(a * b)
