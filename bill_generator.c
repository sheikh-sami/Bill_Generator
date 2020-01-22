#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>

struct addproduct
{
    int item_id;
    char item_name[50];
    float price;
};

struct bill
{
    int bill_id;
    char cust_name[50];
    char item_name[10][50];
    float quant[10];
    float total;
    float price[10];
    char date[15];
    int n;
};

FILE *fp, *bifp, *bifp1, *m1, *m2;
struct addproduct ad;
struct bill bi;
int add_item();
int generate_bill();
int display_bill();
int delete_bill();
int changepass();
int item_del();
int q=0;

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

void main()
{
    system("color fd");
    char a1, c, password[10];
    int i;
x:
    printf("Are you admin (y/n):\t");
    a1 = getchar();

    if(a1 == 'y'){

P:
    system("cls");

	int i=0, j;
	char pass[23], pass1[23], c;
	printf("Enter your password\t");
 	while((c=getch()) != 13)
	{
		if(c == '\b')
        {
            printf("\b \b");
            --i;
        }
        else
        {
            pass[i++]=c;
            printf("*");
        }
	}

	pass[i]='\0';

    //scanf("%s",password);

    m1 = fopen("Password.txt", "r");
    fscanf(m1, "%s", &pass1);
if (strcmp(pass, pass1) == 0)
    {
    printf("\nAccess granted");
    Sleep(500);
    system("cls");
    acover();
    }
else
    printf("\nAccess denied\n");
    Sleep(500);
    system("cls");
    goto P;

}
if (a1 == 'n')
    {
    system("cls");
    cover();
    }
if(a1 != 'y' && a1 != 'n')

    system("cls");
    goto x;
    //;

    }
void acover(){
char i;
c:
system("color 0c");
printf("\n\n\n\n\n\n\t\t\t * * * * * *\t\t* * * * * * * * * * * * * * * * * * *");
printf("\n\t\t\t * *  \t\t\t* > > > > > > > CREDITS < < < < < < < *");
printf("\n\t\t\t * Bill\t\t\t* > ****** <*****>  * *");
printf("\n\t\t\t * Generator\t\t* >****** <*******>  * * *");
printf("\n\t\t\t * For\t\t\t* > ******* <******>  * *");
printf("\n\t\t\t * SHOPPERS\t\t* > *******        <******>  *");
printf("\n\t\t\t * * * * * *\t\t* * * * * * * * * * * * * * * * * * *\n\n");
printf("\n\n\t\tPress '1' to continue or Any key to exit\t\t");
i = getche();

if(i == '13')
{
    goto c;
}


if(i != '1')
{
    exit(0);
}
    adminmenu();
}

int adminmenu(){
    int l;
if('1')
{
    int f=1;
    char choice;
    system("cls");
    system("color 0b");
XYZ:
        system("cls");
        printf("\n\t\t\t* * * * * BILL GENERATOR FOR SHOPPERS! * * * * *\n");
        printf("\n\n\t1. ADD PRODUCT");
        printf("\n\n\t2. GENERATE A BILL");
        printf("\n\n\t3. DISPLAY A BILL");
        printf("\n\n\t4. DELETE A BILL");
        printf("\n\n\t5. SETTINGS");
        printf("\n\n\t6. EXIT\n");
        printf("\n\n\tPRESS CORRESPONDING KEYS TO PERFORM OPERATION :\t ");
ABC:
    scanf("%d", &choice);
    switch(choice)
    {


case 1:
    q = add_item();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
        goto XYZ;
    }

    break;

case 2:
    q=generate_bill();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        Sleep(1800);
        exit(0);
    }
    else
    {
    goto XYZ;
    }
    break;

case 3:
    q = display_bill();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
    goto XYZ;
    }
    break;

case 4:
    q = delete_bill();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
    goto XYZ;
    }
    break;

case 5:

    system("cls");
