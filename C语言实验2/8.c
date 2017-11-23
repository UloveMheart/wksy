#include<stdio.h>
int main()
{
    int day_number,day_start,i=1,n;
    printf("Enter number of days in mouth:");
    scanf("%d",&day_number);
    printf("Enter starting day of the week(1=Sun,7=Sat):");
    scanf("%d",&day_start);
    /*switch(day_start){
    	case 1:
    		printf("  ");
    		break;
    	case 2:
    		printf("    ");
    		break;
    	case 3:
    		printf("      ");
    		break;
    	case 4:
    		printf("        ");
    		break;
    	case 5:
    		printf("          ");
    		break;
    	case 6:
    		printf("            ");
    		break;
    	case 7:
    		printf("              ");
    		break;
    	default:
    		printf("Error\n");
    		break;
    }
    */
    for(n=1; n<=day_start; n=n+1)
    {
        printf("  ");
    }
    while(i<=day_number)
    {
        for(i; i%7+day_start==8;)
        {
            printf("%2d\n",i);
            i=i+1;
        }
        printf("%2d ",i);
        i=i+1;
    }
    return 0;
}