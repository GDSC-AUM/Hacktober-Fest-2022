# Python3 code to linearly search x in arr[].
# If x is present then return its location,
# otherwise return -1


def search(arr, N, x):

	for i in range(0, N):
		if (arr[i] == x):
			return i
	return -1


# Driver Code
arr = [2, 3, 4, 10, 40]
x = 10
N = len(arr)

	# Function call
result = search(arr, N, x)

