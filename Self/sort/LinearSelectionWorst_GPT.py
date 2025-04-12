# Helper function to find the median of a list
def find_median(lst):
    lst.sort()
    return lst[len(lst) // 2]

# Partition the list around the pivot
def partition(lst, pivot):
    low = [x for x in lst if x < pivot]
    high = [x for x in lst if x > pivot]
    return low, [x for x in lst if x == pivot], high

# Median of Medians algorithm
def median_of_medians(lst, k):
    # Base case: if the list has 5 or fewer elements, find the k-th smallest element directly
    if len(lst) <= 5:
        lst.sort()
        return lst[k]
    
    # Step 1: Divide the list into sublists of 5 elements and find the median of each sublist
    sublists = [lst[i:i+5] for i in range(0, len(lst), 5)]
    medians = [find_median(sublist) for sublist in sublists]
    
    # Step 2: Recursively find the median of the medians
    pivot = median_of_medians(medians, len(medians) // 2)
    
    # Step 3: Partition the list into three parts: elements smaller than, equal to, and greater than the pivot
    low, equal, high = partition(lst, pivot)
    
    # Step 4: Determine which part contains the k-th smallest element
    if k < len(low):
        return median_of_medians(low, k)
    elif k < len(low) + len(equal):
        return pivot  # The pivot is the k-th smallest element
    else:
        return median_of_medians(high, k - len(low) - len(equal))