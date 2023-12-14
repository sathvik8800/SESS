#include<stdio.h>
int main()
{
	int vc=0,cc=0;
	char ch[100];
	int i;
	printf("enter the string:\n");
	scanf("%s",ch);
	for(i=0;i<100;i++)

	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
		    vc++;
		else
            cc++; 
	}
	printf("no of vowels: %d", vc); 
    printf("no of consonants: %d", cc); 
    return 0;
}
