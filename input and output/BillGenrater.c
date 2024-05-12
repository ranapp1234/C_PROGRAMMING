/*1Q. write a program of Automated bill generation in C?
 You have to fill in values to a template Letter.txt
Letter.txt looks something like this:
Thanks{{ name }} for purchasing {{item}} from our outlet{{outlet}}
You have to read this file and replace these values:
{{name}} - RANA
{{item}} - Table Fan
{{outlet}} - Ram and laxmi fan outlet
user file function in c to accomplish the same
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += oldWordLength - 1;
        }
    }
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i++] = *str++;
        }
    }
    resultString[i] = '\0';
    return resultString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("myfile.txt", "r");
    ptr2 = fopen("Bill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The file content was :%s\n", str);
   
    // call the repalcementWord function and generate newStr

    char *newStr = str;
    newStr = replaceWord(str, "{{name}}", "rana");
    newStr = replaceWord(newStr, "{{item}}", "shoes");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan");
    printf("The file content is :%s\n", newStr);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}