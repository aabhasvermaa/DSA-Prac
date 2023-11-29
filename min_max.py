def getMinMax(a, n):
    if n == 0:
        return -1, -1  # Handle the case of an empty array

    # Initialize min and max with the first element
    min_element = max_element = a[0]

    for i in range(1, n):
        if a[i] < min_element:
            min_element = a[i]
        elif a[i] > max_element:
            max_element = a[i]

    return min_element, max_element



def main():
    T = int(input())
    while (T>0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]

        product = getMinMax(a, n)
        print(product[0], end=" ")
        print(product[1])

        T-=1

if __name__ == "__main__":
    main()
