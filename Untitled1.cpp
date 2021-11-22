#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

using namespace std;

class hotel
{

int room_no;
char name[30];
char address[50];
char phone[10];

public:

void main_menu();
void add();
void display();
void rooms();

int check(int);

     };

void hotel::main_menu()
{

int choice;
while(choice!=4)
{

  system("cls");
cout<<"\n\t\t\t\t*************************";
cout<<"\n\t\t\t\t SIMPLE HOTEL MANAGEMENT ";
cout<<"\n\t\t\t\t      * MAIN MENU *";
cout<<"\n\t\t\t\t*************************";
cout<<"\n\n\n\t\t\t1.Book A Room";
cout<<"\n\t\t\t2.Customer Records";
cout<<"\n\t\t\t3.Rooms Allotted";
cout<<"\n\t\t\t4.Exit";

cout<<"\n\n\t\t\tEnter Your Choice: ";
cin>>choice;

switch(choice)
{

case 1:	add();
break;

case 2: display();
break;

case 3: rooms();
break;


case 4: break;

default:
{

cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to   continue....!!";
getch();

}

}

}

}

void hotel::add()
{

  system("cls");
int r,flag;
ofstream fout("marinohotelrecord.txt",ios::app);

cout<<"\n Enter Customer Details";
cout<<"\n ----------------------";
cout<<"\n\n Room no: ";
cout<<"\n Total no. of Rooms - 50";
cout<<"\n Ordinary Rooms from 1 - 30";
cout<<"\n Luxury Rooms from 31 - 45";
cout<<"\n Royal Rooms from 46 - 50";
cout <<"\n Enter The Room no. you want to stay in :- "<<endl;
cin>>r;

flag=check(r);

if(flag)
{

cout<<"\n Sorry..!!!Room is already booked";
}
else

room_no=r;
cout<<" Name: ";
cin>>name;
cout<<" Address: ";
cin>>address;
cout<<" Phone No: ";
cin>>phone;
fout.write((char*)this,sizeof(hotel));
cout<<"\n Room is booked...!!!";
cout<<"\n Press any key to continue.....!!";

getch();
fout.close();

}

void hotel::display()
{

  system("cls");

ifstream fin("marinohotelrecord.txt",ios::in);
int r,flag;

cout<<"\n Enter room no. for a particular customer`s details :- "<<endl;
cin>>r;

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{

  system("cls");
cout<<"\n Customer Details";
cout<<"\n ----------------";
cout<<"\n\n Room no: "<<room_no;
cout<<"\n Name: "<<name;
cout<<"\n Address: "<<address;
cout<<"\n Phone no: "<<phone;
flag=1;
break;

}

}

if(flag==0)
cout<<"\n Sorry Room no. not found or vacant....!!";
cout<<"\n\n Press any key to continue....!!";

getch();
fin.close();
}

void hotel::rooms()
{

  system("cls");

ifstream fin("marinohotelrecord.txt",ios::in);
cout<<"\n\t\t\t    List Of Rooms Allotted";
cout<<"\n\t\t\t    ----------------------";
cout<<"\n\n Room No.\tName\t\tAddress\t\t\t\tPhone No.\n";

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
cout<<"\n\n "<<room_no<<"\t\t"<<name;
cout<<"\t\t"<<address<<"\t\t"<<phone;

}

cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
getch();
fin.close();

}




int hotel::check(int r)
{

int flag=0;

ifstream fin("marinohotelrecord.txt",ios::in);

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{

flag=1;
break;

}

}

fin.close();
return(flag);

}





int main()
{

hotel h;

  system("cls");


    cout<<"\t\t\t\t\t          _____  |____|  _____"<<endl;
    cout<<"\t\t\t\t\t         |_____| __||__ |_____|"<<endl;
    cout<<"\t\t\t\t\t           | |  |__||__|  | |"<<endl;
    cout<<"\t\t\t\t\t           | |  _  ||  _  | |"<<endl;
    cout<<"\t\t\t\t\t           | | |_> || |_| | |"<<endl;
    cout<<"\t\t\t\t\t           | | |_> || | | | |"<<endl;
    cout<<"\t\t\t\t\t           | |____-||-____| |"<<endl;
    cout<<"\t\t\t\t\t           |_______||_______|"<<endl;
    cout<<"\t\t\t\t\t                 |____|       "<<endl;

    cout<<"\t\t\t\t\t*****************************************"<<endl;
    cout<<"\t\t\t\t\t*****************************************"<<endl;
    cout<<"\t\t\t\t\t\t         Welcome     "<<endl;
    cout<<"\t\t\t\t\t\t          To The        "<<endl;
    cout<<"\t\t\t\t\t\t        Development    "<<endl;
    cout<<"\t\t\t\t\t\t           of   "<<endl;
    cout<<"\t\t\t\t\t\t      Marino Hotel    "<<endl;
    cout<<"\t\t\t\t\t\t    Management System"<<endl;
    cout<<"\t\t\t\t\t*****************************************"<<endl;
    cout<<"\t\t\t\t\t*****************************************"<<endl;
    cout<<"\n\t\t\t\t\t\t Developed by:"<<endl;
    cout<<"\n\t\t\t\t\t\t Nawsheen Ahmed Chowdhury"<<endl;
    cout<<"\n\t\t\t\t\t\t ID# 18103377"<<endl;
    cout<<"\n\t\t\t\t\t*****************************************"<<endl;
    cout<<"\n\t\t\t\t\t*****************************************"<<endl;

cout<<"\n\n\n\n\n\n\n\t\t\t\t\tPress any key to continue....!!";

getch();

h.main_menu();
return 0;
}
