//
// Created by chaos on 16-9-20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binTree.h"

int addNode(WordBinTree *tree,char* string){
    if(string==NULL||strlen(string)==0){
        printf("string为空!\n");
    }
    if(tree==NULL){
        printf("tree未初始化,请调用buildTree构造一棵空的树\n");
    }
    if(tree->root==NULL){
        //若树上还没有node
        WordBinNode *newNode;
        if((newNode =malloc(sizeof(WordBinNode)))!=NULL){
            //内存中分配一个新的node
            newNode->count=0;
            newNode->left=NULL;
            newNode->right=NULL;
            if((newNode->string=(char*)malloc(((strlen(string) + 1)*sizeof(char)))) == NULL ) {
                printf("内存不足\n");
                return NULL;
            }
            memcpy(newNode->string,string,((strlen(string))* sizeof(char)));

            tree->root=newNode;//将新节点添加在树上
            printf("add a new node to Tree:[%s]\n",string);

        } else{
            printf("内存不足\n");
            exit(0);
        }
    } else{
        //树上已有node
        WordBinNode* point; //用于遍历tree
        WordBinNode* parent;//用于记录父节点
        int direction=0;    //用于记录新节点所在的位置是左还是右
        point = tree->root;
        while (point!=NULL){
            if((strcmp(string,point->string))==0){
                //若相等,则count+1
                point->count++;
                printf("node [%s] count++\n",string);
                break;
            }
            else{
                parent=point;
                if((strcmp(string,point->string))<0){
                    //偏小则加到左边子树上
                    direction=0;
                    point=point->left;
                } else{
                    //偏大则加到右边子树上
                    direction=1;
                    point=point->right;
                }
            }
        }
        if(point==NULL){
            //若point为空，说明树上还未有此单词，则创建新node
            //内存中分配一个新的node
            WordBinNode *newNode;
            if((newNode =malloc(sizeof(WordBinNode)))!=NULL){
                //内存中分配一个新的node
                newNode->count=0;
                newNode->left=NULL;
                newNode->right=NULL;
                if((newNode->string=(char*)malloc((strlen(string) + 1)*sizeof(char))) == NULL ) {
                    printf("内存不足\n");
                    return NULL;
                }
                memcpy(newNode->string,string,((strlen(string))* sizeof(char)));
                if(direction==0){
                    parent->left=newNode;
                } else{
                    parent->right=newNode;
                }
                printf("add a new node to Tree:[%s]\n",string);
                return 1;
            }
                else{
                printf("内存不足\n");
                exit(0);
            }
    }}

    tree->items++;  //总个数加1
    return 0;

}


WordBinTree* buildTree(void){
    WordBinTree* tree=NULL;
    if((tree=malloc(sizeof(WordBinTree)))!= NULL){
        tree->root=NULL;
        tree->items=0;
        printf("a new Tree be created.\n");
    } else{
        printf("内存不足\n");
        exit(0);
    }
    return tree;
}


void printTree(WordBinNode* root){
    if(root!=NULL) {

        printf("%s[%d]\n", root->string, root->count);
        printTree(root->left);
        printTree(root->right);
    }
}