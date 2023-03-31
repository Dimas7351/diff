// #include <stdio.h>

// int main(){
//     char *s1, *s2;
//     scanf("%s",s1);
//     scanf("%s",s2);
//     FILE *f1 = fopen(s1,"r");
//     FILE *f2 = fopen(s2,"r");
//      while ((arr[i] = fgetc(file)) != EOF) {
//         if (arr[i] == '\n') {
//             arr[i] = '\0';
//             printf("%s\n",arr);
//             i = 0;
//         }
//         else i++;
//     }
// }

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <locale.h>

int main()
{
	int a = 0;
	char ch_1[2000], ch_2[2000];
    char s1[100], s2[100];
    scanf("%s %s",s1,s2);
    // printf("%s %s",s1,s2);
	FILE *file_1;
	FILE *file_2;

	//setlocale(LC_ALL, "russian");

	if((file_1 = fopen(s1,"r")) == NULL)
	{	printf("\nФайла %s не существует\n", s1);	return 1;	}

	if((file_2 = fopen(s2,"r")) == NULL)
	{	printf("\nФайла %s не существует\n", s2);	return 1;	}


	while(!feof(file_1) && !feof(file_2))
	{
		fgets(ch_1, 2000, file_1);
		fgets(ch_2, 2000, file_2);
		a++;
		if (strcmp(ch_1, ch_2))
		printf("\n%dc%d\n< %s\n---\n> %s ",a,a,ch_1,ch_2);
	}
    printf("\n");
	fclose (file_1);
	fclose (file_2);
return 0;
}