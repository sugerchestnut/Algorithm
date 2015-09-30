/*
 * =====================================================================================
 *
 *       Filename:  Parentheses.c
 *
 *    Description:  括号匹配问题
 *
 *        Version:  1.0
 *        Created:  2015年09月30日 20时33分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  潘璐 (fgm), mehner.fritz@fh-swf.de
 *   Organization:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<string.h>

int isValid(char* s){
        char* p1 = s;
        char ch[30];
        //char* p2 = ch;
        //char* p3 = ch;
        int i = -1;
        int flag = 0;
        for(; *p1!='\0'; p1++){
                if((*p1 == '(') || (*p1 == '[') || (*p1 == '{')){
                        i++;
                        ch[i] = *p1;
                }else if(*p1 == ')'){
                        if(ch[i] == '('){
                                i--;
                        }
                }else if(*p1 == ']'){
                        if(ch[i] == '['){
                                i--;
                        }
                }else if(*p1 == '}'){
                        if(ch[i] == '{'){
                                i--;
                        }
                }
        }
        if(i == -1){
                flag = 1;
        }
        return flag;
}

int main(void){
        char s[30];
        int result;
        printf("input a string: ");
        fgets(s,sizeof(s),stdin);
        printf("old string: %s",s);
        result = isValid(s);
        if(result == 0){
                printf("not valid!\n");
        }else{
                printf("valid!\n");
        }
}
