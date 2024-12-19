#ifndef BSTREE_H
#define BSTREE_H

#include <ostream>
#include <stdexcept>
#include "BSNode.h"

using namespace std;
template <typename T>

class BSTree {
private:
	int nelem;
	BSNode<T>* root;
	BSNode<T>* search(BSNode<T>* n, T e); 
	BSNode<T>* insert(BSNode<T>* n, T e); 
	BSNode<T>* remove(BSNode<T>* n, T e); 
	T max(BSNode<T>* n) ;
public:
	BSTree() : nelem(0), root(nullptr) {}
	~BSTree() { delete_cascade(root);}
	T search(T e); 
	void insert(T e);
	void remove(T e);
	int size() const;
	T operator[](T e) const {return search(e);}
	friend std::ostream& operator<<(std::ostream &out, const BSTree<T> &bst) {
	bst.print_inorder(out, bst.root);
	return out;
}
};
#endif
