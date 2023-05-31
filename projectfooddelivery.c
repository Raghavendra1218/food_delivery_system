 #include <stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

int search();
void rigstr();
void flogin();
void order();
void order_sum();
void display();
char usrn[15];
FILE *file;
FILE *ordr;
FILE *records;
struct ordrdata{

    char fname[15];
    long long int num;
char rname[30];
char item[10][20];
int ip[10];
int iq[10];
char address[150];
char uname[15];
float tota;



}y;
void afterlogin(){char hi[20];
system("cls");
printf("\033[38;5;143m");
printf("|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
printf("|1)PLACE ORDER                 |\n");
printf("|------------------------------|\n");
printf("|2)VIEW PREVIOUS DETAILS       |\n");
printf("|------------------------------|\n");
printf("|3)LOGOUT                      |\n");
printf("|------------------------------|\n");
printf("|4)EXIT                        |\n");
printf("|==============================|\n");
scanf("%s",hi);
if(strcmp(hi,"1")==0)
{system("cls");
order();}
else if(strcmp(hi,"2")==0){system("cls");
previous_orders();
}
else if(strcmp(hi,"3")==0){system("cls");
first_page();}
else if(strcmp(hi,"4")==0){exit (1);}
else{printf("\033[38;5;1mInvalid entry please try again");
sleep(1);
system("cls");
afterlogin();}

}

long long int g;
void first_page() {
    char a[50];
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\033[38;5;92m \033[5;1m");
    printf("\t\t\t\t\t OOOOO    RRRRRR   DDDDDD     EEEEE   RRRRRR    M       M    EEEEEE\n");
    printf("\t\t\t\t\tO     O   R    R   D     D    E       R     R   M M   M M    E    \n");
    printf("\t\t\t\t\tO     O   R  R     D      D   E       R   R     M   MM  M    E     \n");
    printf("\t\t\t\t\tO     O   RR       D      D   EEEEE   RR        M   M   M    EEEEEE\n");
    printf("\t\t\t\t\tO     O   RRRRR    D     D    E       RRRRR     M       M    E     \n");
    printf("\t\t\t\t\tO     O   R    R   D    D     E       R     R   M       M    E     \n");
    printf("\t\t\t\t\t OOOOO    R     R  DDDD       EEEEEE  R      R  M       M    EEEEEE\n ");
    printf("\033[1;0m\033[38;5;110mAlready registered?\n");
    printf("\033[1;32mEnter 0 if not registered , 1 if already registered: \033[1;0m");
    scanf("%s", a);
    system("cls");
    if(strcmp(a,"0")==0){printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("\033[38;5;18mprocessing your request ");
        sleep(1);
    printf(".");
    sleep(1);
    printf("..");
    sleep(1);
    system("cls");
        rigstr();}
    else if(strcmp(a,"1")==0){
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("\033[38;5;18mprocessing your request ");
        sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    system("cls");
            flogin();}
    else if(strcmp(a,"adminlogin000")==0){
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        char v[20];
    printf("\t\t\t\t\t");
    printf("you are about to login as admin to view orders\n");
     printf("\t\t\t\t\t");
    printf("enter password\n");
    char temp2;
    int l=0;
        while(1)
{temp2=getch();if(temp2=='\r')
                {v[l]='\0';
break;}
else if(temp2=='\b'){if(l>0)
                    {l--;
printf("\b \b");}}
else if(temp2=='\t'||temp2==' ')
                {continue;}
else{v[l]=temp2;
                    l++;printf("*");}}
    if(strcmp(v,"onlyadmins0")==0){
        printf("\033[38;5;18mprocessing your request ");
        sleep(1);
    printf(".");
    sleep(1);
    printf("..");
    sleep(1);
    system("cls");
            display();}
            else printf("incorrect password\n you are redirecting to starting page");
            sleep(1);
            first_page();}
    else
           {
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
            printf("\033[38;5;88mInvalid entry. Please try again.\n");
            sleep(3);
            system("cls");
            first_page();}
    }


struct user_data {
    char fname[30];
    char lname[30];
    long long int num;
    char usrnm[12];
    char pswd[15];
} u,l;

void rigstr() {
    system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t");
printf("\033[38;5;48mREGISTRATION PAGE\n");
printf("\t\t\t\t\t");
    file = fopen("data12.txt", "r");
    printf("\033[38;5;98mEnter the username to be created: \033[38;5;11m");
    scanf("%s", l.usrnm);
     int found = 0;
    while (fread(&u, sizeof(u), 1, file)) {
        if (strcmp(l.usrnm, u.usrnm) == 0) {
                strcpy(l.usrnm,usrn);
            found = 1;
            break;
        }
    }

    fclose(file);

    if (found) {
            system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t");
        printf("\033[38;5;158musername already exists\n");
        sleep(1);
        rigstr();
    } else {

fopen("data12.txt","a");
printf("\t\t\t\t\t");
    printf("\033[38;5;98mEnter your first name:\033[38;5;11m ");
    scanf("%s", l.fname);
    printf("\t\t\t\t\t");
    printf("\033[38;5;98mEnter your last name:\033[38;5;11m ");
    scanf("%s", l.lname);
    printf("\t\t\t\t\t");
    printf("\033[38;5;98mEnter your mobile number\033[38;5;11m ");
    next:scanf("%lld", &l.num);
    if(l.num<=7000000000)

                {printf("\t\t\t\t\t");printf("Invalid mobile number!!!");
goto next;}

                else if(l.num>9999999999)

                {printf("\t\t\t\t\t");printf("Invalid mobile number!!!");goto next;}
    printf("\t\t\t\t\t");
    printf("\033[38;5;98mEnter the password for your account: \033[38;5;11m");
    scanf("%s", l.pswd);
u=l;
    fwrite(&u, sizeof(u), 1, file);
    fclose(file);
    printf("\t\t\t\t\t");
    printf("\033[38;5;2mRegistration is successful. You will be redirected to the login page.\n");
    sleep(1);
    system("cls");
    flogin();}
}
char name[30];
 char un[12], pw[15];
void flogin() {char temp2;
int k,l=0;
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t");
printf("\033[38;5;123mLOGIN PAGE\n");
printf("\t\t\t\t\t");
    file = fopen("data12.txt", "r");
     printf("\033[38;5;223mEnter username:\033[38;5;198m ");
    scanf("%s", un);
    printf("\t\t\t\t\t");
    printf("\033[38;5;223mEnter password:\033[38;5;198m ");
    while(1)
{temp2=getch();if(temp2=='\r')
                {pw[l]='\0';
break;}
else if(temp2=='\b'){if(l>0)
                    {l--;
printf("\b \b");}}
else if(temp2=='\t'||temp2==' ')
                {continue;}
else{pw[l]=temp2;
                    l++;printf("*");}}
    system("cls");
    int found = 0;
    while (fread(&u, sizeof(u), 1, file)) {

        if (strcmp(un, u.usrnm) == 0 && strcmp(pw, u.pswd) == 0) {
                strcpy(name,u.fname);
                strcpy(y.fname,u.fname);
                y.num=u.num;
                g=u.num;
                strcpy(y.uname,u.usrnm);
            found = 1;
            break;
        }
    }

    fclose(file);

    if (found) {
            printf("\t\t\t\t\t");
            printf("\033[38;5;128mWe are verifying your details");
    sleep(1);
    printf("..");
    sleep(1);
    printf("..");
    sleep(1);
    printf("..");
    system("cls");
        printf("\033[1;32mLogin successful.\n");
        printf("Hi %s\n",name);
        sleep(1);
        afterlogin();
    } else {
        printf("\033[38;5;128mWe are verifying your details");
    sleep(1);
    printf("..");
    sleep(1);
    printf("..");
    sleep(1);
    printf("..");
    system("cls");
        printf("\033[1;31mUsername or password is incorrect. Please try again.\n  \033[1;0m");
        printf("not have a account enter 1 for try again enter any other number");
        scanf("%d",&k);
        if(k==1){rigstr();}
        else {
        sleep(2);
        flogin();}
    }
}
void menu(){}

typedef struct {char z[30];}a;
a restrnts[]={{"Hydrabadi Biryani"},
{"Saffron Spice"},
{"Vicky's Restaurant"},
{"New city Dhaba"},
{"Red Bucket Biryani"},
{"Suprabha Hotel"},
{"Nikki Ice Hub"},
{"Ice Magic"},
{"Raghav Curry Point"},
{"Tiffin House"},
{"Brewbakes"},
{"KFC"},
{"Pizza Hut"},
{"Udipi Hotel"},
{"Dosa Adda"},
{"Hotel Swagath"},
{"Chicken Hub"},
{"Shah Ghouse Hotel"},
{"Parris Cafe Bakery"},
{"Domino's"}};
int search(){
    printf("\033[38;5;222mType text to search in available restaurants and press enter\n");
    char f[30],g[30],h[30];
int e,d,l;
printf("\033[38;5;111m");
scanf("%s",f);
strlwr(f);
d=strlen(f);
for(e=0;e<20;e++){
strcpy(g,restrnts[e].z);
strlwr(g);
        if(strncmp(g,f,d)==0){printf("\033[38;5;155m%d.%s\n",e+1,restrnts[e].z);}}
        printf("\033[38;5;255mNow select restaurant by number or you can search again by entering 99\n");
scanf("%d",&l);
return l;}
struct o{char rname[30];
char iname[10][20];
int ip[10];
int iq[10];}p;
int i,total=0;
void order(){
ordr=fopen("orderdata1.txt","w");
    int n,a=1,b;
 printf("\033[1;95m\t\t\t\t\t\tAVAILABLE RESTAURENTS\t\t\t\t\t\t\t\t\t\t\t\t\n");
 printf("\033[1;36m \033[5;1m");
    printf("******************************\n");
    printf("*   1)Hyderabadi Biryani     *\n");
    printf("*   2)Saffron Spice          *\n");
    printf("*   3)Vicky's Restaurant     *\n");
    printf("*   4)New city Dhaba         *\n");
    printf("*   5)Red Bucket Biryani     *\n");
    printf("*   6)Suprabha Hotel         *\n");
    printf("*   7)Nikki Ice Hub          *\n");
    printf("*   8)Ice Magic              *\n");
    printf("*   9)Raghav Curry Point     *\n");
    printf("*  10)Tiffin House           *\n");
    printf("*  11)Brewbakes              *\n");
    printf("*  12)KFC                    *\n");
    printf("*  13)Pizza Hut              *\n");
    printf("*  14)Udipi Hotel            *\n");
    printf("*  15)Dosa Adda              *\n");
    printf("*  16)Hotel Swagath          *\n");
    printf("*  17)Chicken Hub            *\n");
    printf("*  18)Shah Ghouse Hotel      *\n");
    printf("*  19)Parris Cafe Bakery     *\n");
    printf("*  20)Domino's               *\n");
    printf("******************************\n");
 printf("\n");
 printf("\033[1;0m \033[38;5;62m please select according to the number:\033[1;0m\n");
 printf("\033[38;5;30m you can search available resturants by entering 99\n");
 scanf("%d",&n);
 printf("\033[38;5;60m");
 if(n==99){n=search();}
 system("cls");
 switch(n){
    case 1:printf("\033[38;5;130mHYDRABADI BIRYANI HOUSE \n");
    strcpy(p.rname,"Hydrabadi Biryani");
printf("     \033[38;5;63m          MENU\n");
printf("\033[38;5;180m");
printf("   ------------------------------------\n");
printf("   | 1. Chicken Dum Biryani   Rs. 170 |\n");
printf("   | 2. Chilli Chicken        Rs. 200 |\n");
printf("   | 3. Egg Biryani           Rs. 130 |\n");
printf("   | 4. Ginger Chicken        Rs. 230 |\n");
printf("   | 5. Chicken Curry         Rs. 210 |\n");
printf("   | 6. Egg Fried Rice        Rs. 140 |\n");
printf("   | 7. Butter Naan           Rs. 40  |\n");
printf("   ------------------------------------\n");
           printf("\033[38;5;178m Please select the items one by one!!\n");
           printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next");
                total=total+b*170;
strcpy(p.iname[i],"chicken dum biryani");
                p.ip[i]=170;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next");
                total=total+b*200;
                strcpy(p.iname[i],"chilli chicken");
                p.ip[i]=200;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next");
                total=total+b*130;
                strcpy(p.iname[i],"Egg biryani");
                p.ip[i]=130;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next");
                total=total+b*230;
                strcpy(p.iname[i],"Ginger chicken");
                p.ip[i]=230;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*210;
                strcpy(p.iname[i],"Chicken Curry");
                p.ip[i]=210;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*140;
                strcpy(p.iname[i],"Egg fried Rice");
                p.ip[i]=140;
                p.iq[i]=b;
            }
            if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*40;
                strcpy(p.iname[i],"Butter Naan");
                p.ip[i]=40;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 2:printf("SAFFRON SPICE ");
    strcpy(p.rname,"Safforn Spice");
printf("\033[38;5;180m----------------------------------------------\n");
printf("    \033[38;5;63m            MENU                    \n");
printf("  \033[38;5;180m -------------------------------------\n");
printf("   | 1. Chicken Lollipop       Rs. 200 |\n");
printf("   | 2. Chilli Paneer          Rs. 190 |\n");
printf("   | 3. Mix Non Veg Noodles    Rs. 199 |\n");
printf("   | 4. Chicken Dum Biryani    Rs. 250 |\n");
printf("   | 5. Jeera Rice             Rs. 120 |\n");
printf("   | 6. Chicken 65             Rs. 220 |\n");
printf("   -------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*200;
                strcpy(p.iname[i],"Chicken lollipop");
                p.ip[i]=200;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("Do you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*190;
                strcpy(p.iname[i],"Chilli paneer");
                p.ip[i]=190;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*199;
                strcpy(p.iname[i],"Mix Non Veg Noodles");
                p.ip[i]=199;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("Do you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*250;
                strcpy(p.iname[i],"Chicken Dum Biryani");
                p.ip[i]=250;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*120;
                 strcpy(p.iname[i],"Jeera Rice");
                p.ip[i]=120;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*220;
            strcpy(p.iname[i],"Chicken 65");
                p.ip[i]=220;
                p.iq[i]=b;;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
     case 3:printf("VICKY'S RESTAURANT\n");
     strcpy(p.rname,"Vicky's Restaurant");
    printf("\033[38;5;180m----------------------------------------------\n");
    printf("|    \033[38;5;63m           MENU                         |\n");
    printf("\033[38;5;180m----------------------------------------------\n");
    printf("|  1. Chicken Dum Biryani            Rs. 245 |\n");
    printf("|  2. Paneer Butter Masala          Rs. 200  |\n");
    printf("|  3. Tandoori Chicken               Rs. 300 |\n");
    printf("|  4. Boneless Chicken 65            Rs. 210 |\n");
    printf("|  5. Chilli Chicken                 Rs. 220 |\n");
    printf("----------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
           printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*245;
                strcpy(p.iname[i],"Chicken Dum Biryani");
                p.ip[i]=245;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*200;
                strcpy(p.iname[i],"Paneer Butter Masala");
                p.ip[i]=200;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*300;
                strcpy(p.iname[i],"Tandoori Chicken");
                p.ip[i]=300;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*210;
                 strcpy(p.iname[i],"Boneless Chicken 65");
                p.ip[i]=210;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*220;
                 strcpy(p.iname[i],"Chilli Chicken");
                p.ip[i]=220;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
     case 4: printf("NEW CITY DHABA\n");
     strcpy(p.rname,"New City Dhaba");
    printf("\033[38;5;180m---------------------------------------- ------\n");
    printf("|        \033[38;5;63m       MENU                          |\n");
    printf("\033[38;5;180m-----------------------------------------------\n");
    printf("|  1. Veg Dum Biryani                Rs. 180  |\n");
    printf("|  2. Chicken 65 Biryani             Rs. 250  |\n");
    printf("|  3. Mutton Keema Biryani           Rs. 450  |\n");
    printf("|  4. Kaju Biryani                   Rs. 360  |\n");
    printf("-----------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
        printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*180;
                strcpy(p.iname[i],"Veg Dum Biryani");
                p.ip[i]=180;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*250;
                strcpy(p.iname[i],"Chicken 65 Biryani");
                p.ip[i]=250;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*450;
                strcpy(p.iname[i],"Mutton keema Biryani");
                p.ip[i]=450;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*360;
                 strcpy(p.iname[i],"Kaju Biryani");
                p.ip[i]=360;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 5:printf("RED BUCKET BIRIYANI\n");
    strcpy(p.rname,"Red Bucket Biryani");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|           \033[38;5;63m    MENU                           |\n");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|  1. Chicken Mugali Biryani        Rs. 200    |\n");
    printf("|  2. Chicken Kali Mirch Biryani    Rs. 180    |\n");
    printf("|  3. Chicken Kurma Biryani         Rs. 175    |\n");
    printf("|  4. Butter Chicken Biryani        Rs. 175    |\n");
    printf("|  5. Veg Kolapuri Biryani          Rs. 160    |\n");
    printf("|  6. Matter Paneer Biryani         Rs. 165    |\n");
    printf("------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*200;
                strcpy(p.iname[i],"Chicken Mugali Biryani");
                p.ip[i]=200;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*180;
                 strcpy(p.iname[i],"Chicken Kaali Mirch Biryani");
                p.ip[i]=180;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*175;
                strcpy(p.iname[i],"Chicken Kurma Biryani");
                p.ip[i]=175;
                p.iq[i]=b;
            }if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*175;
                strcpy(p.iname[i],"Butter Chicken Biryani");
                p.ip[i]=175;
                p.iq[i]=b;
            }if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*160;
                strcpy(p.iname[i],"Veg Kolapuri Birynai");
                p.ip[i]=160;
                p.iq[i]=b;
            }if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*165;
                strcpy(p.iname[i],"Matter Paneer Birynai");
                p.ip[i]=165;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
     case 6:printf("SUPRABHA HOTEL\n");
     strcpy(p.rname,"Suprabha Hotel");
    printf("\033[38;5;180m-----------------------------------------------\n");
    printf("|             \033[38;5;63m     MENU                       |\n");
    printf("\033[38;5;180m-----------------------------------------------\n");
    printf("|  1. Samber Rice                  Rs. 188    |\n");
    printf("|  2. Curd Rice                    Rs. 124    |\n");
    printf("|  3. Chicken Joint Biryani        Rs. 374    |\n");
    printf("|  4. Veg Manchuria                Rs. 240    |\n");
    printf("|  5. Chicken Noodles              Rs. 250    |\n");
    printf("|  6. Special Mutton Biryani       Rs. 445    |\n");
    printf("-----------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*188;
                strcpy(p.iname[i],"Samber Rice");
                p.ip[i]=188;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*124;
                strcpy(p.iname[i],"Curd Rice");
                p.ip[i]=124;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*374;
                strcpy(p.iname[i],"Chicken joint Biryani");
                p.ip[i]=374;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*240;
                strcpy(p.iname[i],"Veg Manchuria");
                p.ip[i]=240;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*250;
                strcpy(p.iname[i],"Chicken Noodles");
                p.ip[i]=250;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*445;
                strcpy(p.iname[i],"Special Mutton Biryani");
                p.ip[i]=445;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 7:printf("NIKKI ICE HUB\n");
    strcpy(p.rname,"Nikki Ice Hub");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|             \033[38;5;63m    MENU                         |\n");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|  1. Vanilla Scoop Ice Cream       Rs. 30     |\n");
    printf("|  2. Butterscotch                  Rs. 50     |\n");
    printf("|  3. Choco Crunch Tri Cone         Rs. 45     |\n");
    printf("|  4. Frostik                       Rs. 50     |\n");
    printf("|  5. Mango Sundae Yogurt           Rs. 70     |\n");
    printf("|  6. American Nuts Scoop           Rs. 40     |\n");
    printf("|  7. Kesar Pista                   Rs. 60     |\n");
    printf("------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*30;
                strcpy(p.iname[i],"Vanilla Scoop Ice Cream");
                p.ip[i]=30;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*50;
                strcpy(p.iname[i],"Butter Scotch");
                p.ip[i]=50;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*45;
                strcpy(p.iname[i],"Choco Crunch Tri Cone");
                p.ip[i]=45;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*50;
                strcpy(p.iname[i],"Frostik");
                p.ip[i]=50;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*70;
                strcpy(p.iname[i],"Mango Sungae Yogurt");
                p.ip[i]=70;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*40;
                strcpy(p.iname[i],"American Nuts Scoop");
                p.ip[i]=40;
                p.iq[i]=b;
            }
            if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*60;
                 strcpy(p.iname[i],"Kaser Pista");
                p.ip[i]=60;
                p.iq[i]=b;
            }}
            fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 8:printf("ICE MAGIC\n");
    strcpy(p.rname,"Ice Magic");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|              \033[38;5;63m    MENU                        |\n");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|  1. Dry Fruit Thick Shake         Rs. 190    |\n");
    printf("|  2. Strawberry Fruit Milkshake    Rs. 120    |\n");
    printf("|  3. Nutella Brownie Thick Shake   Rs. 180    |\n");
    printf("|  4. Blackcurrant Thick Shake      Rs. 140    |\n");
    printf("|  5. Dairy Milk Chocolate          Rs. 150    |\n");
    printf("|  6. Ferrero Rocher Thick Shake    Rs. 180    |\n");
    printf("------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*190;
                strcpy(p.iname[i],"Dry Fruit Thick Shake ");
                p.ip[i]=190;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*120;
                strcpy(p.iname[i],"Strawberry Fruit Milkshake");
                p.ip[i]=120;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*180;
                strcpy(p.iname[i],"Nutella Brownie Thick Shake");
                p.ip[i]=180;
                p.iq[i]=b;
            }
             if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*140;
                strcpy(p.iname[i],"Black Currant Thick Shake");
                p.ip[i]=140;
                p.iq[i]=b;
            }
             if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*150;
                strcpy(p.iname[i],"Diary Milk Chocolate");
                p.ip[i]=150;
                p.iq[i]=b;
            }
             if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*180;
                strcpy(p.iname[i],"Ferrero Rocher Thick Shake");
                p.ip[i]=180;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
     case 9:printf("RAGHAV CURRY POINT\n");
     strcpy(p.rname,"Raghav Curry Point");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|                 \033[38;5;63m  MENU                       |\n");
    printf("\033[38;5;180m------------------------------------------------\n");
    printf("|  1. Natukodi Curry                Rs. 190    |\n");
    printf("|  2. Boneless Mutton Curry         Rs. 260    |\n");
    printf("|  3. Chicken Liver                 Rs. 190    |\n");
    printf("|  4. Chicken Fry                   Rs. 140    |\n");
    printf("|  5. Plain White Rice              Rs. 61     |\n");
    printf("|  6. Cabbage Pakoda                Rs. 25     |\n");
    printf("|  7. Bomme Fish Curry              Rs. 260    |\n");
    printf("------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                if(a==66){order();}
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*190;
                strcpy(p.iname[i],"Natukodi Curry");
                p.ip[i]=190;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*260;
                strcpy(p.iname[i],"Boneless Mutton Curry");
                p.ip[i]=260;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*190;
                strcpy(p.iname[i],"Chicken Liver");
                p.ip[i]=190;
                p.iq[i]=b;
            }
             if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*140;
                strcpy(p.iname[i],"Chicken Fry");
                p.ip[i]=140;
                p.iq[i]=b;
            }
             if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*61;
                strcpy(p.iname[i],"Plain White Rice");
                p.ip[i]=61;
                p.iq[i]=b;
            }
             if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*25;
                strcpy(p.iname[i],"Cabbage Pakoda");
                p.ip[i]=25;
                p.iq[i]=b;
            }
             if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*260;
                strcpy(p.iname[i],"Bomme Fish curry");
                p.ip[i]=260;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
     case 10:printf("TIFFIN HOUSE\n");
     strcpy(p.rname,"Tiffin House");
    printf("\033[38;5;180m-----------------------------------------------\n");
    printf("|                \033[38;5;63m  MENU                       |\n");
    printf("\033[38;5;180m-----------------------------------------------\n");
    printf("|  1. Puri                         Rs. 60     |\n");
    printf("|  2. Dosa                         Rs. 70     |\n");
    printf("|  3. Bonda                        Rs. 50     |\n");
    printf("|  4. Uttappam                     Rs. 50     |\n");
    printf("|  5. Vada                         Rs. 53     |\n");
    printf("|  6. Idly                         Rs. 40     |\n");
    printf("|  7. Peserattu                    Rs. 75     |\n");
    printf("|  8. Upma                         Rs. 40     |\n");
    printf("-----------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*60;
                strcpy(p.iname[i],"Puri");
                p.ip[i]=60;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*70;
                strcpy(p.iname[i],"Dosa");
                p.ip[i]=70;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*50;
                strcpy(p.iname[i],"Bonda");
                p.ip[i]=50;
                p.iq[i]=b;
            }
              if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*50;
                strcpy(p.iname[i],"Uttappam");
                p.ip[i]=50;
                p.iq[i]=b;
            }
              if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*53;
                strcpy(p.iname[i],"Vada");
                p.ip[i]=53;
                p.iq[i]=b;
            }
              if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*40;
                strcpy(p.iname[i],"Idly");
                p.ip[i]=40;
                p.iq[i]=b;
            }
              if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*75;
                strcpy(p.iname[i],"Peserattu");
                p.ip[i]=75;
                p.iq[i]=b;
            }
              if(a==8){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*150;
                strcpy(p.iname[i],"Upma");
                p.ip[i]=150;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
   case 11:printf("BREWBAKES\n");
   strcpy(p.rname,"Brewbakes");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|               \033[38;5;63m    MENU                            |\n");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|  1. Chicken Mexican Pizza (Regular)       Rs. 199 |\n");
    printf("|  2. Tandoori Paneer Pizza                 Rs. 169 |\n");
    printf("|  3. Chicken Extravaganza Pizza            Rs. 179 |\n");
    printf("|  4. Paneer Makhani Pizza                  Rs. 169 |\n");
    printf("|  5. Double Party Chicken Burger           Rs. 108 |\n");
    printf("|  6. Triple Decker Club Sandwich           Rs. 108 |\n");
    printf("|  7. Non Veg AI Funghi Pasta               Rs. 179 |\n");
    printf("-----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*199;
                strcpy(p.iname[i],"Chicken Mexican Pizza(regular)");
                p.ip[i]=199;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("Do you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*169;
                strcpy(p.iname[i],"Tandoori Paneer Pizza");
                p.ip[i]=169;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("Do you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*179;
                strcpy(p.iname[i],"Chicken Extravaganza Pizza");
                p.ip[i]=179;
                p.iq[i]=b;
            }
                 if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*169;
                strcpy(p.iname[i],"Paneer Makhani Pizza");
                p.ip[i]=169;
                p.iq[i]=b;
                 }
                 if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*108;
                strcpy(p.iname[i],"Double Party Chicken Burger");
                p.ip[i]=108;
                p.iq[i]=b;
                 }
                 if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*108;
                strcpy(p.iname[i],"Triple Decker Club Sandwich");
                p.ip[i]=108;
                p.iq[i]=b;
                 }
                 if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*179;
                strcpy(p.iname[i],"Non Veg AI Funghi Pasta");
                p.ip[i]=179;
                p.iq[i]=b;
                 }}
                 fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
            break;
    case 12:printf("KFC\n");
    strcpy(p.rname,"KFC");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|              \033[38;5;63m     MENU                            |\n");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|  1. 5 Leg pc & 2 Dips Bucket              Rs. 429 |\n");
    printf("|  2. Peri Peri 10 Pc Chicken Strips        Rs. 449 |\n");
    printf("|     & 2 Dips                                      |\n");
    printf("|  3. 2 Chicken Krisper Burgers             Rs. 228 |\n");
    printf("|  4. Chicken Popcorn - Large               Rs. 228 |\n");
    printf("|  5. French Fries - Medium                  Rs. 89 |\n");
    printf("|  6. Classic Chicken Biryani               Rs. 214 |\n");
    printf("|  7. Hot Chicken Wings - 4pc               Rs. 164 |\n");
    printf("|  8. Pepsi PET 475ml                        Rs. 52 |\n");
    printf("-----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*429;
                strcpy(p.iname[i],"5Leg pc & Dips Bucket");
                p.ip[i]=429;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*449;
                strcpy(p.iname[i],"Peri Peri 10 pc Chicken Strips & 2 Dips");
                p.ip[i]=449;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*228;
                strcpy(p.iname[i],"Chicken Krisper Burger");
                p.ip[i]=228;
                p.iq[i]=b;
            }
                 if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*228;
                strcpy(p.iname[i],"Chicken Popcorn - Large");
                p.ip[i]=228;
                p.iq[i]=b;
                 }
                 if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*89;
                strcpy(p.iname[i],"French Fries - Medium");
                p.ip[i]=89;
                p.iq[i]=b;
                 }
                 if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*214;
                strcpy(p.iname[i],"Classic Chicken Biryani");
                p.ip[i]=214;
                p.iq[i]=b;
                 }
                 if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*164;
                strcpy(p.iname[i],"Hot Chicken wings - 4pc");
                p.ip[i]=164;
                p.iq[i]=b;
                 }
                if(a==8){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*52;
                strcpy(p.iname[i],"Pepsi PET 475ml");
                p.ip[i]=52;
                p.iq[i]=b;
                }}
                fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
            break;
    case 13:printf("PIZZA HUT\n");
    strcpy(p.rname,"Pizza Hut");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|                \033[38;5;63m   MENU                           |\n");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|  1. Pepper Barbecue Chicken              Rs. 114 |\n");
    printf("|  2. The 4 Cheese Pizza                   Rs. 319 |\n");
    printf("|  3. Taco Mexicana Non Veg                Rs. 158 |\n");
    printf("|  4. Double Cheese Margherita Pizza       Rs. 189 |\n");
    printf("|  5. Spiced Paneer                        Rs. 249 |\n");
    printf("|  6. Sizzling Schezwan Chicken-New         Rs. 289 |\n");
    printf("|  7. Cheezy Mushroom Magic-New            Rs. 295 |\n");
    printf("|  8. Sprite PET 475ml                      Rs. 52 |\n");
    printf("|  9. Cheese Garlic Bread                  Rs. 149 |\n");
    printf("----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*114;
                strcpy(p.iname[i],"Pepper Barbecue Chicken");
                p.ip[i]=114;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*319;
                strcpy(p.iname[i],"The 4 Cheese Pizza");
                p.ip[i]=319;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*158;
                strcpy(p.iname[i],"Taco Mexicana Non Veg");
                p.ip[i]=158;
                p.iq[i]=b;
            }
                 if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*189;
                strcpy(p.iname[i],"Double Cheese Margerita Pizza");
                p.ip[i]=189;
                p.iq[i]=b;
                 }
                 if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*249;
                strcpy(p.iname[i],"Spiced Paneer");
                p.ip[i]=249;
                p.iq[i]=b;
                 }
                 if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*289;
                strcpy(p.iname[i],"Sizzling Schezwan Chicken-New");
                p.ip[i]=289;
                p.iq[i]=b;
                 }
                 if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*295;
                strcpy(p.iname[i],"Cheezy mushroom Magic- New");
                p.ip[i]=295;
                p.iq[i]=b;
                 }
                if(a==8){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*52;
                strcpy(p.iname[i],"Sprite PET 475ml");
                p.ip[i]=52;
                p.iq[i]=b;
                }
           if(a==9){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*149;
                strcpy(p.iname[i],"Cheese Garlic Bread");
                p.ip[i]=149;
                p.iq[i]=b;
           }}
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
 case 14:printf("UDIPI HOTEL\n");
 strcpy(p.rname,"Udipi Hotel");
    printf("\033[38;5;180m--------------------------------------------------\n");
    printf("|                \033[38;5;63m   MENU                         |\n");
    printf("\033[38;5;180m--------------------------------------------------\n");
    printf("|  1. Plain Dosa                          Rs. 45 |\n");
    printf("|  2. Dosa                             Rs. 20 |\n");
    printf("|  3. Veg Biryani                         Rs. 55 |\n");
    printf("|  4. Plate Meals                        Rs. 100 |\n");
    printf("|  5. Chapathi                            Rs. 30 |\n");
    printf("|  6. Rasam Idly                          Rs. 30 |\n");
    printf("|  7. Wada                                Rs. 32 |\n");
    printf("--------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*45;
                strcpy(p.iname[i],"Plain Dosa");
                p.ip[i]=45;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*20;
                strcpy(p.iname[i],"Dosa");
                p.ip[i]=20;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*55;
                strcpy(p.iname[i],"Veg Biryani");
                p.ip[i]=55;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*100;
                strcpy(p.iname[i],"Plate Meals");
                p.ip[i]=100;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*30;
                strcpy(p.iname[i],"Chapathi");
                p.ip[i]=30;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                 printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*30;
                strcpy(p.iname[i],"Rasam Idly");
                p.ip[i]=30;
                p.iq[i]=b;
            }
            if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*32;
                strcpy(p.iname[i],"Wada");
                p.ip[i]=32;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
            break;
    case 15:printf("DOSA ADDA\n");
    strcpy(p.rname,"Dosa Adda");
    printf("\033[38;5;180m---------------------------------------------------\n");
    printf("|              \033[38;5;63m     MENU                          |\n");
    printf("\033[38;5;180m---------------------------------------------------\n");
    printf("|  1. Idly                                 Rs. 65 |\n");
    printf("|  2. Mysore Bonda                         Rs. 65 |\n");
    printf("|  3. Poori                                Rs. 70 |\n");
    printf("|  4. Alu Masala Dosa                      Rs. 80 |\n");
    printf("|  5. Pesaraattu                           Rs. 85 |\n");
    printf("|  6. Upma                                 Rs. 50 |\n");
    printf("|  7. Sambar Vada                          Rs. 75 |\n");
    printf("---------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*65;
                strcpy(p.iname[i],"Idly");
                p.ip[i]=65;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*65;
                strcpy(p.iname[i],"Mysore Bonda");
                p.ip[i]=65;
                p.iq[i]=b;
            }
            if(a==3){
                printf("Enter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*70;
                strcpy(p.iname[i],"Poori");
                p.ip[i]=70;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*80;
                strcpy(p.iname[i],"Alu Masala Dosa");
                p.ip[i]=80;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*85;
                strcpy(p.iname[i],"Pesaraattu");
                p.ip[i]=85;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*50;
                strcpy(p.iname[i],"Upma");
                p.ip[i]=50;
                p.iq[i]=b;
            }
            if(a==7){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*75;
                strcpy(p.iname[i],"Sambar Vada");
                p.ip[i]=75;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
            break;
    case 16:printf("HOTEL SWAGATH\n");
    strcpy(p.rname,"Hotel Swagath");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|               \033[38;5;63m    MENU                           |\n");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|  1. Burger                               Rs. 220 |\n");
    printf("|  2. Momos                                Rs. 120 |\n");
    printf("|  3. Pizza                                Rs. 350 |\n");
    printf("|  4. Sandwich                             Rs. 159 |\n");
    printf("|  5. Manchurian                           Rs. 250 |\n");
    printf("|  6. Pasta                                Rs. 230 |\n");
    printf("----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*220;
                strcpy(p.iname[i],"Burger");
                p.ip[i]=220;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*120;
                strcpy(p.iname[i],"Momos");
                p.ip[i]=120;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*350;
                strcpy(p.iname[i],"Pizza");
                p.ip[i]=350;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*159;
                strcpy(p.iname[i],"Sandwich");
                p.ip[i]=159;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*250;
                strcpy(p.iname[i],"Manchurian");
                p.ip[i]=250;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*230;
                strcpy(p.iname[i],"Pasta");
                p.ip[i]=230;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 17:printf("CHICKEN HUB\n");
    strcpy(p.rname,"Chicken Hub");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|               \033[38;5;63m    MENU                           |\n");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|  1. Wings                                Rs. 350 |\n");
    printf("|  2. Chicken Burger                       Rs. 198 |\n");
    printf("|  3. Chizza                               Rs. 190 |\n");
    printf("|  4. Momos                                Rs. 160 |\n");
    printf("|  5. Chicken Popcorn                      Rs. 120 |\n");
    printf("----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*350;
                strcpy(p.iname[i],"Wings");
                p.ip[i]=350;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*198;
                strcpy(p.iname[i],"Chicken Burger");
                p.ip[i]=198;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*190;
                strcpy(p.iname[i],"Chizza");
                p.ip[i]=190;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*160;
                strcpy(p.iname[i],"Momos");
                p.ip[i]=160;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*120;
                strcpy(p.iname[i],"Chicken Popcorn");
                p.ip[i]=120;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 18:printf("SHAHG HOUSE HOTEL\n");
    strcpy(p.rname,"Shahg House Hotel ");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|               \033[38;5;63m    MENU                           |\n");
    printf("\033[38;5;180m----------------------------------------------------\n");
    printf("|  1. Chicken Dum Biryani                  Rs. 220 |\n");
    printf("|  2. Chicken Mandi Special                Rs. 260 |\n");
    printf("|  3. Rumali Shawarma                       Rs. 90 |\n");
    printf("|  4. Tandoori Chicken (Half)              Rs. 125 |\n");
    printf("|  5. Chilli Gobi                          Rs. 120 |\n");
    printf("----------------------------------------------------\n");
    printf("\033[38;5;178mPlease select the items one by one!\n");
               printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*220;
                strcpy(p.iname[i],"Chicken Dum Biryani");
                p.ip[i]=220;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*260;
                strcpy(p.iname[i],"Chicken Mandi Special");
                p.ip[i]=260;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*90;
                strcpy(p.iname[i],"Rumali Shawarma");
                p.ip[i]=90;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*125;
                strcpy(p.iname[i],"Tandoori Chicken (Half)");
                p.ip[i]=125;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*120;
                strcpy(p.iname[i],"Chilli Gobi");
                p.ip[i]=120;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 19:printf("PARRIS CAFE BAKERY");
    strcpy(p.rname,"Parris Cafe Bakery");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|                   MENU                            |\n");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|  1. Veg Puff                               Rs. 15 |\n");
    printf("|  2. Paneer Tikka Puff                      Rs. 15 |\n");
    printf("|  3. Chinese Roll                           Rs. 25 |\n");
    printf("|  4. Dark Fudge                           Rs. 110 |\n");
    printf("|  5. Plain Bread 400g                       Rs. 30 |\n");
    printf("|  6. Carrot Cake                            Rs. 45 |\n");
    printf("-----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*15;
                strcpy(p.iname[i],"Veg Puff");
                p.ip[i]=15;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*15;
                strcpy(p.iname[i],"Paneer Tikka Puff");
                p.ip[i]=15;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*25;
                strcpy(p.iname[i],"Chinese Roll");
                p.ip[i]=25;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("Do you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*110;
                strcpy(p.iname[i],"Dark Fudge");
                p.ip[i]=110;
                p.iq[i]=b;
            }if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*30;
                strcpy(p.iname[i],"Plain Bread 400g");
                p.ip[i]=30;
                p.iq[i]=b;
            }
            if(a==6){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*45;
                strcpy(p.iname[i],"Carrot Cake");
                p.ip[i]=45;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;
    case 20:printf("DOMINO'S\n");
    strcpy(p.rname,"Domino's");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|               \033[38;5;63m    MENU                            |\n");
    printf("\033[38;5;180m-----------------------------------------------------\n");
    printf("|  1. Margherita (Cheesy Classic)            Rs. 99 |\n");
    printf("|  2. Paneer Makhani                        Rs. 205 |\n");
    printf("|  3. Pepper Barbecue Chicken               Rs. 165 |\n");
    printf("|  4. Chicken Tikka                         Rs. 235 |\n");
    printf("|  5. Fresh Vegie (Onion & Capsicum)        Rs. 170 |\n");
    printf("-----------------------------------------------------\n");
           printf("\033[38;5;178mPlease select the items one by one!!\n");
                      printf("If you want to go back to restaurant page enter 66 \n");
           for(i=0;a!=0;i++){
            scanf("%d",&a);
            if(a==66){order();}
            if(a==1){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*99;
                strcpy(p.iname[i],"Margherita (Cheesy Classic)");
                p.ip[i]=99;
                p.iq[i]=b;
            }
            if(a==2){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*205;
                strcpy(p.iname[i],"Paneer Makhani");
                p.ip[i]=205;
                p.iq[i]=b;
            }
            if(a==3){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*165;
                strcpy(p.iname[i],"Pepper Barbecue Chicken");
                p.ip[i]=165;
                p.iq[i]=b;
            }
            if(a==4){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*235;
                strcpy(p.iname[i],"Chicken Tikka");
                p.ip[i]=235;
                p.iq[i]=b;
            }
            if(a==5){
                printf("\033[38;5;149mEnter how many items have to be placed of this type?\n");
                scanf("%d",&b);
                printf("\033[38;5;76mDo you want to order another type of item in this restaurant?\n If yes select according to number for next item \n enter 0 to confirm the items amd proceed to next\n");
                total=total+b*170;
                strcpy(p.iname[i],"Fresh Vegie (Onion & Capsicum)");
                p.ip[i]=170;
                p.iq[i]=b;
            }
           }
           fwrite(&p,sizeof(p),1,ordr);
           fclose(ordr);
           break;}
           order_sum();
}

           void order_sum(){system("cls");
               int r,w;
           char j[50];
           printf("\033[38;5;84m\t\t\t\t\t\t ORDER SUMMARY\n");
           ordr=fopen("orderdata1.txt","r");
           while(fread(&p,sizeof(p),1,ordr)){strcpy(y.rname,p.rname);
           printf("%s\n",p.rname);
           for(r=0;r<i-1;r++){printf("%s\n %dX%d\n",p.iname[r],p.iq[r],p.ip[r]);
           strcpy(y.item[r],p.iname[r]);
           y.ip[r]=p.ip[r];
           y.iq[r]=p.iq[r];}}
           fclose(ordr);
           printf("total=\t\t\t\t\t\t\t\t%d\n",total);
           printf("GST and conveniance fee                  Rs%f\n",(float)total*0.1);
           printf("\033[38;5;115mTotal order value to be paid                             %f\n",(float)total*1.1);
           y.tota=total*(1.1);
           printf("\033[38;5;159mDo you want to place this order enter 1 for yes else enter any number\n");
           scanf("%d",&w);
           if(w==1){ printf("\033[38;5;95mEnter address to be delivered\n");
           scanf("%s",j);
            strcpy(y.address,j);
               printf("\t\t\t\t\t\033[1;32mOrder successfully placed\n");
           orderdata();
           orderplaced();}
           else {printf("\033[38;5;41mFor going to restaurant pages enter r or to redirect home  page enter c");
           char  c;
           label:{scanf("%c",&c);
           if (c=='r')order();
           else if(c=='r')
            afterlogin();
           else {printf("\033[38;5;1minvalid entry");
           goto label;}}

           }}
           void orderdata(){records=fopen("list2.txt","a");
           fwrite(&y,sizeof(y),1,records);

           fclose(records);
           }
           void orderplaced(){system("cls");
               printf("\n\n\n\n\n\n\n\t\t\t\t\t\t");
               printf("confirming your order");
               sleep(1);
               printf("*");
               sleep(1);
               printf("*");
               sleep(1);
               printf("*");
               sleep(1);

               system("cls");
               printf("Hey %s\n",y.fname);
               int r;
               printf("\033[38;5;136mThankyou For Placing Order\n");
           printf("\033[38;5;26myour order detaiils as follows:\n");
           ordr=fopen("orderdata1.txt","r");
           rewind(ordr);
           while(fread(&p,sizeof(p),1,ordr)){
           printf("%s\n",p.rname);
           for(r=0;r<i-1;r++){printf("%s\n %dX%d\n",p.iname[r],p.iq[r],p.ip[r]);}}
           fclose(ordr);
           printf("\033[38;5;218mtotal=                                                 %d\n",total);
           printf("GST and conveniance fee                                 Rs%f\n",(float)total*0.1);
           printf("Total order value to be paid                            Rs%f\n",(float)total*1.1);
           printf("\033[38;5;173mOur team will review your request and proccess it\n");
           printf("you will be contacted on %lld\n",g);
           printf("\033[38;5;247myour  order will be delivered in 15min-1hours\n We request to be in patience .enjoy your order!\n Thank you!!");
           printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t for any issue contact:8919899244");
           getch();
           printf("\033[38;5;169myou will be redirecting to home page\n");
           sleep(1);
           afterlogin();
           }
          void display(){system("cls");
              int v=1;
              records=fopen("list2.txt","r");
          rewind(records);
          while(fread(&y,sizeof(y),1,records)){
                printf("%d\n",v);
                printf("\033[38;5;193mRegistered name:\033[38;5;188m%s\n",y.fname);
          printf("\033[38;5;193mmobile number:\033[38;5;188m %lld\n",y.num);
            printf("\033[38;5;193mRestaurant name:\033[38;5;188m%s\n",y.rname);

            printf("\033[38;5;158m%s                                              %dX%d\n",y.item[0],y.ip[0],y.iq[0]);
             if(y.item[1]!=0)
            printf("%s                                              %dX%d\n",y.item[1],y.ip[1],y.iq[1]);
             if(y.ip[2]!=0)
            printf("%s                                              %dX%d\n",y.item[2],y.ip[2],y.iq[2]);
            if(y.ip[3]!=0)
            printf("%s                                              %dX%d\n",y.item[3],y.ip[3],y.iq[3]);
             if(y.ip[4]!=0)
            printf("%s                                              %dX%d\n",y.item[4],y.ip[4],y.iq[4]);
             if(y.ip[5]!=0)
            printf("%s                                              %dX%d\n",y.item[5],y.ip[5],y.iq[5]);
             if(y.ip[6]!="\0")
            printf("%s                                              %dX%d\n",y.item[6],y.ip[6],y.iq[6]);
             if(y.ip[7]!=0)
            printf("%s                                              %dX%d\n",y.item[7],y.ip[7],y.iq[7]);
             if(y.ip[8]!=0)
            printf("%s                                               %dX%d\n",y.item[8],y.ip[8],y.iq[9]);
            printf("\033[38;5;69mtotal amount inclusive of GST and conveniance fee %f\n",y.tota);
            printf("\033[38;42maddress:\033[38;5;147m%s\n",y.address);
            printf("\033[38;5;157mregistered username:\033[38;5;187m%s\n",y.uname);
            v++;}
            fclose(records);
            printf("enter any key to redirect starting page");
            getch();
            system("cls");
        first_page();

            }
            void previous_orders(){
                printf("\t\t\t\t\t\t\tYOUR PREVIOUS ORDER LIST\n");
            int g=1;
                records=fopen("list2.txt","r");
            rewind(records);
             while(fread(&y,sizeof(y),1,records)){if(strcmp(y.uname,un)==0){
                    printf("%d)",g);
                    printf("\033[38;5;47mmobile number: \033[38;5;47m %lld\n",y.num);
            printf("\033[38;5;47mRestaurant name:\033[38;5;47m %s\n",y.rname);

            printf("\033[38;5;129m%s                                              %dX%d\n",y.item[0],y.ip[0],y.iq[0]);
             if(y.item[1]!=0)
            printf("%s                                              %dX%d\n",y.item[1],y.ip[1],y.iq[1]);
             if(y.ip[2]!=0)
            printf("%s                                              %dX%d\n",y.item[2],y.ip[2],y.iq[2]);
            if(y.ip[3]!=0)
            printf("%s                                              %dX%d\n",y.item[3],y.ip[3],y.iq[3]);
             if(y.ip[4]!=0)
            printf("%s                                              %dX%d\n",y.item[4],y.ip[4],y.iq[4]);
             if(y.ip[5]!=0)
            printf("%s                                              %dX%d\n",y.item[5],y.ip[5],y.iq[5]);
             if(y.ip[6]!="\0")
            printf("%s                                              %dX%d\n",y.item[6],y.ip[6],y.iq[6]);
             if(y.ip[7]!=0)
            printf("%s                                              %dX%d\n",y.item[7],y.ip[7],y.iq[7]);
             if(y.ip[8]!=0)
            printf("%s                                               %dX%d\n",y.item[8],y.ip[8],y.iq[9]);
            printf("\033[38;5;137mtotal amount inclusive of GST and conveniance fee \033[38;5;168m%f\n",y.tota);
            printf("\033[38;5;182maddress:\033[38;5;168m%s\n",y.address);

g++;
             }}
             fclose(records);
             printf("\033[38;5;129m\t\t\t\t\t\t for any order realted isuue contact:8919899244\n\t\t\t\t\t\t We happy to serve you.");
            printf("enter any key to reddirect home page");

getch();
system("cls");
afterlogin();}
            int main(){first_page();}
