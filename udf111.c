#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int multi(int a,int b)
{
	return a*b;
}

int divi(int a,int b)
{
	return a/b;
}

int moduls(int a,int b)
{
	return a%b;
}

main()
{
	int a,b,n;
	
	printf("value of a=");
	scanf("%d",&a);
	
	 printf("value of b=");
	 scanf("%d",&b);
	 
	 do
	 {
	  
	  printf("1 for addition=\n");
	  printf("2 for substraction=\n");
	  printf("3 for multiplication=\n");
	  printf("4 for divition=\n");
	  printf("5 for moduls=\n");
	  printf("0 for exit\n");
	  
	  printf("enter your choice");
	  scanf("%d",&n);
	  	  
	 switch(n)
	 {
	 	case 1:
	 	printf("add =%d\n",add(a,b));
		 break;
		 
		case 2:
	 	printf("sub =%d\n",sub(a,b));
		 break;
		  
		case 3:
	 	printf("multi =%d\n",multi(a,b));
		 break;
		 
		 case 4:
	 	printf("divi =%d\n",divi(a,b));
		 break;
		 
		 case 5:
	 	printf("moduls =%d\n",moduls(a,b));
		 break;
		 
	}
   }while(n!=0);
		 
}
		 
		 
		 
		 
		 
		 
		 	
	 

