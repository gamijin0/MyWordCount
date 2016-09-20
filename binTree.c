//
// Created by chaos on 16-9-20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binTree.h"

WordBinTree* buildTree(void){
    WordBinTree* tree=NULL;
    if((tree=malloc(sizeof(tree)))!= NULL){
        tree->root=NULL;
        tree->items=0;
    } else{
        printf("内存不足");
    }
    return tree;
}