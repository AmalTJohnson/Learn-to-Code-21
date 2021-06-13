// This is a C programme designed to calculate the BMI , Calorie intake and Requirement  and  Caloric value of foods. 
// The programmereads input from user and gives the results.
#include <stdio.h>
#include <conio.h>
#include <math.h>
float BMI (float x,float y);
float calintake(float xy );

float BMI (float x,float y)
{
	float hehe ;
	hehe = x / ( y * y) ;
	
	printf("  Your BMI is : %.2f ",hehe );
	if (hehe<=18.5)
	printf("\n  You are Under weight ");
	else if(hehe>=25)
	printf("\n  You are Over weight ");
	else 
	printf("\n  You Have Healthy   weight ");
	printf("\n\n   *************  ");
	return 0;
	
}

float calintake(float xy )
{
	float haha,key,bj ;
   printf("\n--Enter you life style--");
   printf("\n  Press  \n  1 -  Not at all Hard labour\n  2 -  Light Activity\n  3 -  Medium Activity\n  4 -  Athletic Activity \n");
   scanf("%f",&key);
   bj=key;
   while (bj==1)
   {
   haha = ( xy * 2.204 )*13 ;
   printf("  You Need %.2f Calories Daily ",haha);
  break;
   } 
       while (bj==2)
       {
   haha = ( xy * 2.204 )*15 ;
   printf("  You Need %.2f Calories Daily ",haha);
   break;
}
      while (bj==3)
      {
   haha = ( xy * 2.204 )*17 ;
   printf("  You Need %.2f Calories Daily \n\n",haha);
   break;
}
       while (bj==4)
       {
   haha = ( xy * 2.204 )*20 ;
   printf("  You Need %.2f Calories Daily ",haha);
   break;
   
}
return 0;
}
 

   

   int main()
   {
	   float w,h,yesorno,arr[20]={1.3, 2.6, 4.2, 8.8, 2.39, 2.5, 1.5, 0.42, 3.64, 0.81, 3.47, 1.06, 1.16},gms,foodcals ;
	 int bub,k;
	   printf("                                              Health  -   App                                              ");
	   printf("\n-------------------------------------------********************----------------------------------------------");
	   printf("\n  Enter you Weight : ");
	   scanf("%f",&w);
	   printf("\n  Enter you Height (in meter) : ");
	   scanf("%f",&h);
	   BMI(w,h);
	   //Declaring weight and height in the function bmi
	   calintake(w);
	   // HiHi
	   printf("\n");
	   printf("  Do you Want to find your Calorie intake today ?  (1/0) ");
	   
	   scanf("%f",&yesorno);
	   for(k=0;k<3;k++)
	   {
	   if (yesorno==1)
	   
	   printf("\n\n  Press    \n  1  -  Rice\n  2  -  Bread\n  3  -  Sugar  \n  4  -  Oil\n  5  -  Chicken\n  6  -  Beef\n  7  -  Egg\n  8  -  Milk\n  9  -  Chick Pea\n  10  -  Green Peas\n  11  -  Mung Beans\n  12  -  Dal\n  13  -  Pea\n  0  -  To Exit ");
	    else
	    return 0;
	   scanf("%d",&bub);
	    if (bub==0)
	   {
		   return 0;
	   }
	   else
	   printf(" Enter the amount of Food (in grams) : ");
	   scanf("%f",&gms);
             
	  
	   
	  
	   
	  
	   
	   foodcals=arr[bub-1]*gms;
       printf("  Your food has %.2f calories ",foodcals);
   }
	   printf("\n");
	   printf("\n");
	   printf("\n------------------------------------T   H   A   N   K     Y   O   U---------------------------------------");
	   
	   
	  
	 
	 	   
   } 
   
