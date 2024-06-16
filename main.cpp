#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
    void add_student_record();
    void Display_student_record();
    int modifyRecord();
    int Search_student_record();
    int Delete_student_record();
    int Generate_student_report_card();
    int Display_all_student_records();
    int main();


class stu
{ public://access specifier
 string name[2500];
  char p[4]={"S"};
 int grade[2500],n,i,sum[2500],x=1000;
 int roll_num[2500];
 double average[2500],class_average=0,english_marks[2500],maths_marks[2500],french_marks[2500],
 sesotho_marks[2500],science_marks[2500],social_marks[2500];


int MainMenu()
{
    cout<<"                           St.Peter International School"<<endl;
    cout<<"      Striving to produce well-rounded,confident,educated,responsible individuals to the global citizens"<<endl;
    cout<<"............................................................................................"<<endl;
    cout<<"          Welcome to St.Peter International School, student Report Card System"<<endl;
    cout<<"............................................................................................"<<endl;
    cout<<"                                           MAIN MENU      "<<endl<<endl;
    cout<<"............................................................................................"<<endl;
    cout << "1.Add student record   " << endl;
    cout << "2.Display student record "<<endl;
    cout <<"3.Modify student record "<<endl;
    cout <<"4.Search student record "<<endl;
    cout<< "5.Delete student record "<<endl;
    cout<< "6.Generate student report card "<<endl;
    cout<< "7.Display all student records with class average "<<endl;
    cout<< "8.Exit "<<endl;
    int choice;
    cout<<"Enter your choice in the range (1..8) "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:add_student_record();
        break;
    case 2: Display_student_record();
    break;
    case 3: modifyRecord();
    break;
    case 4 : Search_student_record();
    break;
    case 5: Delete_student_record();
    break;
    case 6: Generate_student_report_card();
    break;
    case 7: Display_all_student_records();
    break;
    case 8:exit(0);
    }


return (0);
}
void add_student_record()
{
cout<<"Enter the number of students you want to record"<<endl;
cin>>n;
cout<<"enter student/students grade "<<endl;
cin>>grade[i];

   for(i=0;i<n;i++)
   {
       roll_num[i]=x;

       cout<<"student roll number is: "<<"S"<<roll_num[i]<<endl;
       cout<<"Enter student "<<i+1<<" name \t";
       cin>>name[i];
       cout<<endl<<endl;
       cout<<"enter the marks scored in English out of 100:  \t";
       cin>>english_marks[i];
       cout<<"enter the marks scored in French out of 100:  \t";
       cin>>french_marks[i];
       cout<<"enter the marks scored in Maths out of 100:   \t";
       cin>>maths_marks[i];
       cout<<"enter the marks scored in Sesotho out of 100:  \t";
       cin>>sesotho_marks[i];
       cout<<"enter the marks scored in Science out of 100:  \t";
       cin>>science_marks[i];
       cout<<"enter the marks scored in Social out of 100:  \t";
       cin>>social_marks[i];

       x++;
       cout<<endl<<endl;
          cout<<"The student record is captured successfully"<<endl;
   cout<<"............................................."<<endl<<endl;
   }
   char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }
//end of add student record function
}
void Display_student_record()
{  int id,count=0;
    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                    Display Student Record Window  "<<endl;
        cout<<"enter student roll_number: "<<"S";
        cin>>id;
 for(i=0;i<n;i++)
  {
       if (id==roll_num[i])
  {
    cout<<"\n student roll number is: "<<"S"<< roll_num[i]<<endl;
    cout<<"student name is: "<<name[i]<<endl;
    cout<<"Grade is: "<<grade[i]<<endl<<endl;


       cout<<"marks scored in English out of 100: "<<english_marks[i]<<endl;
       cout<<"marks scored in French out of 100: "<<french_marks[i]<<endl;
       cout<<"marks scored in Maths out of 100: "<<maths_marks[i]<<endl;
       cout<<"marks scored in Sesotho out of 100: "<<sesotho_marks[i]<<endl;
       cout<<"marks scored in Science out of 100: "<<science_marks[i]<<endl;
       cout<<"marks scored in Social out of 100: "<<social_marks[i]<<endl;
       count++;
    }
 }
 if( count== 0)
           {
               cout<<"record not fount..\n";

           }
  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }
//end of display student record function
}

