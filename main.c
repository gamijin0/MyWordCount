#include <stdio.h>
#include "binTree.h"
int main(){

    WordBinTree* tree;
    tree = buildTree();

    addNode(tree,"Hello");
    addNode(tree,"King");
    addNode(tree,"Hello1");
    addNode(tree,"Hell");
    addNode(tree,"Nice");
    addNode(tree,"Hello");
    addNode(tree,"Hell");

}