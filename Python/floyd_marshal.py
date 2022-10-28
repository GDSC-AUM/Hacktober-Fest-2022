# Python3 Program for Floyd Warshall Algorithm

# Number of vertices in the graph
V = 4

INF = 99999




def floydWarshall(graph):

	dist = list(map(lambda i: list(map(lambda j: j, i)), graph))
	for k in range(V):

		# pick all vertices as source one by one
		for i in range(V):
			for j in range(V):
				dist[i][j] = min(dist[i][j],
								dist[i][k] + dist[k][j]
								)
	printSolution(dist)


# A utility function to print the solution
def printSolution(dist):
	print("Following matrix shows the shortest distances\
between every pair of vertices")
	for i in range(V):
		for j in range(V):
			if(dist[i][j] == INF):
				print("%7s" % ("INF"), end=" ")
			else:
				print("%7d\t" % (dist[i][j]), end=' ')
			if j == V-1:
				print()


# Driver's code
if __name__ == "__main__":
graph = [[0, 5, INF, 10],
		[INF, 0, 3, INF],
		[INF, INF, 0, 1],
		[INF, INF, INF, 0]
		]
# Function call
floydWarshall(graph)
