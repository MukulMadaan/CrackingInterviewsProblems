def printPat(n):
    #Code here
    for i in range(n):
        # print(i)
        for j in range (n, 0, -1):
            for k in range(n-i, 0, -1):
                print(j, end =" ")
        print("$", end ="")