A:
    printf("\n\n\t1.Delete a Product\n");
    printf("\t\t\n\t2.Change Password\n");
    printf("\n\n\tPRESS CORRESPONDING KEYS TO PERFORM OPERATION :\t ");

    scanf("%d", &l);

    switch(l)
    {
case 1:
        q = item_del();
            if(q==0)
        {
                printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
                exit(0);
        }
    else
        {
        goto XYZ;
        }

    break;

case 2:
        q = changepass();
        if(q==0)
        {
                printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
                exit(0);
        }
    else
        {
        goto XYZ;
        }

    break;

default:
        printf("\n\n\n\t\tEnter a valid choice!");
        Sleep(1000);
        system("cls");
        goto A;
    }


case 6:

    MessageBox(0,"Thank you for shopping","Exit",1);
    exit(0);


default:
    printf("\n\nYOU ENTERED A WRONG VALUE.PLEASE TRY AGAIN : ");
    goto ABC;
}
}

//getch();

}

void cover(){
    char i;
    system("color 0B");
    printf("\n\n\n\n\n\n\t\t\t * * * * * *\t\t* * * * * * * * * * * * * * * * * * *");
    printf("\n\t\t\t * *  \t\t\t* > > > > > > > CREDITS < < < < < < < *");
    printf("\n\t\t\t * Bill\t\t\t* > Sumaiya Tabssum Mou  <160101014>  * *");
    printf("\n\t\t\t * Generator\t\t* > Lailatul Pherdousi   <160101008>  * * *");
    printf("\n\t\t\t * For\t\t\t* > Bipul Chandro Roy    <160101029>  * *");
    printf("\n\t\t\t * SHOPPERS\t\t* > Asif-Ul-Islam        <160101001>  *");
    printf("\n\t\t\t * * * * * *\t\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf("\n\n\t\tPress '1' to continue or Any key to exit\t\t");
    i = getche();

if(i != '1')
    {
        exit(0);
    }
        menu();
    }

void menu()
    {
    int l;
if('1')
    {
    int f=1;
    int choice;
    system("cls");
    system("color 0b");

XYZ:
        system("cls");
        printf("\n\t\t\t* * * * * BILL GENERATOR FOR SHOPPERS! * * * * *\n");
        printf("\n\n\t1. ADD PRODUCT");
        printf("\n\n\t2. GENERATE A BILL");
        printf("\n\n\t3. DISPLAY A BILL");
        printf("\n\n\t4. DELETE A BILL");
        printf("\n\n\t5. EXIT\n");
        printf("\n\n\tPRESS CORRESPONDING KEYS TO PERFORM OPERATION :\t ");
ABC:
    scanf("%d", &choice);

    switch(choice)
{

case 1:
    q = add_item();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
        goto XYZ;
    }
    break;


case 2:
    q=generate_bill();
    if(q==0)
    {
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
    Sleep(1800);
    exit(0);
    }
    else
    {
    goto XYZ;
    }
    break;

case 3:
    q = display_bill();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
        goto XYZ;
    }
    break;

case 4:
    q = delete_bill();

    if(q==0)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU");
        exit(0);
    }
    else
    {
    goto XYZ;
    }
    break;

case 5:
    MessageBox(0,"Thank you for shopping","Exit",1);
    exit(0);

default:
    printf("\n\n\tYOU ENTERED A WRONG VALUE.PLEASE TRY AGAIN : ");
    goto ABC;
}
}

getch();

}

int add_item()
{
    system("cls");

int f=1,id=0,p[10],i=0,h=0,t=0;
char ch;
fp=fopen("item.txt","a");
fclose(fp);

while(f==1)
{

fp=fopen("item.txt","r");
while(fscanf(fp,"%s %f %d", &ad.item_name,&ad.price,&ad.item_id) != EOF)
{
id=ad.item_id;
}

fclose(fp);
printf("\n\nENTER PRODUCT NAME :\t");
scanf("%s",ad.item_name);
printf("\nENTER PRODUCT PRICE :\t");
scanf("%f",&ad.price);
id++;
p[i]=id;
i++;
ad.item_id=id;
fp=fopen("item.txt","a");
fprintf(fp,"%s %f %d\n", ad.item_name,ad.price, ad.item_id);
fclose(fp);

printf("\n\n\n\nYOUR PRODUCT WITH ID %d IS ADDED SUCCESSFULLY....",ad.item_id);
printf("\n\nPRESS 1 TO ADD NEW PRODUCT OR ANY KEY TO GO BACK TO MAIN MENU...\t");

ch = getche();
//scanf("%d",&f);

if(ch!='1')
        adminmenu();
}

}

