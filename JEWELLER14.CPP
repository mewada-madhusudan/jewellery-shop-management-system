/*		THIS PROJECT IS ON THE "JEWELLERY MANAGEMENT "*/


#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>

class interface
	{
	 public:
	 void graph();
	 void end();
	 int check();
	 void pmenu();
	 void mainmenu();
	 void smenu();
	 void mastermenu();
	 void callmenu();
	 void order();
	 void employ();

	}in;

class fh
	{
	 public:
		void pwrite();
		void pread();
		void swrite();
		void sread();
		void owrite();
		void oread();
		void delorder();
		void ewrite();
		void eread();
		void delemp();
	}h;
/* This class is defined for the Purchase Record  of the owner where and when he\she brought the raw material for his\her sale.
	This class contains 4 data members.
	1.dealer name-char
	2.jewellery type-char
	3.weight -float
	4.amout -float

AND the 2 member functions
	A.padd()-this function gets the value from the user to add in the record
	B.pview()-this function shows the record of the purchasing history of the owner
*/


  class purchase
    {
	 char dealer[10];
	 char jeweltype[10];
	 float weight;
	 float amount;
      public:
	  void padd();
	  void pview();

    };
/*This class contains all the details about the employee and order placed in the shop for any jewellery
	This class 19 data members combinely
	 1.customer name-char(array)
	 2.address -char (array)
	 3.number of months-integer
	 4.amount-float
	 5.no of month paid-int
	 6.balance to be paid-float
	 7.jewellery type-char(array)
	 8.employee name-char(array)
	 9.contactfloat
	 10.qualification-char(array)
	 11.joining date-char(array)
	 12.salary -int
	 13.department-char(array)
	 14.bill number-int
	 15.weight-int
	 16.paid amount-flaot
	 17.date-char(array)
	 18.order no-int
	 19.employee no-int
AND
	7 member functions
		A.new order -this function gets the details from the user about the order
		B.view order-this function is used for showing the total order given to the owner or order pending
		C.new employee -this function is used for the adding the details of the new employee join the office
		D.view employee-this funtion is used for showing the details of the empolyee working in the shop at present
		E.billing-this function is used for the giving bill slip
		F.mono -this function return the value 0 or 1 after checking the order number exists or not
		G.meno -this function return the value 0 or 1 after checking the employee number exists or not


*/

  class master
    {

	 char custname[50];
	 char addr[50];
	 int no_month;
	 float amount;
	 int no_month_pad;
	 float baltopad;
	 char jeweltype[10];
	 char e_name[50];
	 char contact[15];
	 char qualify[100];
	 char join_date[10];
	 int salary;
	 char depart[10];
	 int billno;
	 int weight;
	 int pamount,bamount;
	 char ddate[15];
	 int ono,eno;

     public :

      void neworder();
      void vieworder();
      void newemp();
      void viewemp();
      void billing();

      int mono(int no)
	 {
	   if(ono==no)
	    return 1;
	   else
	    return 0;
	 }
      int meno(int no)
	 {
	   if(eno==no)
	    return 1;
	   else
	    return 0;
	 }
    }m1;

/*this class contains all the details about the sales done in the shop
	this class contains 9 data members ,this are
	1.customer name -char(array)
	2.address- char(array)
	3.contact-float
	4.jewellery type-char(array)
	5.weight-int
	6.saler name-char(array)
	7.bill no--int
	8.date-char(array)
	9.amount-float
ANd
	2 member functions
		A.sadd()-this function gets the details done by the shop
		B.sview()-this function shows the details of the sales done
*/


  class sales
    {
	char custname[50];
	char addr[50];
	char contact[15];
	char jeweltype[10];
	int weight;
	int amount;
	char s_name[50];
	int billno;
	char ddate[15];
      public:

	void sadd();
	void sview();

    };

/*This function is used for the outline of the console window otherthan that it won't have any use or we can say that it is optional */

