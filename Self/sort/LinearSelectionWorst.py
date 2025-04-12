def LinearSelect(A, p, r, i):
    # Step 1: find i-th smallest element and terminate
    if len(A) <= 5:
        return sorted(A)[i]
    
    # Step 2: Otherwise, divide array into 
    # n/5 groups that each has 5 elements..
    sublists = [A[i:i+5] for i in range(0, len(A), 5)]

    # Step 3: Sort within each group 
    # and select the median element..
    for sublist in sublists:
        sublist.sort()
    medians = [sublist[len(sublist) // 2] for sublist in sublists]
    
    # Step 4: Find the median of medians recursively
    # until we have single median..
    mom = LinearSelect(medians, 0, len(medians)-1, len(medians) // 2) # mom: Median of Medians; MEDIAN

    # Step 5: Use MEDIAN(mom) as pivot
    # and partition..
    partSmall = [x for x in A if x < mom]
    partLarge = [x for x in A if x > mom]

    print('partSmall: ', partSmall)
    print('partLarge: ', partLarge)

myList = [0, 7, 8, 293, 10, 37, 75, 772]
LinearSelect(myList, 0, len(myList), len(myList) // 2)