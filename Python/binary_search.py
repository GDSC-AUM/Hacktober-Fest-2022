def bisearch(arr, low, high, x):

	# Check base case
	if high >= low:

		mid = (high + low) // 2

		# If element is present at the middle itself
		if arr[mid] == x:
			return mid
		elif arr[mid] > x:
			return bisearch(arr, low, mid - 1, x)

	
		else:
			return bisearch(arr, mid + 1, high, x)

	else:
		# Element is not present in the array
		return -1
arr = [ 22, 27, 34, 40, 55, 67,89]
x = 55

# Function call
result = bisearch(arr, 0, len(arr)-1, x)

if result != -1:
	print("Element is present at index", str(result))
else:
	print("Element is not present in array")

