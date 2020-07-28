def findSameName(name):
    for i in range(len(name)):
        for j in range(len(name)):
            if i != j and name[i] == name[j]:
                print(name[i])


name = ['Tom', 'Jerry', 'Mike', 'Tom']
print(findSameName(name))
name2 = ['Tom', 'Jerry', 'Mike', 'Tom', 'Mike']
print(findSameName(name2))
