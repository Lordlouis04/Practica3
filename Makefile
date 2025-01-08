bin/testTableEntry: testTableEntry.cpp TableEntry.h
	mkdir -p bin
	g++ -o bin/testTableEntry testTableEntry.cpp
bin/testHashtable: testHashTable.cpp HashTable.h 
	mkdir -p bin
	g++ -o bin/testHashTable testHashTable.cpp
bin/testBSTree: BSTree.h BSNode.h testBSTree.cpp
	mkdir -p bin
	g++ -o bin/testBSTree testBSTree.cpp BSNode.h
bin/testBSTreeDict: testBSTreeDict.cpp Dict.h BSTree.h BSTreeDict.h BSNode.h TableEntry.h  
	g++ -o bin/testBSTreeDict testBSTreeDict.cpp BSTreeDict.h TableEntry.h BSTree.h
clean:
	rm -r *.o *.gch bin


