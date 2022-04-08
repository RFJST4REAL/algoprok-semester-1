#include<stdio.h>
#include<string.h>


// 	char string1[20];
//    int i, length, a;
//    int flag = 0;
//    scanf("%d", &a);
//    for(int set=0; set< a; set++){
//    scanf("%s", &string1);
//    
//    length = strlen(string1);
//    
//    for(i=0;i < length ;i++){
//        if(string1[i] != string1[length-i-1]){
//            flag = 1;
//            break;
//   		}
//	}
//    printf("Case #%d: ", set+1);
//    if (flag) {
//        printf("Nah, it's not a palindrome\n", string1);
//    }    
//    else {
//        printf("Yay, it's a palindrome\n", string1);
//    }
//    flag=0;
//}

	bool PalindromeTest(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[strlen(str) - i - 1] != str[i])
            return false;
    }
    return true;
}
int main(){
    int testN = 0;
    scanf(" %d", &testN);
    for (int i = 0; i < testN; i++)
    {
        char str[1001];
        scanf(" %s", str);
        printf("Case #%d: ", i + 1);
        if (PalindromeTest(str))
        {
            printf("Yay, it's a palindrome\n");
        }
        else
        {
            printf("Nah, it's not a palindrome\n");
        }
    }
   
 return 0;   
}
