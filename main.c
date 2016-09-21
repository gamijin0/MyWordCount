#include <stdio.h>
#include "binTree.h"
#include "readFile.h"
int main(){

    WordBinTree* tree;
    tree = buildTree();

    tree=readFile(tree,"/home/chaos/TestText.txt");
    printTree(tree->root);
}