void interface::graph()
{
	cleardevice();

	setfillstyle(SOLID_FILL,5);
	bar3d(10,10,630,470,0,1);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	bar3d(10,60,630,470,0,1);
	settextstyle(1, HORIZ_DIR, 5);
	outtextxy(75,10,"JEWELLERY MANAGEMENT ");
	settextstyle(DEFAULT_FONT,0,0);


}

void interface::end()
{
	int gm,gd=DETECT;       //request auto detection
	initgraph(&gd,&gm,"c:\\tc\\bgi");  //initialising graph
	setbkcolor(7);
	setcolor(15);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	settextstyle(7,HORIZ_DIR,7);
	moveto(60,100);
	outtext("Jewellery");
	moveto(120,210);
	outtext("Management ");
	moveto(160,320);
	outtext("System");
	delay(800);
	setcolor(4);
	int i=0;
	while(i<=2*getmaxx()-460)
	{
		line(0,i,i,0);
		i++;
		delay(10);
	}
	setcolor(RED);
	sound(1450);
	delay(20);
	sound(600);
	settextstyle(8,HORIZ_DIR,1);
	setcolor(LIGHTGREEN);
	sound(500);
	delay(5);
	moveto(180,160);
	outtext("Code by: Madhusudan Mewada");
	sound(400);
	delay(23);
	moveto(280,180);
	sound(350);
	delay(50);
	sound(100);
	outtext("Semester-III");
	moveto(280,200);
	sound(250);
	delay(40);
	outtext("Year-II");
	moveto(280,220);
	outtext("2014-17");
	sound(400);
	moveto(180,240);
	outtext("Contact No:8966070213");
	sound(450);
	moveto(180,260);
	delay(20);
	sound(600);
	delay(30);
	outtext("Email: madhusudan.145@gmail.com");
	nosound();
	moveto(10,450);
	getch();
	closegraph();  //closing graphics screen
}

/*This is login function of the program with a single password entry .
any one can enter in the program if and only if the password is correct ,username can be changed.
In this function we have declared an char array and taken input manaully by using getch to hide the password
than we have used a string compare function which is predifined in the header file "STRING.H".
if the string are same than this function will return 1 or 0. */


int interface :: check()

       {
	  int k=0;
		char user[20],pass[10];


		    while(k<3)
		     {
		     cleardevice();
		     graph();
		      rectangle(200,100,400,300);
		      rectangle(290,155,380,180);
		      settextstyle(DEFAULT_FONT,0,0);
		      outtextxy(210,164,"USERNAME : ");
		      rectangle(290,205,380,230);
		      outtextxy(210,214,"PASSWORD : ");
		      rectangle(260,250,320,280);
		      outtextxy(270,260,"ENTER");
		      gotoxy(40,11);
		      cin>>user;
		      gotoxy(40,14);
		      pass[0]=getch();
		      cout<<"*";
		      pass[1]=getch();
		      cout<<"*";
		      pass[2]=getch();
		      cout<<"*";
		      pass[3]=getch();
		      cout<<"*";
		      pass[4]=getch();
		      cout<<"*";
		      pass[5]=getch();
		      cout<<"*";
		      pass[6]='\0';
		      getch();
			if(strcmp(pass,"madesh")==0)
			  {     cout<<"\n";
			     in.graph();
			       settextstyle(2, HORIZ_DIR, 5);
				 setcolor(GREEN);
				 outtextxy(200,320,"Loading....Please Wait!");
				 for(int i=0;i<=360;++i)
					{
					setcolor(WHITE);
					setfillstyle(SOLID_FILL,BROWN);
					circle(300,200,20);
					pieslice(300,200,0,i,20);
					if(i==90)
					delay(200);
					else if(i==270)
					delay(500);
					else
					delay(20);
					}

				 return 1;
			  }
			else
			  {
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(4);
			outtextxy(200,320,"WRONG PASSWORD OR USERNAME");
			outtextxy(200,340,"PLEASE RE-ENTER PASSWORD");
				  delay(500);
				  k++;
				  if(k==3)
				    {
				     outtextxy(200,360,"UNAUTHORIZED PERSON");
				     delay(1000);
				     exit(0);

				    }
			  setcolor(WHITE);
			  }
		     }

       return 0;
    }

