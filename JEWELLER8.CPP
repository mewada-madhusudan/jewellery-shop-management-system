/*	THIS PROJECT IS ON THE "JEWELLERY MANAGEMENT "*/


#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>

/*This function is used for the outline of the console window otherthan that it won't have any use or we can say that it is optional */

void graph()
{
	gotoxy(5,5);
	rectangle(10,10,630,470);
	rectangle(10,10,630,60);
	gotoxy(30,3);
	setbkcolor(BLUE);
	cout<<"JEWELLERY MANAGEMENT PROJECT\n\n";

}


/*This is login function of the program with a single password entry .
any one can enter in the program if and only if the password is correct ,username can be changed.
In this function we have declared an char array and taken input manaully by using getch to hide the password
than we have used a string compare function which is predifined in the header file "STRING.H".
if the string are same than this function will return 1 or 0. */


 int check()

       {
	  int k=0;
		char user[20],pass[10];


		    while(k<3)
		     {
		     cleardevice();
		     graph();

		      gotoxy(30,8);
		      cout<<"USERNAME :";
		      cin>>user;
		      gotoxy(30,9);
		      cout<<"PASSWORD :";

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
			if(strcmp(pass,"madesh")==0)
			  {     cout<<"\n";

				 for(int i=0;i<=360;++i)
					{
					setcolor(WHITE);
					setfillstyle(SOLID_FILL,5);
					circle(300,200,20);
					pieslice(300,200,0,i,20);
					outtextxy(200,320,"Loading....Please Wait!");
					delay(50);
					}

				 return 1;
			  }
			else
			  {

			gotoxy(30,11);	  cout<<"WRONG PASSWORD OR USERNAME";
			gotoxy(30,12);	  cout<<"PLEASE RE-ENTER PASSWORD";
				  delay(500);
				  k++;
				  if(k==3)
				    {
			gotoxy(30,14);	  cout<<"UNAUTHORIZED PERSON";
				     delay(1000);
				     exit(0);

				    }



			  }
		     }

       return 0;
    }


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

	void padd()
	    {
	     cleardevice();
	     graph();

gotoxy(30,13);	     cout<<"DEALER :";
	     gets(dealer);
gotoxy(30,14);	     cout<<"JEWELTYPE :";
	     cin>>jeweltype;
gotoxy(30,15);	     cout<<"TOTAL WEIGHT :";
	     cin>>weight;
gotoxy(30,16);	     cout<<"AMOUNT :";
	     cin>>amount;
	    }


	void pview()
	  {
		     cleardevice();
		     graph();


gotoxy(30,13);	     cout<<"DEALER :";
	     cout<<dealer;
gotoxy(30,14);	     cout<<"JEWELTYPE :";
	     cout<<jeweltype;
gotoxy(30,15);	     cout<<"TOTAL WEIGHT :";
	     cout<<weight;
gotoxy(30,16);	     cout<<"AMOUNT :";
	     cout<<amount;

	  }

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
	`	E.billing-this function is used for the giving bill slip
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
	 float contact;
	 char qualify[100];
	 char join_date[10];
	 int salary;
	 char depart[10];
	 int billno;
	 int weight;
	 int pamount,bamount;
	 char ddate[10];
	 int ono,eno;

     public :

	void neworder()
	  {
		     cleardevice();
		     graph();


gotoxy(30,12);	      cout<<"ENTER ORDER NO :";
	      cin>>ono;
gotoxy(30,13);	      cout<<"CUSTOMER NAME :";
	      fflush(stdin);
	      gets(custname);
gotoxy(30,14);	      cout<<"ADDRESS :";
	      fflush(stdin);
	      cin>>addr;
gotoxy(30,15);	      cout<<"JEWEL TYPE :";
	      fflush(stdin);
	      cin>>jeweltype;
gotoxy(30,16);	      cout<<"NO OF GRAMS :";
	      cin>>weight;
gotoxy(30,17);	      cout<<"TOTAL AMOUNT :";
	      cin>>amount;
gotoxy(30,18);	      cout<<"PAID AMOUNT :";
	      cin>>pamount;
gotoxy(30,19);	      cout<<"BALANCE AMOUNT :";
	      cin>>bamount;
gotoxy(30,20);	      cout<<"DATE OF DELIVERY :";
	      fflush(stdin);
	      cin>>ddate;


	  }

	void vieworder()
	 {
		     cleardevice();
		     graph();


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



	void newemp()
	   {
		     cleardevice();
		     graph();


gotoxy(30,12);	     cout<<"ENTER EMPLOYEE ID :";
	     cin>>eno;
gotoxy(30,13);	     cout<<"EMPLOYEE NAME :";
	     gets(e_name);
gotoxy(30,14);	     cout<<"ADDRESS :";
	     cin>>addr;
gotoxy(30,15);	     cout<<"contact";
	     cin>>contact;
gotoxy(30,16);	     cout<<"QUALIFICATION :";
	     cin>>qualify;
gotoxy(30,17);	     cout<<"JOINING DATE";
	     cin>>join_date;
gotoxy(30,18);	     cout<<"DEPARTMENT :";
	     cin>>depart;
gotoxy(30,19);	     cout<<"SALARY :";
	     cin>>salary;

	   }

	void viewemp()
	   {
		     cleardevice();
		     graph();


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



     void billing()
     {
		     cleardevice();
		     graph();

       cout<<"BILL NO.",billno;
       cout<<"CUSTOMER NAME  :"<<custname;
       cout<<"ADDRESS : "<<addr;
       cout<<"DATE :";
       cout<<ddate;
       cout<<"JEWEL TYPE :"<<jeweltype;
       cout<<"NO. OF GRAMS :"<<weight;
       cout<<"AMOUNT :"<<amount;

      }
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
	float contact;
	char jeweltype[10];
	int weight;
	int amount;
	char s_name[50];
	int billno;
	char ddate[10];
      public:
	  void sadd()
	      {
		     cleardevice();
		     graph();


gotoxy(30,12);		cout<<"CUSTOMER NAME :";
		gets(custname);
gotoxy(30,13);		cout<<"ADDRESS :";
		cin>>addr;
gotoxy(30,14);		cout<<"CONTACT NO :";
		cin>>contact;
gotoxy(30,15);		cout<<"JEWEL TYPE :";
		cin>>jeweltype;
gotoxy(30,16);		cout<<"NO OF GRAMS :";
		cin>>weight;
gotoxy(30,17);		cout<<"TOTAL AMOUNT :";
		cin>>amount;
gotoxy(30,18);		cout<<"DATE TIME :";
		cin>>ddate;
gotoxy(30,19);		cout<<"SALESMAN NAME : ";
		cin>>s_name;
gotoxy(30,20);		cout<<"BILL NO :";
		cin>>billno;
	      }


	  void sview()
	   {
		     cleardevice();
		     graph();


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

    };



void pwrite()
  {
    purchase p;
    ofstream f1;
    p.padd();
    f1.open("pmain.dat",ios::app|ios::binary);
    f1.write((char*)&p,sizeof(p));
    f1.close();
  }
void pread()
   {
    purchase p;
    ifstream f1;
    f1.open("pmain.dat",ios::in|ios::binary);
    while(f1.read((char*)&p,sizeof(p)))
      {

	p.pview();
gotoxy(30,19);	cout<<"PRESS ANY KEY FOR NEXT";
	getch();

      }
    f1.close();
   }

void swrite()
  {
    sales s;
    fstream f1;
    s.sadd();
    f1.open("smain.txt",ios::app|ios::binary);
    f1.write((char*)&s,sizeof(s));
    f1.close();
  }

void sread()
   {
    sales s;
    fstream f1;
    f1.open("smain.txt",ios::in|ios::binary);

    while(f1.read((char*)&s,sizeof(s)))
      {

	s.sview();
gotoxy(30,22);	cout<<"PRESS ANY KEY TO NEXT";
	getch();
      }
    f1.close();
   }

void owrite()
  {
    master m;
    fstream f1;
    f1.open("omain.txt",ios::out|ios::app|ios::binary);
    m.neworder();
    f1.write((char*)&m,sizeof(m));
    f1.close();
  }

void oread()
   {
    master m;
    fstream f1;
    f1.open("omain.txt",ios::in|ios::binary);
      if(!f1)
	   {
	    cout<<"FILE NOT FOUND";
	   }
       else
       {
	    while(!f1.eof())
	      {
	      f1.read((char*)&m,sizeof(m));
		m.vieworder();
gotoxy(30,22);	cout<<"PRESS ANY KEY TO NEXT";
		getch();

	      }
	}
    f1.close();
   }

void delorder()
	       {
		 master m;

		    ofstream f2;
		    f2.open("temp.txt",ios::out|ios::binary);
		    ifstream f1;
		    f1.open("omain.txt",ios::in|ios::binary);

		    int rno;
		    char found='y',confirm='n';
gotoxy(30,22);	 	    cout<<"ENTER ORDER NO";
			    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))
		      {

			 if(m.mono(rno))
			 {
			    m.vieworder();
			    getch();
			    found='t';
gotoxy(30,22);		    cout<<"PRESS Y TO COFIRM DELETION OF ORDER :";
			    cin>>confirm;
			      if(confirm=='n'||confirm=='N')
			      f2.write((char*)&m,sizeof(m));

			   }
			 else
			  {
			     f2.write((char*)&m,sizeof(m));
			  }
		      }
			   if(found=='f')
			     cout<<"RECORD NOT FOUND";
			     f1.close();
			     f2.close();
			     remove("omain.txt");
			     rename("temp.txt","omain.txt");
	       }

void ewrite()
  {
    master e;
    fstream f1;
    e.newemp();
    f1.open("emain.txt",ios::app|ios::binary);
    f1.write((char*)&e,sizeof(e));
    f1.close();
  }

void eread()
   {
    master e;
    fstream f1;
    f1.open("emain.txt",ios::in|ios::binary);
    if(f1.eof()==0)
      {
gotoxy(30,15);       cout<<"NO RECORD FOUND";
      }

    while(f1.read((char*)&e,sizeof(e)))
      {
       if(f1.eof())
	   {
	    cout<<"NO MORE EMPLOYEES";
	   }
       else
       {
	e.viewemp();
gotoxy(30,20);	 cout<<"PRESS ANY KEY TO NEXT";
	getch();
       }
      }
    f1.close();
   }

void delemp()
	       {
		  master m;

		    ofstream f2;
		    f2.open("temp.txt",ios::out|ios::binary);
		    ifstream f1;
		    f1.open("emain.txt",ios::in|ios::binary);

		    int rno;
		    char found='y',confirm='n';
gotoxy(30,22);	 	    cout<<"ENTER EMPLOYEE ID :";
			    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))
		      {

			 if(m.mono(rno))
			 {
			    m.vieworder();
			    getch();
			    found='t';
gotoxy(30,22);			    cout<<"PRESS Y TO COFIRM DELETION OF ORDER";
			    cin>>confirm;
			      if(confirm=='n'||confirm=='N')
			      f2.write((char*)&m,sizeof(m));

			   }
			 else
			  {
			     f2.write((char*)&m,sizeof(m));
			  }
		      }
			   if(found=='f')
			     cout<<"RECORD NOT FOUND";
			     f1.close();
			     f2.close();
			     remove("emain.txt");
			     rename("temp.txt","emain.txt");
	       }



   void menu()
     {   int ch;
       main:
	   cleardevice();
	   graph();

gotoxy(30,10);	   cout<<"1. PURCHASE DETAILS";
gotoxy(30,11);	   cout<<"2. MASTER DETAILS ";
gotoxy(30,12);	   cout<<"3. SALES DETAILS";
gotoxy(30,13);	   cout<<"4. EXIT";
gotoxy(30,16);	   cin>>ch;
	   switch(ch)
	      {
	      case 1:
		     {
		      PD :
			   cleardevice();
			   graph();

gotoxy(30,12);		       cout<<"1.ADD RECORD";
gotoxy(30,13);		       cout<<"2. VIEW RECORD";
gotoxy(30,14);		       cout<<"3.EXIT";
gotoxy(30,16);		       cin>>ch;
			 switch(ch)
			     {
			       case 1:
				  {
				    pwrite();
				    goto main;
				  }

			       case 2:
				  {
				     pread();
				    goto main;
				  }
			       case 3:
				  {
				    goto main;

				  }
			       default :
				  {
gotoxy(30,19);				    cout<<"PLEASE ENTER VALID CHOICE";
				    goto PD;
				  }
			     }

		      }
	      case 2:
		    {
		     MD:
			cleardevice();
			graph();

gotoxy(30,12);			cout<<"1. ORDER DETAILS ";
gotoxy(30,13);			cout<<"2. EMPLOYEE DETAILS";
gotoxy(30,14);			cout<<"3. BILLING ";
gotoxy(30,15);			cout<<"4. EXIT ";
gotoxy(30,17);			cin>>ch;

			switch(ch)
			   {
			      case 1:
				   {
				   OD:
				       cleardevice();
				       graph();

gotoxy(30,12);				    cout<<"1. NEW ORDER";
gotoxy(30,13);				    cout<<"2. VIEW ORDER";
gotoxy(30,14);				    cout<<"3. DELETE ORDER";
gotoxy(30,15);				    cout<<"4. EXIT ";

gotoxy(30,17);				    cin>>ch;

				    switch(ch)
				      {
				       case 1:
					    {
					    owrite();
					    goto OD;
					    }
				       case 2:
					    {
					    oread();
					    goto OD;
					    }
				       case 3:
					    {
					    delorder();
					    goto OD;
					    }
				       case 4:
					    {
					    goto main;

					    }
				      default :
					    {
gotoxy(30,19);					     cout<<"PLEASE ENTER VALID INPUT ";
					     goto OD;
					    }
				      }
				   }

			      case 2:
				   {
				   ED:
					cleardevice();
					graph();

gotoxy(30,12);				    cout<<"1. NEW EMPLOYEE";
gotoxy(30,13);				    cout<<"2. VIEW EMPLOYEES";
gotoxy(30,14);				    cout<<"3. REMOVE EMPLOYEE";
gotoxy(30,15);				    cout<<"4. EXIT";
gotoxy(30,17);				    cin>>ch;

				    switch(ch)
				       {
					 case 1:
					    {
					     ewrite();
					     goto ED;
					    }
					 case 2:
					    {
					     eread();
					     goto ED;
					    }
					 case 3:
					    {
					     delemp();
					     goto ED;
					    }
					 case 4:
					    {
					    goto main;

					    }
					 default :
					    {
gotoxy(30,19);					      cout<<"PLEASE ENTER VALID CHOICE";
					      goto ED;
					    }
				       }
			      case 3 :
				 {
				 m1.billing();
				 goto main;
				 }

			       case 4 :
				 {
				 goto main;

				 }

			      default :
				 {
gotoxy(30,19);				  cout<<"PLEASE ENTER VALID CHOICE";
				  goto MD;
				 }

			   }

		    }
	      case 3 :
		 {
		 SD:
			 cleardevice();
			 graph();

gotoxy(30,12);		   cout<<"1. ADD SALE ";
gotoxy(30,13);		   cout<<"2. VIEW SALE ";
gotoxy(30,14);		   cout<<"3. EXIT ";
gotoxy(30,16);		   cin>>ch;
		      switch(ch)
			{
			  case 1:
			     {
			       swrite();
			       goto SD;
			     }
			  case 2:
			     {
			       sread();
			       goto SD;
			     }
			  case 3:
			     {
			      goto main;

			     }
			}

		   break;
		 }
	      case 4 :
		 {
		    exit(0);
		    break;
		 }

	      default :
		 {
gotoxy(30,19);		 cout<<"PLEASE ENTER VALID CHOICE";
		 break;
		 }
	      }
     }
}

void main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	if(check())
		menu();
	getch();
}
