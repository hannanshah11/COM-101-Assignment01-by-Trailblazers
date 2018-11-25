/*Program to check correctness limited to '{','[','(' */
#include<stdio.h>
int main()
{
	char expr[100];
	int bf = 0; //Initial balance factor equals zero
	int i;


	//Data for input
	printf("Enter expression to be checked:");
	scanf("%s", &expr);

	//Scanning will get started
	i = 0;
	while(expr [i] != '\0')
		{if (expr[i] == '(')
	  bf++ ;
	  else if (expr[i] == ')'){	
	  bf-- ;
	  if (bf < 0)
         break; //Terminate Scanning Search
	  	}
	  	i++;

}

//Data For Output 
if (bf == 0)
	printf(" Balanced Paranthesis.\n");
else
	printf("Unbalanced Paranthesis.\n");
return 0;
}