void interface::mainmenu()
	{
	   cleardevice();				//clearing the whole screen
	   graph();					//calling the function graph() for layouting the screen
	   rectangle(10,68,630,98);
	   rectangle(180,68,340,98);
	   rectangle(340,68,500,98);
	   settextstyle(2, HORIZ_DIR, 5);
	   outtextxy(30,75,"PURCHASE DETAILS");
	   outtextxy(200,75,"MASTER DETAILS");
	   outtextxy(370,75,"SALES DETAILS");
	   outtextxy(540,75,"EXIT");

	}

void interface::pmenu()
	{
			       rectangle(10,98,180,158);
			       settextstyle(2, HORIZ_DIR, 5);
			       setcolor(WHITE);
			       outtextxy(30,100,"ADD RECORDS");
			       outtextxy(30,130,"VIEW RECORDS");

	}

void interface::mastermenu()
	{

				rectangle(180,98,340,190);
				setcolor(WHITE);
				outtextxy(186,100,"ORDER DETAIL >>");
				outtextxy(186,130,"EMPLOYEE DETAIL >>");
				outtextxy(186,160,"BILLING");

	}

void interface::smenu()
	{
			   rectangle(340,98,500,158);
			   setcolor(WHITE);
			   outtextxy(346,100,"ADD SALE");
			   outtextxy(346,130,"VIEW SALE");
	}


/*this function contains all the intractive things for the user*/
int a[2];
void menu()
     {   char ch;
       main:
       int i=0,k=1,j=-1,l=0,l1=0;

		  in.mainmenu();
       while(1)
	{

	    ch=getch();
	    if(ch==77)//option to move a cursor forward
	      {
			k++;
			in.mainmenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			if(k==1)
			{
			 i=10;j=180;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(30,75,"PURCHASE DETAILS");
			}
			if(k==2)
			{
			 i=180;j=340;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(200,75,"MASTER DETAILS");
			}
			if(k==3)
			{
			 i=340;j=500;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(370,75,"SALES DETAILS");
			}
			if(k==4)
			{
			 i=500;j=630;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(540,75,"EXIT");
			 k=0;
			}
			setcolor(WHITE);
	      }

	  if(ch==80)//option to move cursor down
	      {

		if(k==1)
		{
			in.mainmenu();
			in.pmenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			bar3d(10,98+l,180,128+l,0,1);
			l=l+30;
			if(l==30)
			{
				setcolor(BLACK);
				outtextxy(30,100,"ADD RECORDS");
			}
			else
			{
				setcolor(BLACK);
				outtextxy(30,130,"VIEW RECORDS");
			}
			if(l==60)
			l=0;
		}

		if(k==2)
		{
			in.mainmenu();
			in.mastermenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			bar3d(180,98+l,340,129+l,0,1);
			l=l+30;
			if(l==30)
			{
				setcolor(BLACK);
				outtextxy(186,100,"ORDER DETAIL >>");
			}
			else if(l==60)
			{
				setcolor(BLACK);
				outtextxy(186,130,"EMPLOYEE DETAIL >>");
			}
			else
			{
				setcolor(BLACK);
				outtextxy(186,160,"BILLING");
			}

			if(l==90)
			l=0;
		}
		if(k==3)
		{
			in.mainmenu();
			in.smenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(WHITE);
			bar3d(340,98+l,500,128+l,0,1);
			l=l+30;
			if(l==30)
				{
				   setcolor(BLACK);
				   outtextxy(346,100,"ADD SALE");
				}
			else
				{
				   setcolor(BLACK);
				   outtextxy(346,130,"VIEW SALE");
				}

			if(l==60)
			l=0;

		}
		setcolor(WHITE);
	      }
	if(ch==75)//option to move a cursor backward
	      {
			k--;
			in.mainmenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			if(k==1)
			{
			 i=10;j=180;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(30,75,"PURCHASE DETAILS");
			}
			if(k==2)
			{
			 i=180;j=340;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(200,75,"MASTER DETAILS");
			}
			if(k==3)
			{
			 i=340;j=500;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(370,75,"SALES DETAILS");
			}
			if(k==0)
			{
			 i=500;j=630;
			 bar3d(i,68,j,98,0,1);
			 outtextxy(540,75,"EXIT");
			 k=4;
			}
			if(k>4|k<1)
			k=4;

			setcolor(WHITE);
	      }
	  if(ch==72)//option to move cursor up
	      {

		if(k==1)
		{
			in.mainmenu();
			in.pmenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			bar3d(10,98+l,180,128+l,0,1);
			l=l+30;
			if(l==30)
			{
				setcolor(BLACK);
				outtextxy(30,100,"ADD RECORDS");
			}
			else
			{
				setcolor(BLACK);
				outtextxy(30,130,"VIEW RECORDS");
			}
			if(l==60)
			l=0;
		}

		if(k==2)
		{
			in.mainmenu();
			in.mastermenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(BLACK);
			bar3d(180,68+l1,340,99+l1,0,1);
			l1=l1-30;
			if(l1==0)
			{
				setcolor(BLACK);
				outtextxy(186,100,"ORDER DETAIL >>");
			}
			else if(l1==30)
			{
				setcolor(BLACK);
				outtextxy(186,130,"EMPLOYEE DETAIL >>");
			}
			else
			{
				setcolor(BLACK);
				outtextxy(186,160,"BILLING");
			}

			if(l1<=0)
			l1=90;

		}
		if(k==3)
		{
			in.mainmenu();
			in.smenu();
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			settextstyle(2, HORIZ_DIR, 5);
			setcolor(WHITE);
			bar3d(340,98+l,500,128+l,0,1);
			l=l+30;
			if(l==30)
				{
				   setcolor(BLACK);
				   outtextxy(346,100,"ADD SALE");
				}
			else
				{
				   setcolor(BLACK);
				   outtextxy(346,130,"VIEW SALE");
				}

			if(l==60)
			l=0;

		}
		setcolor(WHITE);
	      }

	  if(ch=='e')
		exit(0);

	  a[0]=k;
	  a[1]=l;
	  if(ch==13)
	  in.callmenu();

	}
      }

