graph={
    'A' : ['B','C'],
    'B' : ['D','E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}
visited=[]
queue=[]
def bfs(visited,graph,node):
        visited.append(node)
        queue.append(node)
        while queue:
            s=queue.pop(0)
            print(s, end=" ")
            
            for nei in graph[s]:
                if nei not in visited:
                    visited.append(nei)
                    queue.append(nei)


bfs(visited,graph,'A')
