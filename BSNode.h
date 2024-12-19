#include<iostream>
#ifndef BSNODE_H
#define BSNODE_H
using namespace std;


template <typename T>
class BSNode{
	
	public:
	T elem;
	BSNode<T>* left;
	BSNode<T>* right;
	
	BSNode(T elem, BSNode<T>* left=nullptr,BSNode<T>* right=nullptr){
		this->elem=elem;
		this->right=right;
		this->left=left;		
	}
	
	friend std::ostream& operator<<(ostream &out, const BSNode<T> &bsn){
		out << bsn.elem;
		return out;
	}


	

};
#endif