void interface :: order()
	{
		       char ch;
		       OD:
		       cleardevice();

		       in.graph();
		       rectangle(100,100,530,370);

gotoxy(30,12);				    cout<<"1. NEW ORDER";
gotoxy(30,13);				    cout<<"2. VIEW ORDER";
gotoxy(30,14);				    cout<<"3. DELETE ORDER";
gotoxy(30,15);				    cout<<"4. BACK; ";

					    ch=getch();

				    switch(ch)
				      {
				       case '1':
					    {
					    h.owrite();
					    goto OD;
					    }
				       case '2':
					    {
					    h.oread();
					    goto OD;
					    }
				       case '3':
					    {
					    h.delorder();
					    goto OD;
					    }
				       case '4':
					    return ;
				       default :
					    {
gotoxy(30,19);					     cout<<"PLEASE ENTER VALID INPUT ";
					     goto OD;
					    }
				      }
	}

void interface :: employ()
	{
		       char ch;
		       OD:
		       cleardevice();

		       in.graph();
		       rectangle(100,100,530,370);

gotoxy(30,12);				    cout<<"1. NEW EMPLOYEE";
gotoxy(30,13);				    cout<<"2. VIEW EMPLOYEE";
gotoxy(30,14);				    cout<<"3. REMOVE EMPLOYEE";
gotoxy(30,15);				    cout<<"4. BACK; ";

					    ch=getch();

				    switch(ch)
				      {
				       case '1':
					    {
					    h.ewrite();
					    goto OD;
					    }
				       case '2':
					    {
					    h.eread();
					    goto OD;
					    }
				       case '3':
					    {
					    h.delemp();
					    goto OD;
					    }
				       case '4':
					    return ;
				       default :
					    {
gotoxy(30,19);					     cout<<"PLEASE ENTER VALID INPUT ";
					     goto OD;
					    }
				      }
	}




