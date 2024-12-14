// To check wheather a lexeme is a constant  
#include<stdio.h> 
#include<ctype.h>

int main()
{

	int flag=1,i=0;
	char str[80];
	
	printf("Enter a lexeme:"); 
	scanf("%s",str);
		
	
while(str[i]!='\0')
	{
		if(isdigit(str[i])) 
		{
			i++;
		}
		else
		{
			flag=0;
			break;
		}
	}
	

	if(flag==1) 
		printf("Integer Constant");
	else
 		printf("Not integer constant");
	return 0;
}





