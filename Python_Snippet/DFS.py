# DFS - Depth-First Search
# https://en.wikipedia.org/wiki/Depth-first_search
'''DFS is an algorithm for traversing or searching tree or graph data structure.
The process of returning to the parent node is called backtracking.
advantages
Since it is only necessary to remember the nodes on the current path, the demand for storage space is relatively small.
If the target node is at a deep level, the solution can be solved quickly.
There is a possibility of falling deep into a harmless path.
Disadvantages
Therefore, in the actual case, it may be useful to search only to a predetermined depth and follow the following path if the target node is not found.
There is no guarantee that the solution obtained will be the shortest path.
This means that for a problem with multiple paths to the target, the depth-first search ends the search when it reaches the solution,
so the solution obtained at this time may not be optimal.'''