void interface :: callmenu()
{
  if(a[0]==1 && a[1]==30)
   h.pwrite();
  if(a[0]==1 && a[1]==0)
   h.pread();
  if(a[0]==2 && a[1]==30)
   order();
  if(a[0]==2 && a[1]==0)
   employ();
  if(a[0]==2 && a[1]==30)
   m1.billing();
  if(a[0]==3 && a[1]==0)
   h.swrite();
  if(a[0]==3 && a[1]==30)
   h.sread();
  if(a[0]==0 && a[1]==0)
   in.end();
   exit(0);
}


void purchase :: padd()
	    {
	     cleardevice();
	     in.graph();

gotoxy(30,13);	     cout<<"DEALER :";
gotoxy(30,14);	     cout<<"JEWELTYPE :";
gotoxy(30,15);	     cout<<"TOTAL WEIGHT :";
gotoxy(30,16);	     cout<<"AMOUNT :";
gotoxy(45,13);	     gets(dealer);
gotoxy(45,14);	     cin>>jeweltype;
gotoxy(45,15);	     cin>>weight;
gotoxy(45,16);	     cin>>amount;
	    }


void purchase :: pview()
	  {
		     cleardevice();
		     in.graph();


gotoxy(30,13);	     cout<<"DEALER :";
		     cout<<dealer;
gotoxy(30,14);	     cout<<"JEWELTYPE :";
		     cout<<jeweltype;
gotoxy(30,15);	     cout<<"TOTAL WEIGHT :";
		     cout<<weight;
gotoxy(30,16);	     cout<<"AMOUNT :";
		     cout<<amount;

	  }

void master :: neworder()
	  {
		     cleardevice();
		     in.graph();


gotoxy(30,12);	      cout<<"ENTER ORDER NO :";

gotoxy(30,13);	      cout<<"CUSTOMER NAME :";
gotoxy(30,14);	      cout<<"ADDRESS :";
gotoxy(30,15);	      cout<<"JEWEL TYPE :";
gotoxy(30,16);	      cout<<"NO OF GRAMS :";
gotoxy(30,17);	      cout<<"TOTAL AMOUNT :";
gotoxy(30,18);	      cout<<"PAID AMOUNT :";
gotoxy(30,19);	      cout<<"BALANCE AMOUNT :";
gotoxy(30,20);	      cout<<"DATE OF DELIVERY :(dd-mm-yy)";
gotoxy(45,12);	      cin>>ono;
		      fflush(stdin);
gotoxy(45,13);	      gets(custname);
		      fflush(stdin);
gotoxy(45,14);	      cin>>addr;
		      fflush(stdin);
gotoxy(45,15);	      cin>>jeweltype;
gotoxy(45,16);	      cin>>weight;
gotoxy(45,17);	      cin>>amount;
gotoxy(45,18);	      cin>>pamount;
gotoxy(45,19);	      cin>>bamount;
		      fflush(stdin);
gotoxy(30,20);	      cin>>ddate;


	  }

void master :: vieworder()
	 {
		     cleardevice();
		     in.graph();


gotoxy(30,12);	      cout<<"ORDER NO. :";
		      cout<<ono;
gotoxy(30,13);	      cout<<"CUSTOMER NAME :";
		      cout<<custname;
gotoxy(30,14);	      cout<<"ADDRESS :";
		      cout<<addr;
gotoxy(30,15);	      cout<<"JEWEL TYPE :";
		      cout<<jeweltype;
gotoxy(30,16);	      cout<<"NO OF GRAMS :";
		      cout<<weight;
gotoxy(30,17);	      cout<<"TOTAL AMOUNT :";
		      cout<<amount;
gotoxy(30,18);	      cout<<"PAID AMOUNT :";
		      cout<<pamount;
gotoxy(30,19);	      cout<<"BALANCE AMOUNT :";
		      cout<<bamount;
gotoxy(30,20);	      cout<<"DATE OF DELIVERY :";
		      cout<<ddate;

	 }