int generate_bill()
{
    time_t now;
    struct tm *d;
    int w=0;
    int item_id,f=1,i=0,n=0,p=0,bill_id=0,k=1,j=0;
    float total=0,quant=0;
    //bifp=fopen("bill.txt","a");
    //fclose(bifp);

while(f==1)
{
int flag=0;

if(j==0)
{
    bifp=fopen("bill.txt","r");

while(fscanf(bifp, "%d %s %f %s", &bi.bill_id, &bi.cust_name, &bi.price, &bi.date) != EOF)
    {
        bill_id = bi.bill_id;
    }
    bill_id++;
    bi.bill_id = bill_id;
    //getch();
    fclose(bifp);
    j++;

}

system("cls");
printf("\n\nNOTE : JUST ENTER PRODUCT ID OF BUYING PRODUCTS TO CALCULATE BILL!\n\n");

fp=fopen("item.txt","r");

printf("Product_ID          Product         Price\n");

while(fscanf(fp,"%s %f %d", &ad.item_name,&ad.price,&ad.item_id) != EOF)
{
    printf("%4d            %11s         %.3f\n", ad.item_id,ad.item_name,ad.price);
}
fclose(fp);

printf("\n\nPRODUCT ID :\t");
scanf("%d",&item_id);

fp=fopen("item.txt","r");

while(fscanf(fp,"%s %f %d", &ad.item_name,&ad.price,&ad.item_id) != EOF)
{
if(item_id==ad.item_id)
{
printf("\n\nPRODUCT NAME : %s\n",ad.item_name);
strcpy(bi.item_name[i],ad.item_name);
printf("\t\tPRODUCT PRICE : %.2f",ad.price);
bi.price[i]=ad.price;
printf("\n\n");
flag=1;
}
}
if(flag==0)
{
printf("\n\n\tYOUR PRODUCT ID IS NOT FOUND.");
}
else
{
printf("\n\nQUANTITY OF PRODUCT :\t");
scanf("%f",&quant);
bi.quant[i]=quant;
total=total+quant*ad.price;
bi.total=total;
flag=0;
bi.n=i;
n=i;
i++;
}
fclose(fp);
printf("\n\n\nPRESS 1 TO ADD MORE PRODUCT OR PRESS ANY KEY TO GO TO BILL PAGE: ");
scanf("%d",&f);
}

system("cls");
printf("\n\tPUT DOWN CUSTOMER INFORMATION");
printf("\n\nCUSTOMER NAME :\t");
scanf("%s",&bi.cust_name);
time(&now);
d=localtime(&now);
strftime(bi.date, 15, "%d/%m/%Y", d);
printf("\n\n\nPRESS 1 TO GENERATE A BILL AND ANY KEY TO GO TO MAIN MENU : ");
scanf("%d",&p);
system("cls");
if(p != 1)
{
return p;
}
else
{
i=0;
bifp=fopen("bill.txt","a");
fprintf(bifp, "%d %s %f %s\n",bi.bill_id, bi.cust_name, bi.total, bi.date);
fclose(bifp);
system("cls");

//for(p=0;p<1;p++){
//p = 0;
//while(p<3)

printf("\n\nBILL IS GENERATING");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
//p++;}


system("cls");
printf("\t\t\t \n");
printf("\t\t\t BILL GENERATOR FOR SHOPPERS!\n");
printf("\t\t\t ");
printf("\n--------------------------------------------------------------------------------");
gotoxy(2,5);
printf("CUSTOMER NAME : %s",bi.cust_name);
gotoxy(30, 5);
printf("BILL ID : %d",bi.bill_id);
gotoxy(62,5);
printf("DATE : %s",bi.date);
printf("\n--------------------------------------------------------------------------------");
gotoxy(4,7);
printf("No.");
gotoxy(12,7);
printf("ITEM NAME");
gotoxy(32,7);
printf("PRICE");
gotoxy(53,7);
printf("QUANTITY");
gotoxy(70,7);
printf("TOTAL");
total=0;
for(i=0;i<=n;i++)
{
Sleep(200);
gotoxy(5,w+9);
printf("%d",i+1);
gotoxy(14,w+9);
printf("%s",bi.item_name[i]);
gotoxy(31,w+9);
printf("%.2f",bi.price[i]);
gotoxy(53,w+9);
printf("%.2f",bi.quant[i]);
gotoxy(68,w+9);
printf("%.2f",bi.price[i]*bi.quant[i]);
total=total+(bi.price[i]*bi.quant[i]);
w=w+2;
}
Sleep(200);
printf("\n--------------------------------------------------------------------------------");
gotoxy(14,w+9);
printf("TOTAL");
gotoxy(66,w+9);
printf("%.2f tk",total);
printf("\n--------------------------------------------------------------------------------");
Sleep(200);

printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT : ");
scanf("%d", &q);

return q;
}

}

