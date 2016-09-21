//
// Created by chaos on 16-9-21.
//

#include "readFile.h"
#include "binTree.h"

WordBinTree* readFile(WordBinTree* tree,char* filename){
    FILE* fp=fopen(filename,"r");
    if(fp){
        printf("正在读取文件[%s]并生成单词树\n",filename);
        char ch;
        char tmp[100];
        int i=0;
        ch = fgetc(fp);
        putchar(ch);
        while (ch!=EOF){
            if(ch>='A'&&ch<='z'){
                tmp[i]=ch;
                i++;
            } else{
                if(i>0){
                    tmp[i+1]='\0';
                    addNode(tree,tmp);
                    i=0;
                }
            }
            ch=fgetc(fp);
        }


    } else{
        printf("打开文件失败,请检查文件是否存在");
    }
    if(fp!=NULL){
        fclose(fp);
    }
    return tree;
}