void master :: newemp()
	   {
		     cleardevice();
		     in.graph();


gotoxy(30,12);	     cout<<"ENTER EMPLOYEE ID :";
gotoxy(30,13);	     cout<<"EMPLOYEE NAME :";
gotoxy(30,14);	     cout<<"ADDRESS :";
gotoxy(30,15);	     cout<<"contact";
gotoxy(30,16);	     cout<<"QUALIFICATION :";
gotoxy(30,17);	     cout<<"JOINING DATE(dd-mm-yy)";
gotoxy(30,18);	     cout<<"DEPARTMENT :";
gotoxy(30,19);	     cout<<"SALARY :";
gotoxy(45,12);	     cin>>eno;
gotoxy(45,13);	     gets(e_name);
gotoxy(45,14);	     cin>>addr;
gotoxy(45,15);	     cin>>contact;
gotoxy(45,16);	     cin>>qualify;
gotoxy(45,17);	     cin>>join_date;
gotoxy(45,18);	     cin>>depart;
gotoxy(45,19);	     cin>>salary;

	   }

void master :: viewemp()
	   {
		     cleardevice();
		     in.graph();


gotoxy(30,12);	     cout<<"EMPLOYEE ID :";
		     cout<<eno;
gotoxy(30,13);	     cout<<"EMPLOYEE NAME :";
		     cout<<e_name;
gotoxy(30,14);	     cout<<"ADDRESS :";
		     cout<<addr;
gotoxy(30,15);	     cout<<"contact";
		     cout<<contact;
gotoxy(30,16);	     cout<<"QUALIFICATION :";
		     cout<<qualify;
gotoxy(30,17);	     cout<<"JOINING DATE";
		     cout<<join_date;
gotoxy(30,18);	     cout<<"DEPARTMENT :";
		     cout<<depart;
gotoxy(30,19);	     cout<<"SALARY :";
		     cout<<salary;

	   }



void master :: billing()
     {
		     cleardevice();
		     in.graph();

       cout<<"BILL NO."<<billno;
       cout<<"CUSTOMER NAME  :"<<custname;
       cout<<"ADDRESS : "<<addr;
       cout<<"DATE :";
       cout<<ddate;
       cout<<"JEWEL TYPE :"<<jeweltype;
       cout<<"NO. OF GRAMS :"<<weight;
       cout<<"AMOUNT :"<<amount;

      }
void sales :: sadd()
	      {
		     cleardevice();
		    in. graph();


gotoxy(30,12);		cout<<"CUSTOMER NAME :";
gotoxy(30,13);		cout<<"ADDRESS :";
gotoxy(30,14);		cout<<"CONTACT NO :";
gotoxy(30,15);		cout<<"JEWEL TYPE :";
gotoxy(30,16);		cout<<"NO OF GRAMS :";
gotoxy(30,17);		cout<<"TOTAL AMOUNT :";
gotoxy(30,18);		cout<<"DATE TIME :(dd-mm-yy)";
gotoxy(30,19);		cout<<"SALESMAN NAME : ";
gotoxy(30,20);		cout<<"BILL NO :";
gotoxy(45,12);		gets(custname);
gotoxy(45,13);		cin>>addr;
gotoxy(45,14);		cin>>contact;
gotoxy(45,15);		cin>>jeweltype;
gotoxy(45,16);		cin>>weight;
gotoxy(45,17);		cin>>amount;
gotoxy(45,18);		cin>>ddate;
gotoxy(45,19);		cin>>s_name;
gotoxy(45,20);		cin>>billno;

	      }


void sales :: sview()
	   {
		     cleardevice();
		     in.graph();


gotoxy(30,12);		 cout<<"CUSTOMER NAME :";
			 cout<<custname;
gotoxy(30,13);		 cout<<"ADDRESS :";
			 cout<<addr;
gotoxy(30,14);		 cout<<"CONTACT NO :";
			 cout<<contact;
gotoxy(30,15);		 cout<<"JEWEL TYPE :";
			 cout<<jeweltype;
gotoxy(30,16);		 cout<<"NO OF GRAMS :";
			 cout<<weight;
gotoxy(30,17);		 cout<<"TOTAL AMOUNT :";
			 cout<<amount;
gotoxy(30,18);		 cout<<"DATE TIME :";
			 cout<<ddate;
gotoxy(30,19);		 cout<<"SALESMAN NAME : ";
			 cout<<s_name;
gotoxy(30,20);		 cout<<"BILL NO :";
			 cout<<billno;
	   }