int display_bill()
{
int w=0,p=0;
int item_id,f=0,i=0,bill_id=0;
float total;
system("cls");
printf("\nPLEASE ENTER YOUR BILL-ID : ");
scanf("%d",&bill_id);
bifp=fopen("bill.txt","a");
fclose(bifp);
bifp=fopen("bill.txt","r");
while(fscanf(bifp,"%d %s %f %s", &bi.bill_id, &bi.cust_name, &bi.total, &bi.date) != EOF)
{
if(bill_id==bi.bill_id)
{
f=1;
system("cls");
for(p=0;p<3;p++)
{
printf("\n\nSEARCHING");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
system("cls");
}
printf("\t\t\t BILL GENERATOR FOR SHOPPERS!\n");
printf("\n--------------------------------------------------------------------------------");
gotoxy(2,5);
printf("CUSTOMER NAME : %s",bi.cust_name);
gotoxy(36,5);
printf("BILL ID : %d",bi.bill_id);
gotoxy(62,5);
printf("DATE : %s",bi.date);
printf("\n--------------------------------------------------------------------------------");
gotoxy(4,7);
printf("No.");
gotoxy(12,7);
printf("ITEM NAME");
gotoxy(32,7);
printf("PRICE");
gotoxy(53,7);
printf("QUANTITY");
gotoxy(70,7);
printf("TOTAL");
total=0;
for(i=0;i<=bi.n;i++)
{
Sleep(200);
gotoxy(5,w+9);
printf("%d",i+1);
gotoxy(14,w+9);
printf("%s",bi.item_name[i]);
gotoxy(31,w+9);
printf("%f",bi.price[i]);
gotoxy(53,w+9);
printf("%f",bi.quant[i]);
gotoxy(68,w+9);
printf("%f",bi.price[i]*bi.quant[i]);
total=total+(bi.price[i]*bi.quant[i]);
w=w+2;
}
Sleep(200);
printf("\n--------------------------------------------------------------------------------");
gotoxy(14,w+9);
printf("TOTAL");
gotoxy(66,w+9);
printf("%.f tk",total);
printf("\n--------------------------------------------------------------------------------");
break;
}
}

if(f==0)
{
    printf("\n\nSORRY, YOUR BILL-ID DOES NOT MATCH");
}

fclose(bifp);
Sleep(200);
printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT : ");
scanf("%d",&q);
return q;
}

