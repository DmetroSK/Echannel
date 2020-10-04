#include<stdio.h>

 int x,a,b,pn; int z,option1,option2,option3,option4,option5,option6,option7;int c; char d;
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
    ,ba[4]="Back"
    ,pp[60]
    ,pa[60];

void main()
{    while(2){//for a endless loop//
     system("color b");
    mainmenu();

    if(x==1)
       {doctor_1();
          if(option1==1)
            {hospital_1();
              if(c==1)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }

              else if(c==3)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_1();}

              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_1();}
                    else{mainmenu();
}
                 }
              }

         else if(option1==2)
          {hospital_2();
              if(c==1)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                else if(c==5)
                    {doctor_1();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_2();}
                    else{mainmenu();}
         }
          }

           else if(option1==3)
          {hospital_3();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_1();}

              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_3();}
                    else{mainmenu();}
         }
          }

           else if(option1==4)
          {hospital_4();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_1();}

              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_4();}
                    else{mainmenu();}
         }
          }
           else if(option1==5)
            {mainmenu();}
}
   else if(x==2)
           {doctor_2();
          if(option2==1)
            {hospital_1();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time2();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_2();}

              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_1();}
                    else{mainmenu();
}
                 }
              }

         else if(option2==2)
          {hospital_2();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_2();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_2();}
                    else{mainmenu();}
         }
          }

           else if(option2==3)
          {hospital_3();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_2();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_3();}
                    else{mainmenu();}
         }
          }

           else if(option2==4)
          {hospital_4();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();}
                 else if(c==5)
                {doctor_2();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_4();}
                    else{mainmenu();}
         }
          }
           else if(option2==5)
            {mainmenu();}

}

         else if(x==3)
            {doctor_3();
          if(option3==1)
            {hospital_1();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_3();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_1();}
                    else{mainmenu();
}
                 }
              }

         else if(option3==2)
          {hospital_2();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_3();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_2();}
                    else{mainmenu();}
         }
          }

           else if(option3==3)
          {hospital_3();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_3();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_3();}
                    else{mainmenu();}
         }
          }

           else if(option3==4)
          {hospital_4();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_3();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_4();}
                    else{mainmenu();}
         }
          }
              else if(option3==5)
            {mainmenu();}
}

              else if(x==4)
                {doctor_4();
          if(option4==1)
            {hospital_1();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_4();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_1();}
                    else{mainmenu();
}
                 }
              }

         else if(option4==2)
          {hospital_2();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_4();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_2();}
                    else{mainmenu();}
         }
          }

           else if(option4==3)
          {hospital_3();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_4();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_3();}
                    else{mainmenu();}
         }
          }

           else if(option4==4)
          {hospital_4();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_4();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_4();}
                    else{mainmenu();}
         }
          }
           else if(option4==5)
            {mainmenu();}

}
                 else if(x==5)
                    {doctor_5();
          if(option5==1)
            {hospital_1();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                  else if(c==5)
                {doctor_5();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_1();}
                    else{mainmenu();
}
                 }
              }

         else if(option5==2)
          {hospital_2();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_5();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_2();}
                    else{mainmenu();}
         }
          }

           else if(option5==3)
          {hospital_3();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_5();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_3();}
                    else{mainmenu();}
         }
          }

           else if(option5==4)
          {hospital_4();
              if(c==1)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==2)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==3)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
              else if(c==4)
                {time();
                if(b==1)
                    {details();break;}
                else if(b==2)
                {
                    details();break;
                }
                else if(b==3)
                {
                    details();break;
                }
                else if(b==4)
                {
                    details();break;
                }
                 }
                 else if(c==5)
                {doctor_5();}
              else{printf("\nWrong option\n\nAre you want to continue(Y/N) : ");
              scanf("%s",&d);
                 if(d=='Y' || d=='y')
                    {hospital_4();}
                    else{mainmenu();}
         }
          }
           else if(option5==5)
            {mainmenu();}
}
}

}

void mainmenu()
{
    system("cls");
    printf("\t\t\t\t\tWELCOME TO THE CHANNELING SYSTEM\n\n");
    printf("\n%s\n%s\n%s\n%s\n%s\n\n",c1,c2,c3,c4,c5);
    printf("\nPlease enter your desired category number : ");
    scanf("%d",&x);

}

void doctor_1()
{
        system("cls");
        printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",d1,d2,d3,d4,ba);
        scanf("%d",&option1);
}

void doctor_2()
{
     system("cls");
    printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",d5,d6,d7,d8,ba);
        scanf("%d",&option2);

}