/*
this function is used for the writing the purchase details in the file named as pmain.txt*/


void fh :: pwrite()
  {
    purchase p;					//this is the object of class purchase
    ofstream f1;                		//this is the object of ofstream
    p.padd();					//calling the function padd() using the object p
    f1.open("pmain.dat",ios::app|ios::binary);	//opening the file in append and binary mode for the security
    f1.write((char*)&p,sizeof(p));		//passing the data to the file
    f1.close();					//closing the file
  }

/*this function is used for the reading from the file pmain.txt */
void fh :: pread()
   {
    purchase p;					//this is the object of class purchase
    ifstream f1;                                //this is the object of ifstream
    f1.open("pmain.dat",ios::in|ios::binary);   //opening the file in input and binary mode for the security
    while(f1.read((char*)&p,sizeof(p)))         //reading from the file and repeating it untill end of file reached
      {

	p.pview();				//calling pview() function with the help of object of the class purchase
gotoxy(30,19);	cout<<"PRESS >>";
	getch();

      }
    f1.close();					//closing the file
   }

/*this function is used for writing in the file all the sales record */
void fh :: swrite()
  {
    sales s;					//this is the object of the class sales declared above
    fstream f1;					//object of the ofstream
    s.sadd();					//calling the sadd() function it will get all the details of the sales from the user
    f1.open("smain.txt",ios::app|ios::binary);  ////opening the file in append and binary mode for the security
    f1.write((char*)&s,sizeof(s));		//writing in the file smain.txt
    f1.close();					//closing the file smain.txt
  }

/*this function is used for the reading sales records from the file the file*/

void fh :: sread()
   {
    sales s;					//object of the class sales
    fstream f1;					//object of the fstream
    f1.open("smain.txt",ios::in|ios::binary);	////opening the file in input and binary mode for the security

    while(f1.read((char*)&s,sizeof(s)))         //reading from the smain.txt untill the end of file is reached
      {

	s.sview();				//calling function sview to show details
gotoxy(30,22);	cout<<"PRESS ANY KEY TO NEXT";
	getch();
      }
    f1.close();					//closing the file smain.txt
   }

/*this function is used for the writing in the file omain.txt which contains all the details of order placed*/

void fh :: owrite()
  {
    master m;					//object of the class master
    fstream f1;					//object of fstream
    f1.open("omain.txt",ios::app|ios::binary);  //opening the file in append and binary mode for the security
    m.neworder();                               //calling the function neworder() to add new record in the omain.txt
    f1.write((char*)&m,sizeof(m));		//writing in the file omain.txt
    f1.close();					//closing the file omain.txt
  }

/*this function is used for reading from the omain.txt which contains all the order record */

void fh :: oread()
   {
    master m;					//objecdt of the class master
    fstream f1;					//object of the fstream
    f1.open("omain.txt",ios::in|ios::binary);	//opening file omain.txt
      if(!f1)                                   //checking condition whwther the file exists or not
	   {
gotoxy(30,22);	    cout<<"FILE NOT FOUND";
	    delay(800);
	   }
       else
       {
	    while(!f1.eof())			//repeating the commands untill end of file is reached
	      {
	      f1.read((char*)&m,sizeof(m));	//reading from the file omain.txt
		m.vieworder();			//calling the function vieworder()
gotoxy(30,22);	cout<<"PRESS ANY KEY TO NEXT";
		getch();

	      }
	}
    f1.close();					//closing the file
   }

/*this function is used for deleting the the order completed*/