int delete_bill()
{
    int item_id, bill_id = 0, f = 0;
    bifp = fopen("bill.txt", "r");
    system("cls");
    printf("Bill-ID       Customer Name       Total        Date\n");
    while(fscanf(bifp, "%d %s %f %s", &bi.bill_id, &bi.cust_name, &bi.total, &bi.date) != EOF)
    {
        printf("%4d        %12s           %.2f        %s\n", bi.bill_id, bi.cust_name, bi.total, bi.date);
    }
    fclose(bifp);

    printf("\nEnter the corresponding bill id: ");
    scanf("%d", &bill_id);

    bifp = fopen("bill.txt", "r");
    bifp1 = fopen("bill1.c", "w");
    while(fscanf(bifp, "%d %s %f %s", &bi.bill_id, &bi.cust_name, &bi.total, &bi.date) != EOF)
    {
        if(bi.bill_id == bill_id)
        {
            f = 1;
        }
        else
        {
            fprintf(bifp1, "%d %s %f %s",  bi.bill_id, bi.cust_name, bi.total, bi.date);
        }
    }

    fclose(bifp);
    fclose(bifp1);

    remove("bill.txt");
    rename("bill1.c", "bill.txt");
    if(f != 1)
    {
    printf("Bill-ID not found!");
    printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT : ");
    scanf("%d", &q);
    }
    else
    {
    MessageBox(0, "Bill Deleted!", "BGFS", 1);
    //printf("Your bill deleted successfully!");
    printf("\n\nPRESS 1 TO GO TO MAIN MENU AND 0 TO EXIT : ");
    scanf("%d", &q);
    }
return q;
}

int changepass()
{
    FILE *m;
    int i=0,j;
	char pass[23], pass1[23], c, d;
	system("cls");
	printf("Enter a new password: ");
 	while((c=getch()) != 13)
	{
		if(c == '\b')
        {
                printf("\b \b");
                --i;
        }
        else
        {
            pass[i++]=c;
            printf("*");

        }
	}

	pass[i]='\0';


	printf("\nRetype the password: ");
A:
    i=0;
 	while((d=getch()) != 13)
	{
		if(d == '\b')
        {
                printf("\b \b");
                --i;
        }
        else
        {
            pass1[i++]=d;
            printf("*");

        }
	}

	pass1[i]='\0';

    if(strcmp(pass, pass1) == 0)
    {
        remove("password.txt");
        m = fopen("password.txt", "w");
        fprintf(m, "%s", pass);
    }

    if(strcmp(pass, pass1) != 0)
    {
            printf("\nThe passwords doesn't match! Re-enter: ");
            goto A;
    }

    printf("\nNew password saved successfully\n");
    fclose(m);
    printf("\n\nPRESS 1 TO GO TO MAIN MENU: ");
    scanf("%d", &q);

return q;
}

int item_del()
{
        FILE *del, *del1, *del2;
        int item_id, del_line, temp = 1, i=1, flag=0;
        char item_name[10][50], filename[40] = "item.txt";
        float price;

        del=fopen("item.txt","r");
        system("cls");
        printf("Product_ID          Product         Price\n");
        while(fscanf(del,"%s %f %d", &item_name, &price, &item_id) != EOF)
        {
            printf("%4d           %11s          %.3f\n", item_id, item_name, price);
        }
        fclose(del);
        printf(" \n Enter the product ID of the product to be removed:");
        scanf("%d", &del_line);

        del1=   fopen("item.txt","r");
        del2 =  fopen("copy.c", "w");

        while(fscanf(del,"%s %f %d", &item_name, &price, &item_id) != EOF)
            {
                if(item_id == del_line)
                    {
                        i--;
                        //printf("Delete success");
                        MessageBox(0,"Deleted Successfully","BGFS",1);
                        flag = 1;
                    }

                else
                    fprintf(del2, "%s %f %d\n", item_name, price, i);
                i++;
            }
        if(flag == 0)
        {
            printf("\nError, Product not found.");
        }

        fclose(del1);
        fclose(del2);
        remove(filename);
        rename("copy.c", filename);
        printf("\n\nPRESS 1 TO GO TO MAIN MENU: ");
        scanf("%d", &q);
        return q;
}
