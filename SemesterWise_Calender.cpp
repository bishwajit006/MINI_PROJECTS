// Only for 2023
#include<bits/stdc++.h>
using namespace std;
int daynumber(int month, int year)
{
   int m=month;
    if(m==0 || m==2 || m==4 || m==6 || m==7 || m==9 || m==11)
        return 31;
    if(m==3 || m==5 || m==8 || m==10)
        return 30;
    if(m==1)
    {
        if(year%400==0 || (year%4==0 && year%100!=0) )
            return 29;
        else
            return 28;
    }
}

string monthname(int monthnumber)
{
    string months[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
      return (months[monthnumber]);
}

int space(int i)
{
   int spaces[]={0,3,3,6,1,4,6,2,5,0,3,5};
    return (spaces[i]);
}

void displaycalender(int year, string semester)
{
    cout<<"\n  Calender of "<<year<<endl;
    cout<<"  SEMESTER: "<<semester<<endl<<endl;
    int days;
    string month;
    if(semester=="Spring" || semester=="spring")
    {
       for(int i=0;i<6;i++)
    {
        days = daynumber(i,year);
        month = monthname(i);

        cout<<"------"<<month<<"------"<<endl;
        cout<<"\nS  M  T  W  TH  F  S"<<endl<<endl;
        int spaces = space(i);
        int week=spaces;
        for(int k=0;k<spaces;k++)
        {
            cout<<"   ";
        }

        for(int j=1 ;j<=days;j++)
        {
            if(j<=9)
            cout<<j<<"  ";
            if(j>=10)
                cout<<j<<" ";
            week++;
            if(week%7==0)
            {
               cout<<endl;
               week=0;
            }


        }
        cout<<"\n\n\n\n";
      }
    }
      else
      {
          {
       for(int i=6;i<12;i++)
    {
        days = daynumber(i,year);
        month = monthname(i);

        cout<<"------"<<month<<"------"<<endl;
        cout<<"\nS  M  T  W  TH  F  S"<<endl<<endl;
        int spaces = space(i);
        int week=spaces;
        for(int k=0;k<spaces;k++)
        {
            cout<<"   ";
        }

        for(int j=1 ;j<=days;j++)
        {
            if(j<=9)
            cout<<j<<"  ";
            if(j>=10)
                cout<<j<<" ";
            week++;
            if(week%7==0)
            {
               cout<<endl;
               week=0;
            }


        }
        cout<<"\n\n\n\n";
      }
      }
    }

}
int main()
{
    int year=2023;
    string semester;
    cout<<"Welcome to DIU BI-Semester-(2023)."<<endl;
    cout<<"Please Enter The SEMESTER Name(Spring/Fall): ";
    cin>>semester;
    displaycalender(year,semester);

    return 0;
}
