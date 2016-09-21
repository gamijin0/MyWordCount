//
// Created by chaos on 16-9-20.
//

#ifndef MYWORDCOUNT_BINTREE_H
#define MYWORDCOUNT_BINTREE_H

//二叉树节点
typedef struct WordBinNode{
    char *string;   //单词内容
    int count;  //该单词已记录的次数
    struct WordBinNode* left;
    struct WordBinNode* right;
} WordBinNode;


//二叉树
typedef  struct WordBinTree{

    struct WordBinNode* root;
    int items;

} WordBinTree;


//创建二叉树
WordBinTree* buildTree(void);

//为某棵二叉树添加节点
int addNode(WordBinTree* tree,char *string);

//打印二叉树
void printTree(WordBinNode* root);


#endif //MYWORDCOUNT_BINTREE_H
