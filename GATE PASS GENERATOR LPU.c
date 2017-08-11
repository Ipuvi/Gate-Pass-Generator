#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
char Student_Details(),Staff_Details();
char c[6]="Ipuvi",a[6],g[20],j[20],l[20],*m[20],*n[20];
int d=12345,e,f,b,h,i,k,t;
main()
{   
    time_t t;
    time(&t);
    srand((unsigned) time(&t));
	printf("\n  ******************************************************  \n");
	printf("\n    LOVELY PROFESSIONAL UNIVERSITY GATE PASS GENERATOR    \n");
	printf("\n            Enter your Login Id and Password              \n");
	printf("\n    Username:  ");
	scanf("%s",&a);
	printf("\n    Password:  ");
	scanf("%d",&b);
	h=strcmp(a,c);
	if(h==0 && b==d)
      { 
        printf("\n              Login Id and Password MATCHED               \n");
        printf("\n  ******************************************************  \n");
        printf("\n                  Gate Pass for.......                    \n");
	    printf("\n             [1]Student  [2]Staff  [3]Visitor             \n");
	    printf("\n              ");
		scanf("%d",&e);
	    printf("\n  ******************************************************  \n");
	    if(e==1)
	    {
	        printf("\n             Enter your Registration Number:              \n");
	        printf("\n              ");
			scanf("%d",&f);
			if(f>=11608591 &&f<=11608600)
	      	{
			Student_Details();
            printf("\n                    Reason of leaving:                    \n");
            printf("\n              ");
	        scanf("%s",&g);
	      	}
			else
			{
			printf("\n               User does not exists\n");
       	    return 0;
		    }
			printf("\n  ******************************************************  ");
			printf("\n  *                                                    *  ");
			printf("\n  *                                                    *  ");
			printf("\n                                                          \n");
			printf("\n                    STUDENT GATE PASS                     \n\n");
			printf("\n       Gate pass Id       :  %d\n",rand()%1500);
			printf("\n       Registration No.   :  %d\n",f);
			printf("\n       Name of student    :  %s\n",m[0]);
			printf("\n       Reason of going out:  %s\n",g);
			printf("\n       Time out           :  %s\n",ctime(&t));
			printf("       Time in            :  __________");
			printf("\n                                                        \n");
			printf("\n       Issued By     ");
			printf("\n                                                        \n");
			printf("\n  *                                                    *  ");
			printf("\n  *                                                    *  ");
	        printf("\n  ******************************************************  \n");
	    
	   }
       	else if(e==2)
       	{
   	        printf("\n                 Enter your Unique Id:                    \n");
   	        printf("\n              ");
       		scanf("%d",&f);	
       		if(f>=25441 && f<=25445)
       	   {
       		Staff_Details();
       		printf("\n  ******************************************************  ");
       		printf("\n  *                                                    *  ");
       		printf("\n  *                                                    *  ");
       		printf("\n                                                          \n");
       		printf("\n                   STAFF GATE PASS                        \n\n");
       		printf("\n       Gate Pass Id :   %d\n",rand()%1500);
       		printf("\n       Unique Id    :   %d\n",f);
       		printf("\n       Name         :   %s\n",m[0]);
       		printf("\n       Department   :   %s\n",n[0]);
       		printf("\n       Time in      :   %s\n",ctime(&t));
       		printf("       Time out     :   _______");
       		printf("\n                                                          \n");
       		printf("\n       Issued by\n");
       		printf("\n                                                          \n");
       		printf("\n  *                                                    *  ");
       		printf("\n  *                                                    *  ");
       		printf("\n  ******************************************************  \n");
       	   }
       		else
       		printf("\n                 User does not exists");
        }
       	
		   else if(e==3)
       	{
            printf("\n                    Reason of visit:                      \n");
       		printf("\n              [1]Parent/Guardian  [2]Other                \n");
       		printf("\n              ");
			scanf("%d",&i);
			
			if(i==1)
			{
		        printf("\n                    Enter your name:                      \n");
		        printf("\n              ");
				scanf("%s",&j);
		    	printf("\n               Enter Student Registration no.             \n"); 
		    	printf("\n              ");
				scanf("%d",&f);
		    	if(f>=11608591&&f<=11608600)
				{
		    	Student_Details();
		    	printf("\n  ******************************************************  ");
		    	printf("\n  *                                                    *  ");
		    	printf("\n  *                                                    *  ");
		    	printf("\n                                                          \n");
		    	printf("\n                   GUARDIAN GATE PASS                     \n\n");
				printf("\n       Gate Pass Id :    %d\n",rand()%1500);
		    	printf("\n       Name         :    %s\n",j);
		    	printf("\n       Guardian of  :    %s\n",m[0]);
		    	printf("\n       Time in      :    %s\n",ctime(&t));
		    	printf("       Time out     :    ________");
		    	printf("\n                                                          \n");
		    	printf("\n       Issued by       \n");
		    	printf("\n                                                          \n");
		    	printf("\n  *                                                    *  ");
		    	printf("\n  *                                                    *  ");
		    	printf("\n  ******************************************************  \n");
		       }
		    	else
		    	printf("\n                 User does not exists");
       }
			else if(i==2)
			{
			    printf("\n                    Enter your name:                      \n");
			    printf("\n              ");
				scanf("%s",&j);
				printf("\n                      Reason:                             \n");
				printf("\n              ");
				scanf("%s",&l);
			 	printf("\n  ******************************************************  ");
			 	printf("\n  *                                                    *  ");
			 	printf("\n  *                                                    *  ");
				printf("\n                                                          \n");
				printf("\n                   VISITORS GATE PASS                     \n\n");
				printf("\n        Gate Pass Id:   %d\n",rand()%1500);
				printf("\n        Name        :   %s\n",j);
				printf("\n        Reason      :   %s\n",l);
				printf("\n        Time in     :   %s\n",ctime(&t));
				printf("        Time out    :   ______" );
				printf("\n                                                          \n");
				printf("\n        Issued by       \n");
				printf("\n                                                          \n");
				printf("\n  *                                                    *  ");
				printf("\n  *                                                    *  ");
				printf("\n  ******************************************************  \n");	
	        }
	        else
   	        printf("\n                      Invalid Entry                       \n");
        }
        else
        printf("\n                      Invalid Entry                       \n");
    }
    else 
    printf("\n               INVALID LOGIN ID OR PASSWORD               \n");
}  

