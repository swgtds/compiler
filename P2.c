//To check wheather a lexeme is an identifier 
#include<stdio.h> 
#include<ctype.h>

int main()
{

	int flag=1,i=0;
	char str[80];
	
	printf("Enter a lexeme:"); 
	scanf("%s",str);
		
	if( isalpha(str[0]) || str[0]== '_'){
    while(str[i]!='\0'){
			if( isalpha(str[i]) || isdigit(str[i] ) || str[i]== '_' ) 
			{
				i++;
			}
			else
			{
				flag=0;
				break;
			}
	}
    }

else{
		flag=0;
}

	if(flag==1) 
		printf("Identifier");
	else
 		printf("Not identifier");
	return 0;
}





