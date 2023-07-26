#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    //引数が1でない場合はエラー
    if(argc != 2){
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
    }

    printf(".intel_syntax noprefix\n");
    printf(".global main\n");
    printf("main:\n");
    //引数を数値に変換して、raxに代入
    printf("  mov rax, %d\n", atoi(argv[1]));
    printf("  ret\n");
    return 0;
}