char Student_Details() 
{           
           switch(f)
		   {
		    case 11608591:
	        {
			m[0]="Ipuvi Mishra";
			break;
			}
			case 11608592:
			{
			m[0]="Jaspal Prajapati";
			break;
            }
			case 11608593:
			{
			m[0]="Prashant Choudhary";
			break;
			}
			case 11608594:
			{
			m[0]="Prashant Saini";
			break;
			}
			case 11608595:
			{
			m[0]="Prashant Singh Mangat";
			break;
			}
			case 11608596:
			{
			m[0]="Poojitha";
			break;
			}
			case 11608597:
			{
			m[0]="Paramjeet Singh";
			break;
			}
			case 11608598:
			{
			m[0]="Rohit Sharma";
			break;
			}
			case 11608599:
		    {
			m[0]="Rowhit Swami";
			break;
			}
			case 11608600:
			{
			m[0]="Vikas Shaw";
			break;
			}
		}
		
			
	        
	       
	}

char Staff_Details()
{
	switch(f)
	{
		case 25441:
			{
				m[0]="Miss Himanshu Sharma";
				n[0]="Faculty";
				break;
			}
		case 25442:
		   {
		   	    m[0]="Mr.Rahul Jha";
		   	    n[0]="Faculty";
		   	    break;
			}	
		case 25443:
			{
				m[0]="Miss Renu Sharma";
				n[0]="Warden";
				break;
			}
		case 25444:
			{
				m[0]="Miss Shashi";
				n[0]="Warden";
				break;
			}
		case 25445:
			{
				m[0]="Miss Mishika Gill";
				n[0]="Faculty";
				break;
			}
	}
 }	   
