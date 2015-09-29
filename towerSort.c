/*
 * =====================================================================================
 *
 *       Filename:  towerSort.c
 *
 *    Description:  将任意行字符串重新排序
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 21时07分05秒
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
char *sort(char *s){
        static char s1[30];   //开辟一个空的字符数组
        char *p1 = s1;
        int i = 0;
        int j;
        for(; i < 3; i++){
                *p1 = s[i];     //将第一个字符放入s1字符数组中
                if(i == 1){
                   for(j = i+2; j < strlen(s); j = j+2){
                        p1++;
                        *p1 = s[j];
                   }     
                }
                else{
                        for(j = i+4; j < strlen(s); j = j+4){
                                p1++;
                                *p1 = s[j];
                        }
                }
                p1++;
        }
        *p1 = '\0';
        return s1;
}

int main(void){
        char s[30];
        char *ch;
        int t = 0;
        fgets(s,sizeof(s),stdin);
        printf("old string: %s",s);
        ch = sort(s);
        printf("new string: ");
        for(; *ch!='\0'; ch++){
                printf("%c",*ch);
        }
}
