graph={
    '0,0' : ['4,0','0,3'],
    '4,0' : ['4,3','0,0','1,3'],
    '0,3' : ['4,3','0,0','3,0'],
    '4,3' : [],
    '1,3' : ['1,0'],
    '4,3' : [],
    '3,0' : ['3,3'],
    '1,0' : ['0,1'],
    '0,1' : ['4,1'],
    '4,1' : ['2,3'],
    '3,3' : ['4,2'],
    '4,2' : ['0,2'],
    '0,2' : ['2,0']
}
visited=[]
queue=[]
def dfs(visited,graph,node):
        visited.append(node)
        queue.append(node)
        while queue:
            s=queue.pop(-1)
            print(s)
            if(s=='M' or s=='Q'):
                break;
            
            
            for nei in graph[s]:
                if nei not in visited:
                    visited.append(nei)
                    queue.append(nei)


dfs(visited,graph,'0,0')
