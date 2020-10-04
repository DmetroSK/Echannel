#include<stdio.h>
   int x,a,b,pn; int z,option1,option2,option3,option4,option5,option6,option7;int c;
    char c1[20]="1.Cardiology",c2[20]="2.Vascular",c3[30]="3.Women & Child Special",c4[10]="4.VP",c5[10]="5.ENT";
    char d1[20]="Dr.Amal Perera"
    ,d2[40]="Dr.Sunil Liyanage"
    ,d3[40]="Dr.Kamal Jayasuriya"
    ,d4[40]="Dr.Supun Weerasinghe"
    ,d5[40]="Dr.Nihal Jayawickrama"
    ,d6[40]="Dr.Gayan Witharana"
    ,d7[40]="Dr.Viraj Rathnapala"
    ,d8[40]="Dr.Sanju Yasas"
    ,d9[40]="Dr.Viduranga"
    ,d10[40]="Dr.Kavindu Silva"
    ,d11[40]="Dr.Uditha Lakshan"
    ,d12[40]="Dr.Nipun Vijeykoon"
    ,d13[40]="Dr.Anupama Lochana"
    ,d14[40]="Dr.Kavinga Abeysinghe"
    ,d15[40]="Dr.Dananjaya Chamika"
    ,d16[40]="Dr.Sandaru Diguarachchi"
    ,d17[40]="Dr.Chanaka Ranbadagalla"
    ,d18[40]="Dr.Sajith Abeywansha"
    ,d19[40]="Dr.Prasanna Miniruwan"
    ,d20[40]="Dr.AKila Sadakelum"
    ,h1[60]="Genaral Hospital,Colombo"
    ,h2[60]="Castle Street Hospital for Women, Colombo"
    ,h3[100]="De Soysa Hospital for Women (De Soysa Maternity Hospital), Colombo"
    ,h4[60]="Lady Ridgeway Hospital for Children, Colombo"
    ,h5[60]="National Eye Hospital, Colombo"
    ,h6[60]="Sri Jayawardenepura General Hospital, Sri Jayawardenepura"
    ,h7[60]="Durdans Hospital, Colombo"
    ,h8[60]="Lanka Hospitals, Colombo"
    ,h9[60]="Oasis Hospital, Colombo"
    ,h10[60]="Vasan Eye Care Hospital, Colombo"
    ,h11[60]="Pannipitiya Private Hospital, Pannipitiya"
    ,h12[60]="Hemas Hospital, Thalawathugoda"
    ,pp[60]
    ,pa[60];

    void main()
{
    system("cls");
    system("color b");
    mainmenu();
    system("cls");
    submenu();


    }

void mainmenu()
{
    printf("\t\t\t\t\tWELCOME TO THE CHANNELING SYSTEM");
    printf("\nPlease enter your desired category number:\n");
    printf("\n%s\n%s\n%s\n%s\n%s\n\n",c1,c2,c3,c4,c5);
    scanf("%d",&x);



}
void submenu()
{
    if (x==1)
    {   system("cls");
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",d1,d2,d3,d4);
        scanf("%d",&option1);
        switch(option1)


             {case 1:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h2,h3,h4);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
              case 2:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h5,h6,h7,h8);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
              case 3:
                {
                    system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h12,h11,h10,h9);
                    scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                    break;
                }
              case 4:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h3,h7,h5);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
                default:
                {
                     printf("Selections are between 1 and 4");
                }
             }


    }
    else if (x==2)
    {
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",d5,d6,d7,d8);
        scanf("%d",&option2);
        switch(option2)
        {case 1:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h2,h3,h4);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
              case 2:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h5,h6,h7,h8);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
              case 3:
                {
                    system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h12,h11,h10,h9);
                    scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                    break;
                }
              case 4:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h6,h9,h3);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time2();}
                     break;
                 }
                default:
                {
                     printf("Selections are between 1 and 4");
                }
             }
    }
    else if (x==3)
    {
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",d9,d10,d11,d12);
        scanf("%d",&option3);
        switch(option3)
        {case 1:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h2,h3,h4);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 2:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h2,h6,h7,h8);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 3:
                {
                    system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h12,h11,h10,h9);
                    scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                    break;
                }
              case 4:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h3,h4,h10);

                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
                default:
                {
                     printf("Selections are between 1 and 4");
                }
             }
    }
    else  if (x==4)
    {
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",d13,d14,d15,d16);
        scanf("%d",&option4);
        switch(option4)
        {case 1:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h2,h3,h4);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 2:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h5,h6,h7,h8);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 3:
                {
                    system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h12,h11,h10,h9);
                    scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                    break;
                }
              case 4:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h2,h4,h6,h8);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
                default:
                {
                     printf("Selections are between 1 and 4");
                }
             }
    }
    else if (x==5)
    {
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",d17,d18,d19,d20);
        scanf("%d",&option5);
        switch(option5)
        {case 1:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h11,h5,h6);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 2:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h1,h6,h8,h2);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
              case 3:
                {
                    system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h5,h1,h11,h6);
                    scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                    break;
                }
              case 4:
                 {
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n\n",h8,h9,h10,h4);
                     scanf("%d",&c);
                     if(c>=1 && c<=4){system("cls");
                     time();}
                     break;
                 }
                default:
                {
                     printf("Selections are between 1 and 4");
                }
             }
    }


}
void time()
{
    printf("\n\n\t\t\t....Select a suitable time....\t\t\t\n\n");
    printf("1.(8.00a.m-10.00a.m)\n2.(12.30p.m-2.30p.m)\n3.(4.30a.m-6.30p.m)\n4.(6.00p.m-9.00p.m)\n\n");
    scanf("%d",&a);
    if (a>=1&&a<=4)
    {
         system("cls");
        details();
    }

}

void time2()
{

    printf("\n\n\t\t\t....Select a suitable time....\t\t\t\n\n");
    printf("1.(9.00a.m-11a.m)\n2.(1.30p.m-3.30p.m)\n3.(3.30p.m-5.30p.m)\n4.(7.00p.m-11.00p.m)\n\n");
    scanf("%d",&b);
    if (b>=1&&b<=4)
    {
        system("cls");
        details();
    }
}
void details()
{
                 printf("\nEnter Patient Name:\t");
                 scanf("%s",&pp);

                 printf("\nEnter Address:\t");
                 scanf("%s",&pa);

                 printf("\nEnter Contact Number :\t");
                 scanf("%d",&pn);

                 printf("\n\n \t\t....Dear Customer Your Channel Is Booked.....\n\n");

}