void fh :: delorder()
	       {
		 master m;			//object of the class master

		    ofstream f2;                //object of the ofstream
		    f2.open("temp.txt",ios::out|ios::binary);      //opening the temprary file in out and binary mode
		    ifstream f1;		//object of the ifstream
		    f1.open("omain.txt",ios::in|ios::binary);      //opening the file omain.txt

		    int rno;			//declaring a temprary variable
		    char found='y',confirm='n';
gotoxy(30,22);	 	    cout<<"ENTER ORDER NO";
			    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))  //reading from the file while end of file reached
		      {

			 if(m.mono(rno))		//passing the rno to the function mono ,which will return 1 or 0
			 {
			    m.vieworder();		//calling the function view order
			    getch();
			    found='t';
gotoxy(30,22);		    cout<<"PRESS Y TO COFIRM DELETION OF ORDER :";
			    cin>>confirm;
			      if(confirm=='n'||confirm=='N')         //checking whether the user really want to delete or not
			      f2.write((char*)&m,sizeof(m));	     //if condition is true user don't want to delete and it will be return in the temprary file

			   }
			 else
			  {
			     f2.write((char*)&m,sizeof(m));	     //condition is false record will be written in the file
			  }
		      }
			   if(found=='f')
			     cout<<"RECORD NOT FOUND";
			     f1.close();		//closing the omain.txt file
			     f2.close();                //closing the temprary file
			     remove("omain.txt");              //removing the omain.txt file
			     rename("temp.txt","omain.txt");   //renameing the tepmrary file to omain.txt
	       }

/*this function is used for writing the employee information in the file emain.txt*/

void fh :: ewrite()
  {
    master e;					//object of the master class
    fstream f1;					//object of the fstream
    e.newemp();                                 //calling the newemp() function to get the data o employee
    f1.open("emain.txt",ios::app|ios::binary);	//opening the file in append and binary mode for security
    f1.write((char*)&e,sizeof(e));		//writing in the file emain.txt
    f1.close();					//closing the file
  }

/*this function is used for reading the file emain.txt	*/

void fh :: eread()
   {
    master e;					//object of the class master
    fstream f1;					//object of the fstream
    f1.open("emain.txt",ios::in|ios::binary);   //opening the file emain.txt in the input and binary mode
      if(!f1)                                   //checking condition whwther the file exists or not
	   {
gotoxy(30,22);	    cout<<"FILE NOT FOUND";
	    delay(800);				//giving delay of 800 in the next screen
	   }
       else
       {
	    while(!f1.eof())			//repeating the commands untill end of file is reached
	      {
	      f1.read((char*)&e,sizeof(e));	//reading from the file omain.txt
		e.viewemp();			//calling the function vieworder()
gotoxy(30,22);	cout<<"PRESS ANY KEY TO NEXT";
		getch();

	      }
	}

    f1.close();
   }


/*this function is used for the deleting the record of the employee left the job*/

void fh :: delemp()
	       {
		  master m;			//object of master class

		    ofstream f2;                //object of ofstream
		    f2.open("temp.txt",ios::out|ios::binary);     //opening the temprary file in out and binary mode
		    ifstream f1;		//object of the ifstream
		    f1.open("emain.txt",ios::in|ios::binary);     //opening the emain.txt file in input and binary mode

		    int rno;
		    char found='y',confirm='n';
gotoxy(30,22);	 	    cout<<"ENTER EMPLOYEE ID :";
			    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))		//reading from the file while the end of file is reached
		      {

			 if(m.mono(rno))			//passing the value to the function mono()
			 {
			    m.vieworder();			//calling the function view order
			    getch();
			    found='t';
gotoxy(30,22);			    cout<<"PRESS Y TO COFIRM DELETION OF ORDER";
			    cin>>confirm;
			      if(confirm=='n'||confirm=='N')
			      f2.write((char*)&m,sizeof(m));		//if the condition is true the record will be written in the temprary file

			   }
			 else
			  {
			     f2.write((char*)&m,sizeof(m));		//if the condition is false it also written in the file
			  }
		      }
			   if(found=='f')
			     cout<<"RECORD NOT FOUND";
			     f1.close();		//closing the file emain.txt
			     f2.close();		//closing the file temp.txt
			     remove("emain.txt");		//removing the file emain.txt
			     rename("temp.txt","emain.txt");    //renaming temprary file to emain.txt
	       }




void main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	if(in.check())
	 while(1)
	 menu();

	getch();
}
