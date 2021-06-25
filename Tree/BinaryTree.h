﻿typedef struct binarytree
{
	int data;
	struct binarytree * parent;
	struct binarytree * leftchild;
	struct binarytree * rightchild;
}BinaryTree;

BinaryTree * __CreateBinaryTree();
BinaryTree * CreateBinaryTree(int need);

void InsertBinaryTree(BinaryTree * pTree, int target ,int node);
void DeleteBinaryTree(BinaryTree * pTree, int target);
void DeleteBinaryTreeAll(BinaryTree * pTree);

int GetBinaryTreeData(BinaryTree * pTree, int target);
void PrintBinaryTreeAll(BinaryTree * pTree); 