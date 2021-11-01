state = {}

state['Oradea'] = {'p': 'Nil', 'pc': 0}
state['Zerind'] = {'p': 'Oradea', 'pc': 71}
state['Arad'] = {'p': 'Zerind', 'pc': 75}
state['Timisoara'] = {'p': 'Arad', 'pc': 118}
state['Lugoj'] = {'p': 'Timisoara', 'pc': 111}
state['Mehadia'] = {'p': 'Lugoj', 'pc': 70}
state['Drobeta'] = {'p': 'Mehadia', 'pc': 75}
state['Cariova'] = {'p': 'Drobeta', 'pc': 120}
state['Sibiu'] = {'p': 'Arad', 'pc': 140}
state['Sibiu'] = {'p': 'Oradea', 'pc': 151}
state['Rimnicu'] = {'p': 'Sibiu', 'pc': 80}
state['Rimnicu'] = {'p': 'Cariova', 'pc': 146}
state['Pitesti'] = {'p': 'Rimnicu', 'pc': 97}
state['Pitesti'] = {'p': 'Cariova', 'pc': 138}
state['Fagaras'] = {'p': 'Sibiu', 'pc': 99}
state['Bucharest'] = {'p': 'Fagaras', 'pc': 211}
state['Bucharest'] = {'p': 'Pitesti', 'pc': 101}
state['Giurgiu'] = {'p': 'Bucharest', 'pc': 90}
state['Urziceni'] = {'p': 'Bucharest', 'pc': 85}
state['Hirsova'] = {'p': 'Urziceni', 'pc': 98}
state['Eforie'] = {'p': 'Hirsova', 'pc': 86}
state['Vaslui'] = {'p': 'Urziceni', 'pc': 142}
state['Lasi'] = {'p': 'Vaslui', 'pc': 92}
state['Neamt'] = {'p': 'Lasi', 'pc': 87}

startingNode = 'Arad'
goalNode = 'Bucharest'
currentNode = goalNode

path = []

while True:
    if len(path) == 10:
        path.append(currentNode)
    else:
        path.insert(0,currentNode)
        
    if currentNode == startingNode:
        break
    else:
        currentNode = state[currentNode]['p']
        
print(path)
