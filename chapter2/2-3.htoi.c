#include <stdio.h>
#define HEX_LOWER(N) ((N) >= 'a' && (N) <= 'f')
#define HEX_UPPER(N) ((N) >= 'A' && (N) <= 'F')
#define HEX_DIGIT(N) ((N) >= '0' && (N) <= '9')
#define IS_HEX(N) (HEX_LOWER(N) || HEX_UPPER(N) || HEX_DIGIT(N))

unsigned long htoi(char []);
int main(void)
{
    int i;

    char *test[12] = {
        "F89",
        "str",
        "0300",
        "0x1",
        "0XA",
        "0X0C0BE",
        "abcdef",
        "0100",
        "0x123456",
        "F00",
        "banana",
        "zoo_apple",
    };
    printf("%10s %10s\n","test","result");

    for(i =0; i < 12; ++i) {
        printf("%10s %10lu\n",test[i], htoi(test[i]));
    }
    return 0;
}

unsigned long htoi(char hexstr[])
{
    int i;
    long num;
    num = 0;
    i = 0;
    char j;

    if(hexstr[0] == '0' && (hexstr[1] == 'x' || hexstr[1] =='X')) i = 2;

    while(hexstr[i] != '\0') {
        j = hexstr[i];
        if(! IS_HEX(j)) return 0;
        if(HEX_DIGIT(j)) num = num * 16 + j - '0';
        else if(HEX_LOWER(j)) num = num * 16 + 10 + j - 'a';
        else if(HEX_UPPER(j)) num = num * 16 + 10 + j - 'A';
        i++;
    }
    return num;
}