void doctor_3()
{
    system("cls");
    printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",d9,d10,d11,d12,ba);
        scanf("%d",&option3);

}

void doctor_4()
{
    system("cls");
   printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",d13,d14,d15,d16,ba);
        scanf("%d",&option4);
}

void doctor_5()
{
    system("cls");
   printf("\n\nTo select the hospital\n\tEnter the relevant doctor no\n\n");
        printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",d17,d18,d19,d20,ba);
        scanf("%d",&option5);
}

void hospital_1()
{
                     system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",h1,h2,h3,h4,ba);
                     scanf("%d",&c);
}

void hospital_2()
{
    system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",h5,h6,h7,h8,ba);
                     scanf("%d",&c);

}

void hospital_3()
{
     system("cls");
                    printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                    printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",h12,h11,h10,h9,ba);
                    scanf("%d",&c);
}

void hospital_4()
{
    system("cls");
                     printf("\n\nTo select the time\n\tEnter the relevant hospital no\n\n");
                     printf("\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\n",h1,h3,h7,h5,ba);
                     scanf("%d",&c);
}
void time()
{
     system("cls");
    printf("\n\n\t\t\t....Select a suitable time....\t\t\t\n\n");
    printf("1.(8.00a.m-10.00a.m)\n2.(12.30p.m-2.30p.m)\n3.(4.30a.m-6.30p.m)\n4.(6.00p.m-9.00p.m)\n\n");
    scanf("%d",&a);

}

void time2()
{
     system("cls");
    printf("\n\n\t\t\t....Select a suitable time....\t\t\t\n\n");
    printf("1.(9.00a.m-11a.m)\n2.(1.30p.m-3.30p.m)\n3.(3.30p.m-5.30p.m)\n4.(7.00p.m-11.00p.m)\n\n");
    scanf("%d",&b);

}
void details()
{
                 system("cls");

                 printf("\nEnter Patient Name:\t");
                 scanf("%s",&pp);

                 printf("\nEnter Address:\t");
                 scanf("%s",&pa);

                 printf("\nEnter Contact Number :\t");
                 scanf("%d",&pn);

                 printf("\n\n \t\t....Dear Customer Your Channel Is Booked.....\n\n");

                 if(x==1 && option1==1 && c==1 && b==1)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h1);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==1 && c==1 && b==2)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h1);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==1 && b==3)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h1);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==1 && b==4)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h1);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                 else if(x==1 && option1==1 && c==2 && b==1)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h2);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==1 && c==2 && b==2)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h2);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==2 && b==3)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h2);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==2 && b==4)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h2);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                   else if(x==1 && option1==1 && c==3 && b==1)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h3);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==1 && c==3 && b==2)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h3);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==3 && b==3)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h3);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==3 && b==4)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h3);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                   else if(x==1 && option1==1 && c==4 && b==1)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h4);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==1 && c==4 && b==2)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h4);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==4 && b==3)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h4);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==1 && c==4 && b==4)
                 {
                     printf("Doctor Name : %s\n",d1);
                     printf("Hospital : %s\n",h4);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                 else if(x==1 && option1==2 && c==1 && b==1)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h5);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==2 && c==1 && b==2)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h5);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==1 && b==3)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h5);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==1 && b==4)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h5);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                 else if(x==1 && option1==2 && c==2 && b==1)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h6);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==2 && c==2 && b==2)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h6);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==2 && b==3)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h6);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==2 && b==4)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h6);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                   else if(x==1 && option1==2 && c==3 && b==1)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h7);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==2 && c==3 && b==2)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h7);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==3 && b==3)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h7);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==3 && b==4)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h7);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                   else if(x==1 && option1==2 && c==4 && b==1)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h8);
                     printf("Time : 9.00a.m-11a.m ");
                 }
                 else if(x==1 && option1==2 && c==4 && b==2)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h8);
                     printf("Time : 1.30a.m-3.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==4 && b==3)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h8);
                     printf("Time : 3.30a.m-5.30a.m ");
                 }
                 else if(x==1 && option1==2 && c==4 && b==4)
                 {
                     printf("Doctor Name : %s\n",d2);
                     printf("Hospital : %s\n",h8);
                     printf("Time : 7.00a.m-11.00a.m ");
                 }
                 else if(x==2 && option1==2 && c==2 && b==2)
                 {
                     printf("Doctor Name : %s\n",d6);
                     printf("Hospital : %s\n",h6);
                     printf("Time : 12.30a.m-2.30a.m ");
                 }



}



