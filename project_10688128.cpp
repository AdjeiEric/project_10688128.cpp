#include<iostream>
#include <string>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
#include<iomanip>
#include<stdio.h>

using namespace std;

void adm_credential();
string adm_name,alt_name, adm_psw1, adm_psw2, alt_psw, staff_salary, date_emplo, staff_nasnlty;
int num_of_course, num_of_student, num_of_staff;
string name_std, name_staff, staff_id, std_id,new_2_page;
int choice;
char let_choi, acc_decision, del_std_choi, del_staff_choi;

int main()
{
    mainmenu:


    cout<<"\n\n";
    cout<<"                    ****---****---*****---UNIVERSITY OF TALENT FICTIONS---****---****---**** \n"
        <<"                     WELCOME TO UNIVERSITY OF TALENT FICTIONS SCHOOL'S MANAGEMENT SYSTEM PAGE \n\n";

         cout<<"                                                                 Motto: MAKING THE WORLD A TECNOLOIGCAL PLACE \n"
            << "                                                                 Tel: +233 - (0)302 - 213980 \n"
            << "                                                                 Tel: +233 - (0)302 - 213910 \n"
            << "                                                                 P.O. Box TF25\n"
            << "                                                                 Adenta, Sakora 5 \n"

            << "                                                                 copyright © 2018, University of Talent Fictions.   \n";
      cout  << "  --------------------------------------------------------------------------------------------------------------------"<<endl<<endl;

                    system("color f1");
    cout<< "Are you new to this page? yes or no?\n\n:"; cin>>new_2_page; cout<< "\n\n";
            system("cls");

    if (new_2_page=="yes"||new_2_page=="YES"||new_2_page== "y"||new_2_page=="Yes"){
             adm_credential();}
    else{
    goto log_in;}

             log_in:

             cout<< "Enter username \n: " ;
             cin.ignore();
             cout<<endl;
             getline(cin, alt_name);
             cout<< "\n enter password \n:"; cin>>alt_psw; cout<<endl;

                    system("cls");


    if (adm_name==alt_name && alt_psw==adm_psw1 && alt_psw==adm_psw2)
    {
 system("color f1");
    int edStaffL=0,stdMenu=0,editS,editS1,p=0,m,mm=0,h=0,e,del,z=0,x=0, i=0,j=0,r=0,c=0,cNo[10],print,addStaff=0,v0=0,v=0, eSLoop=0;
char addStd, stdToMain;
double totGpt[10],totCredit[10], GPA[10];
string editS1L,bk, staffIntro, intro,stdIntro;
class student
{ public:
  string name[10];
  string LName[10];
  string dob[10];
  string ID[10];
  string sex[10];
  string courses[10][10];
  double gpt[10][10];
  int credit[10][10];
  double score[10][10];
  string gpa[10][10];
};
class staff
{ public:
    string FName[10];
    string LName[10];
    int age[10];
    string courses[10][10];
    string ID[10];
    string sex[10];
    int CNum[10];
};
 staff t;
 student k;
 while(p<=100)
     {
cout<<"Please enter 1 for student's portal .\n\n";
cout<<"Enter 2 for staff's portal.\n\n"
    << "Thank you for your cooperation. \n::";
cin>>intro;
if(intro=="1")
 {   while(stdMenu<=10)
     {
     system("cls");
  cout<<"------> Key in 1 to add a fresh(new) student & allocate them to their courses.\n\n";
  cout<<"------> Key in 2 to Edit student biodata & courses.\n\n";
  cout<<"------> Key in 3 to delete student from the biodata/profile.\n\n";
  cout<<"------> Key in 4 to print the Academic record of student.\n\n";
  cout<<"------> Key in any key to return to menu.\n\n::";
  cin>>stdIntro;
  if(stdIntro=="1")
    {while (z<=10)
        {
    system("cls");
    i++;
    cout<<"To keep record of your entry, we students are numbered as their been registered \n\n";
    cout<<"Student you create initially will be referred/allocated as\n";
    cout<<"Student 1\n";
    cout<<"Enter student "<<i<<"'s first name\n";
    cin>>k.name[i-1];
    cout<<"Enter student "<<i<<"'s last name\n";
    cin>>k.LName[i-1];
    cout<<"Enter student "<<i<<"'s date of birth(in the format:dd/mm/yy)\n";
    cin>>k.dob[i-1];
    cout<<"Enter student "<<i<<"'s ID number\n";
    cin>>k.ID[i-1];
    cout<<"Enter student "<<i<<"'s sex(m or M for male, f or F for female)\n";
    cin>>k.sex[i-1];
    if((k.sex[i-1])=="m"||(k.sex[i-1])=="M")
        k.sex[i-1]="MALE";
    else if ((k.sex[i-1])=="f"||(k.sex[i-1])=="F")
        k.sex[i-1]="FEMALE";
    cout<<"How many courses will "<<k.name[i-1]<<" be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      cin>>k.courses[r][i-1];
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][i-1]<<endl;
    cin>>k.credit[v][i-1];
    cout<<"Enter the exam score for "<<k.courses[v][i-1]<<endl;
    cin>>k.score[v][i-1];
    if((k.score[v][i-1])>=80)
     {(k.gpa[v][i-1])= "A";
     (k.gpt[v][i-1])=12; }
    else if((k.score[v][i-1])>=75&&(k.score[v][i-1])<80)
          {(k.gpa[v][i-1])="B+";
          (k.gpt[v][i-1])=10.5;}
    else if((k.score[v][i-1])>=70&&(k.score[v][i-1])<75)
           {(k.gpa[v][i-1])="B";
           (k.gpt[v][i-1])=9;}
    else if((k.score[v][i-1])>=65&&(k.score[v][i-1])<70)
           {(k.gpa[v][i-1])="C+";
           (k.gpt[v][i-1])=7.5;}
    else if((k.score[v][i-1])>=60&&(k.score[v][i-1])<65)
           {(k.gpa[v][i-1])="C";
           (k.gpt[v][i-1])=6;}
    else if((k.score[v][i-1])>=55&&(k.score[v][i-1])<60)
           {(k.gpa[v][i-1])="D";
           (k.gpt[v][i-1])=3;}
    else if((k.score[v][i-1])>=50&&(k.score[v][i-1])<55)
            {(k.gpa[v][i-1])="E";
            (k.gpt[v][i-1])=1.5;}
    else if((k.score[v][i-1])>=45&&(k.score[v][i-1])<50)
            {(k.gpa[v][i-1])="F";
            (k.gpt[v][i-1])=0.0;}
            totGpt[i-1]+=k.gpt[v][i-1];
            totCredit[i-1]+=k.credit[v][i-1];
      }
      GPA[i-1]=totGpt[i-1]/totCredit[i-1];
    cout<<"Data of "<<k.name[i-1]<<" stored successfully\n";
    cout<<"Do you want to add another student or print "<<k.name[i-1]<<"'s academic record?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of academic record\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
         cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[i-1]<<"                                                                   DOB: "<<k.dob[i-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[i-1]<<endl;
cout<<"Name: "<<k.name[i-1]<<" "<<k.LName[i-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[i-1]<<"         \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][i-1]<<"                                                    \t            "<<k.credit[r][i-1]<<"  \t   "<<k.gpa[r][i-1]<<"  \t   "<<k.gpt[r][i-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     }
    else if(addStd=='a')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }//end stdIntro1 if
    else if(stdIntro=="2")
    { while(x<=10)
          { system("cls");
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-99 to go back\n";
           cin>>editS;
           if (editS==-99)
            break;
           else
           { system("cls");
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"Due to re-calculation of CGPA, you are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<k.name[editS-1]<<" be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][editS-1];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][editS-1]<<endl;
    cin>>k.credit[v][editS-1];
    cout<<"Enter the exam score for "<<k.courses[v][editS-1]<<endl;
    cin>>k.score[v][editS-1];
    if((k.score[v][editS-1])>=80)
     {(k.gpa[v][editS-1])= "A";
     (k.gpt[v][editS-1])=12; }
    else if((k.score[v][editS-1])>=75&&(k.score[v][editS-1])<80)
          {(k.gpa[v][editS-1])="B+";
          (k.gpt[v][editS-1])=10.5;}
    else if((k.score[v][editS-1])>=70&&(k.score[v][editS-1])<75)
           {(k.gpa[v][editS-1])="B";
           (k.gpt[v][editS-1])=9;}
    else if((k.score[v][editS-1])>=65&&(k.score[v][editS-1])<70)
           {(k.gpa[v][editS-1])="C+";
           (k.gpt[v][editS-1])=7.5;}
    else if((k.score[v][editS-1])>=60&&(k.score[v][editS-1])<65)
           {(k.gpa[v][editS-1])="C";
           (k.gpt[v][editS-1])=6;}
    else if((k.score[v][editS-1])>=55&&(k.score[v][editS-1])<60)
           {(k.gpa[v][editS-1])="D";
           (k.gpt[v][editS-1])=3;}
    else if((k.score[v][editS-1])>=50&&(k.score[v][editS-1])<55)
            {(k.gpa[v][editS-1])="E";
            (k.gpt[v][editS-1])=1.5;}
    else if((k.score[v][editS-1])>=45&&(k.score[v][editS-1])<50)
            {(k.gpa[v][editS-1])="F";
            (k.gpt[v][editS-1])=0.0;}
            totGpt[editS-1]+=k.gpt[v][editS-1];
            totCredit[editS-1]+=k.credit[v][editS-1];
      }
      GPA[editS-1]=totGpt[editS-1]/totCredit[editS-1];
      cout<<"Data of "<<k.name[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end stdIntro 2 while
    } //end stdIntro 2 if
     else if(stdIntro=="3")
    { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           totGpt[del-1]=0;
           totCredit[del-1]=0;
           GPA[del-1]=0;
           k.name[del-1]=" ";
           k.LName[del-1]=" ";
           k.dob[del-1]=" ";
           k.ID[del-1]=" ";
           k.sex[del-1]=" ";
           for(int d=0;d<cNo[del-1];d++)
             {k.courses[d][del-1]=" ";
              k.gpt[d][del-1]=0;
              k.credit[d][del-1]=0;
              k.score[d][del-1]=0;
              k.gpa[d][del-1]=" ";
              cout<<"student's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             }
             e++;
            } //end stdIntro 3 loop
          }//end stdIntro 3 if
          else if(stdIntro=="4")
           {system("cls");
           while(h<=10)
                {
            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
           cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[print-1]<<"                                                                   DOB: "<<k.dob[print-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[print-1]<<endl;
cout<<"Name: "<<k.name[print-1]<<" "<<k.LName[print-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[print-1]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][print-1]<<"                                                    \t            "<<k.credit[r][print-1]<<"  \t   "<<k.gpa[r][print-1]<<"  \t   "<<k.gpt[r][print-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
           else
            { system("cls");
                break;
            }
            stdMenu++;}
   }//end stdMenu if
   else if(intro=="2")
         {

          while(mm<=10)
        {system("cls");
            system("color f1");
         cout<<"Enter 1 to add staff\n";
         cout<<"Enter 2 to edit staff\n";
         cout<<"Enter 3 to delete staff\n";
         cout<<"Enter 4 to print the details of a particular staff member\n";
         cout<<"Enter any other key to go back\n";
         cout<<"NOTE! you can't go for option 2 or 3 if you haven't added any staff member\n";
         cin>>staffIntro;
         if (staffIntro=="1")
            { while(addStaff<=10)
                { system("cls");
                    v0++;
    cout<<"To keep track of your entry, we number the staff members you create\n";
    cout<<"For instance, the first staff member you'll create will be referred to as\n";
    cout<<"Staff 1\n";
    cout<<"Enter staff "<<v0<<"'s first name\n";
    cin>>t.FName[v0-1];
    cout<<"Enter staff "<<v0<<"'s last name\n";
    cin>>t.LName[v0-1];
    cout<<"Enter staff "<<v0<<"'s age\n";
    cin>>t.age[v0-1];
    cout<<"Enter staff "<<v0<<"'s ID number\n";
    cin>>t.ID[v0-1];
    cout<<"Enter staff "<<v0<<"'s sex(m or M for male, f or F for female)\n";
    cin>>t.sex[v0-1];
    if((t.sex[v0-1])=="m"||(t.sex[v0-1])=="M")
        t.sex[v0-1]="MALE";
    else if ((t.sex[v0-1])=="f"||(t.sex[v0-1])=="F")
        t.sex[v0-1]="FEMALE";
    cout<<"How many courses will "<<t.FName[v0-1]<<" be lecturing?(maximum is 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<t.CNum[v0-1];r++)
      cin>>t.courses[r][v0-1];
        system("cls");
       cout<<"Data of "<<t.FName[v0-1]<<" stored successfully\n";
    cout<<"Do you want to add another staff member or print "<<t.FName[v0-1]<<"'s details?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of details\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
         cout<<"Details of "<<t.FName[v0-1]<<endl;
         cout<<"Name: "<<t.FName[v0-1]<<" "<<t.LName[v0-1]<<endl;
         cout<<"Age: "<<t.age[v0-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<t.CNum[v0-1];r++)
      cout<<t.courses[r][v0-1];
      cout<<endl;
      cout<<"ID: "<<t.ID[v0-1]<<endl;
      cout<<"Sex: "<<t.sex[v0-1]<<endl;
     cout<<"Enter any key to return to staff menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='a')
          continue;
    else
    {   system("cls");
        break;
    }
       addStaff++;
        } //end add staff loop
            } //end staff intro 1 if
            else if(staffIntro=="2")
            {
            while(edStaffL<=10)
          { system("cls");
           cout<<"Enter the number of the staff member whose details you want to edit( e.g.enter 1 for staff member 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-99 to go back\n";
           cin>>editS;
           if (editS==-99)
            break;
           else
           { system("cls");
             cout<<"What details of staff "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=100)
                    {cout<<"Enter staff "<<editS<<"'s new first name\n";
                     cin>>t.FName[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>t.LName[editS-1];
                     cout<<"Name edit success, the staff member is now referred to as "<<t.FName[editS-1]<<" "<<t.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"You are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<t.FName[editS-1]<<" be lecturing now?(maximum is 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<t.CNum[i-1];r++)
      {cin>>t.courses[r][editS-1];
      }

      cout<<"Data of "<<t.FName[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end staffIntro 2 2 while


            }//end staff intro 2 if
            else if(staffIntro=="3")
            { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           t.FName[del-1]=" ";
           t.LName[del-1]=" ";
           t.ID[del-1]=" ";
           t.sex[del-1]=" ";
           t.age[del-1]=0;
           for(int d=0;d<t.CNum[del-1];d++)
             t.courses[d][del-1]=" ";

              cout<<"staff member's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             e++;
            } //end staffIntro 3 loop
          }//end staffIntro 3 if
          else if (staffIntro=="4")
            {system("cls");
           while(h<=10)
                {
            cout<<"Enter the number of the staff member whose details you wish to print\n";
            cin>>print;
           system("cls");
         cout<<"Details of "<<t.FName[print-1]<<endl;
         cout<<"Name: "<<t.FName[print-1]<<" "<<t.LName[print-1]<<endl;
         cout<<"Age: "<<t.age[print-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<t.CNum[print-1];r++)
      cout<<t.courses[r][print-1];
      cout<<endl;
      cout<<"ID: "<<t.ID[print-1]<<endl;
      cout<<"Sex: "<<t.sex[print-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
            else
            { system("cls");
                break;}
         mm++;
        }//end staff intro loop
      }//end staffIntro if

 p++;}//end main menu loop
//main prog

    }


    else
    {
        cout<< "  ERROR: ----%YOU ARE NOT ELIGIBLE TO THIS PAGE%----\n\n"
            << "  WARNING: CHECK YOUR PASSWORD OR USERNAME \n\n";
            system("pause"); system("cls"); goto log_in;

    }



      cout  << "--------------------------------------------------------------------------------------------------------------------"<<endl;



    return 0;
}

void adm_credential()
{

        cout<< "do you have an account? if yes type y to continue or n to register administrator\n :";
        cin>>acc_decision;
        cout<<'\n';

    if (acc_decision =='N'||acc_decision == 'n')
    {
        cout <<" PLease input username to register administrator. \n Note : case sensitive \n :";
        cin.ignore();
        getline (cin, adm_name);

        cout<<endl;

        cout << "Please input password \n :";cin>>adm_psw1;
        cout << " \n please re-enter password for confirmation \n:"; cin>>adm_psw2;
        cout<<endl;

    if (adm_psw1==adm_psw2)
    {

    cout<< " you have successfully been registered as an administrator.\n"
        << " you now have access to this page by providing your username & password  \n\n";

                system("cls");

    }

    else
    {
        cout << " there was a problem with your registration, \n"
             << " THE PASSWORD ENTERED IS NOT THE SAME & TRY AGAIN \n\n";

                system("cls");


    }}
}