int modifyRecord()
{
    int id, choice=0,option;



    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                    Modify Student Record Window  "<<endl;
        cout<<"enter student roll_number: "<<"S";
        cin>>id;
  for( int i=0;i<n;i++)
  {
       if (roll_num[i]==id)
  {
    cout<<"\n student roll number is: "<<"S"<< roll_num[i]<<endl;
    cout<<"student name is: "<<name[i]<<endl;
    cout<<"Grade is: "<<grade[i]<<endl<<endl;

       cout<<"marks scored in English out of 100: "<<english_marks[i]<<endl;
       cout<<"marks scored in French out of 100: "<<french_marks[i]<<endl;
       cout<<"marks scored in Maths out of 100: "<<maths_marks[i]<<endl;
       cout<<"marks scored in Sesotho out of 100: "<<sesotho_marks[i]<<endl;
       cout<<"marks scored in Science out of 100: "<<science_marks[i]<<endl;
       cout<<"marks scored in Social out of 100: "<<social_marks[i]<<endl;

while (choice == 0)

       { cout<<endl<<endl;
       cout<<"Options:"<<endl<<endl;
       cout<<"1. change name: \n 2.change grade/class \n 3.change English marks\n 4.change french marks\n 5.change maths marks\n";
       cout<<"6.change sesotho marks \n 7.change science marks\n 8.change social marks\n";
       cout<<"\n what do you want to modify from 1....8?"<<endl;
       cin>>option;
       switch(option)
       {
       case 1:
        {
            cout<<"Enter new name: \n";
            cin>>name[i];
            cout<<"name is successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;

           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

         case 2:
        {
            cout<<"Enter new grade: \n";
            cin>>grade[i];
            cout<<"grade is successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

         case 3:
        {
            cout<<"Enter new English marks: \n";
            cin>>english_marks[i];
            cout<<"English marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

         case 4:
        {
            cout<<"Enter new French marks: \n";
            cin>>french_marks[i];
            cout<<"French marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

             case 5:
        {
            cout<<"Enter new Maths marks: \n";
            cin>>maths_marks[i];
            cout<<"Maths marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

             case 6:
        {
            cout<<"Enter new Sesotho marks: \n";
            cin>>sesotho_marks[i];
            cout<<"Sesotho marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

             case 7:
        {
            cout<<"Enter new Science marks: \n";
            cin>>science_marks[i];
            cout<<" Science marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

             case 8:
        {
            cout<<"Enter new Social marks: \n";
            cin>>social_marks[i];
            cout<<"Social marks successfully modified\n\n";

            cout<<"press 1  to go back to the main menu or 0 to continue to modify"<<endl;
            cin>>choice;
           if( choice== 1)
           {
               MainMenu();
           }

        }
           break;

}

}


    }

 else
 {   cout<<endl;
     cout<<"the student roll number you entered has no match\n";
 }
 cout<<endl<<endl;
  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }
  }


  return (0);
  //end of modify student record function
}

void Search_student_record()
{  int id,count=0;

    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                    Search Student Record Window  "<<endl;
        cout<<"enter student roll_number: "<<"S";
        cin>>id;
  for(i=0;i<n;i++)
  {
       if (id==roll_num[i])
  {
    cout<<"\n student roll number is: "<<"S"<< roll_num[i]<<endl;
    cout<<"student name is: "<<name[i]<<endl;
    cout<<"Grade is: "<<grade[i]<<endl<<endl;


       cout<<"marks scored in English out of 100: "<<english_marks[i]<<endl;
       cout<<"marks scored in French out of 100: "<<french_marks[i]<<endl;
       cout<<"marks scored in Maths out of 100: "<<maths_marks[i]<<endl;
       cout<<"marks scored in Sesotho out of 100: "<<sesotho_marks[i]<<endl;
       cout<<"marks scored in Science out of 100: "<<science_marks[i]<<endl;
       cout<<"marks scored in Social out of 100: "<<social_marks[i]<<endl;
       count++;
    }
 }
 if( count== 0)
           {
               cout<<"record not fount..\n";

           }
  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }
//end of search student record function
}
void Delete_student_record()
{
  int id,count=0;

    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                    Delete Student Record Window  "<<endl;
        cout<<"enter student roll_number: "<<"S";
        cin>>id;
  for(i=0;i<n;i++)
  {
       if (id==roll_num[i])
  {
    cout<<"Are you sure want to delete this record"<<endl;
    cout<<"1. YES\t 2. NO \n";
    int selection;
    cin>>selection;
    if(selection==1)
    {
        for(int j=i;j<n;j++)
        {
            roll_num[j]=roll_num[j+1];
            name[j]=name[j+1];

            english_marks[j]=english_marks[j+1];
            french_marks[j]=french_marks[j+1];
            maths_marks[j]=maths_marks[j+1];
            sesotho_marks[j]=sesotho_marks[j+1];
            science_marks[j]=science_marks[j+1];
            social_marks[j]=social_marks[j+1];

        }
  n--;
            cout <<"record deleted successfully!!\n";

    }
    else
    {
        MainMenu();
    }
       count++;
    }
 }
 if( count== 0)
           {
               cout<<"record not fount..\n";

           }
  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }

//end of delete student record function
}
int  Generate_student_report_card()
{  int id;
    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                     Student Report Window  "<<endl;
        cout<<"enter student roll_number: "<<"S";
        cin>>id;
  for(i=0;i<n;i++)
  {
       if (id==roll_num[i])
  {
    cout<<"\n student roll number is: "<<"S"<< roll_num[i]<<endl;
    cout<<"student name is: "<<name[i]<<endl;
    cout<<"Grade is: "<<grade[i]<<endl<<endl;

 cout<<"Subject \t maximum \t marks scored\n";
       cout<<"English \t 100: \t\t"<<english_marks[i]<<endl;
       cout<<"French  \t 100: \t\t"<<french_marks[i]<<endl;
       cout<<"Maths    \t 100: \t\t"<<maths_marks[i]<<endl;
       cout<<"Sesotho \t 100: \t\t"<<sesotho_marks[i]<<endl;
       cout<<"Science  \t 100: \t\t"<<science_marks[i]<<endl;
       cout<<"Social  \t 100: \t\t"<<social_marks[i]<<endl;
       cout<<"TOTAL \t \t 600 \t\t"<<sum[i]<<endl;
       cout<<"Average \t  "<<average[i]<<endl;
       cout<<"class average  \t "<<class_average<<endl<<endl;

       if(english_marks[i]<50||french_marks[i]<50||
          maths_marks[i]<50||sesotho_marks[i]<50||science_marks[i]<50||social_marks[i]<50)
       {
           cout<<"Result:\t failed\n";
       }
       else if(average[i]<=100&&average[i]>=80)
       {
           cout<< "Result:\t Distinction\n";
       }

       else if(average[i]>=70)
       {
           cout<<"Result:\t First class \n";
       }
        else if(average[i]>=60)
       {
           cout<<"Result:\t Second class \n";
       }
        else if(average[i]>=50)
       {
           cout<<"Result:\t Third class \n";
       }
        else if(average[i]<50)
       {
           cout<<"Result:\t Fail \n";
       }
       cout<<"Signatures:  \n \n";
       cout<<"................ \t ................ \t ................\n";
       cout<<"Teacher          \t Principal        \t Parent          \n";

    }

 else
 {   cout<<endl;
     cout<<"the student roll number you entered has no match\n";
 }
cout<<endl;
 }

  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }
return (0);
//end of generate student report function
}

void Display_all_student_records()
{
   int sum_average;

     for(i=0;i<n;i++)
     {
sum[i]=english_marks[i]+french_marks[i]+maths_marks[i]+
sesotho_marks[i]+science_marks[i]+social_marks[i];
       average[i]=sum[i]/6;
     }
    cout<<"         St.Peter International School,student Report Card System"<<endl;
        cout<<"                    Display Class Results Window  "<<endl;
       cout<<"                     Grade: "<<grade[i]<<endl<<endl;




        cout<<"roll\t";
        cout<<"stud  \t";
        cout<<"English\t";
        cout<<"French\t";
        cout<<"Maths\t";
        cout<<"Sesotho\t";
        cout<<"Science\t";
        cout<<"Social\t";
        cout<<"average\t";
        cout<<"  Result\t";
        cout<<" Class\n";

        cout<<"number\t";
        cout<<"name  \t";
        cout<<"marks\t";
        cout<<"marks\t";
        cout<<"marks\t";
        cout<<"marks\t";
        cout<<"marks\t";
        cout<<"marks\t";
        cout<<"   \t";
        cout<<"   \t";
        cout<<"\t average\n";

  for(i=0;i<n;i++)
  {
       char p[4]={"S"};

        cout<<p<< roll_num[i]<<"\t";
       cout<<name[i]<<"  \t";
       cout<<english_marks[i]<<"\t";
       cout<<french_marks[i]<<"\t";
       cout<<maths_marks[i]<<"\t";
       cout<<sesotho_marks[i]<<"\t";
       cout<<science_marks[i]<<"\t";
       cout<<social_marks[i]<<"\t";
       cout<<average[i]<<"\t";

       if(english_marks[i]<50||french_marks[i]<50||maths_marks[i]
          <50||sesotho_marks[i]<50||science_marks[i]<50||social_marks[i]<50)
       {
           cout<<"failed\t";
       }
       else if(average[i]<=100&&average[i]>=80)
       {
           cout<< "Distinction\t";
       }

       else if(average[i]>=70)
       {
           cout<<"First class \t";
       }
        else if(average[i]>=60)
       {
           cout<<"Second class \t";
       }
        else if(average[i]>=50)
       {
           cout<<"Third class \t";
       }
        else if(average[i]<50)
       {
           cout<<"Fail \t";
       }



  sum_average=+average[i];
  class_average=sum_average/n;
  cout<<"\t"<<class_average<<"\n";

    }



  char choice;
   cout<<"Press Y to go back to the main menu"<<endl;
   cin>>choice;

   if(choice== 'y')
   {
       MainMenu();
   }


//end of display all students record with class average function
}



};

int main()
{   stu  stud;
     stud.MainMenu();

    return 0;
}
