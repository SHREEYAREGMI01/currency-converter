#include<stdio.h>
#include<conio.h>

main () 
{
  
float amount, result;
  
int choice;
  
  
printf ("***Welcome to Currency Converter\n");
  
 
printf ("1, for US dollar\n");
  
printf ("2, for Euro\n");
  
printf ("3, for Pound\n");
  
printf ("4, for Riyal\n");
  
printf ("5, for Dinar\n");
  
printf ("6, for Yuan\n");
  
printf ("7, for Yen\n");
  
printf ("8, for Australian dollar\n");
  
printf ("9, for Rand\n");
  
printf ("10, for canadian dollar \n");
  


  

  printf ("Enter amount in rupees\n");
  scanf ("%f",&amount);

printf ("Enter your choice\n");
scanf ("%d",&choice);
  
switch (choice)
{
    
    case 1:
    result = amount / 127.79;
      
    printf ("%.2f Amount equal to %.2f US dollar", amount, result);
      
    break;
    
    case 2:
    result = amount / 128.27;
      
    printf ("%.2f Amount equal to %.2f Euro", amount, result);
      
    break;
    
    case 3:
    result = amount / 151.17;
      
    printf ("%.2f Amount equal to %.2f Pound", amount, result);
      
    break;
    
    case 4:
    result = amount / 34.03;
      
    printf ("%.2f Amount equal to %.2f Riyal", amount, result);
      
    break;
    
    case 5:
    result = amount / 415.62;
      
    printf ("%.2f Amount equal to %.2f Dinar", amount, result);
      
    break;
    
    case 6:
    result = amount / 18.75;
      
    printf ("%.2f Amount equal to %.2f Yuan", amount, result);
      
    break;
    
    case 7:
    result = amount / 0.93;
      
    printf ("%.2f Amount equal to %.2f Yen", amount, result);
      
    break;
    
    case 8:
    result = amount / 87.85;
      
    printf ("%.2f Amount equal to %.2f Australian dollar", amount, result);
      
    break;
    
    case 9:
    result = amount / 7.51;
      
    printf ("%.2f Amount equal to %.2f Rand", amount, result);
      
    break;
    
    case 10:
    result = amount / 98.39;
      
    printf ("%.2f Amount equal to %.2f Canadian dollar", amount, result);
      
    break;
    
default:
      
    printf ("Invalid Choice");
    
}
  
getch ();

}
