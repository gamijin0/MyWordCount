//
// Created by chaos on 16-9-20.
//

#ifndef MYWORDCOUNT_BINTREE_H
#define MYWORDCOUNT_BINTREE_H

//二叉树节点
typedef struct WordBinNode{
    char *string;
    int count;
    struct WordBinTree* left;
    struct WordBinTree* right;
} WordBinNode;


//二叉树
typedef  struct WordBinTree{
    struct WordBinNode* root;
    int items;
} WordBinTree;


//创建二叉树
WordBinTree* buildTree(void);

//添加节点
int buildNode(char *string);


#endif //MYWORDCOUNT_BINTREE_H
