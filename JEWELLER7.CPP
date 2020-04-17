//file handling errors are removed a step ahead.
//All error removed AND LILBIT graphics added;
//finally a working program
//;ogical error in deleting function of emp,order;

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
void time()
  {
     time_t rawtime;
     struct tm*timeinfo;
     time(&rawtime);
     timeinfo=localtime(&rawtime);
     printf(asctime(timeinfo));
  }

void graph()
{
	gotoxy(5,5);
	time();
	rectangle(10,10,630,470);
	rectangle(10,10,630,60);
	gotoxy(30,3);
	setbkcolor(LIGHTBLUE);
	cout<<"JEWELLERY MANAGEMENT PROJECT\n\n";

}

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
		      gotoxy(30,11);
				 cout<<"loading";
				 delay(200);
				 cout<<".";
				 delay(200);
				 cout<<".";
				 delay(200);
				 cout<<".";
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
			gotoxy(30,14);		     cout<<"UNAUTHORIZED PERSON";
				     delay(1000);
				     exit(0);

				    }



			  }
		     }

       return 0;
    }



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
      int mono()
	 {
	   return ono;
	 }
      int meno()
	 {
	   return eno;
	 }
    }m1;


  class sales
    {
	char custname[50];
	char addr[50];
	float contact;
	char jeweltype[10];
	float grate;
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
    f1.open("smain.dat",ios::app|ios::binary);
    f1.write((char*)&s,sizeof(s));
    f1.close();
  }

void sread()
   {
    sales s;
    fstream f1;
    f1.open("smain.dat",ios::in|ios::binary);

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
    m.neworder();
    f1.open("omain.dat",ios::app|ios::binary);
    f1.write((char*)&m,sizeof(m));
    f1.close();
  }

void oread()
   {
    master m;
    fstream f1;
    f1.open("omain.dat",ios::in|ios::binary);

    while(f1.read((char*)&m,sizeof(m)))
      {
	m.vieworder();
	cout<<"PRESS ANY KEY TO NEXT";
	getch();
	 if(f1.eof())
	   {
	    cout<<"NO MORE ORDERS";
	   }
      }
    f1.close();
   }

void delorder()
	       {
		 master m;

		    ifstream f1("omain.dat",ios::in);
		    ofstream f2("temp.dat",ios::out);
		    int rno;
		    char found='y',confirm='n';
		    cout<<"ENTER ORDER NO";
		    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))
		      {

			 if(m.mono()==rno)
			   {
			    m.vieworder();
			    found='t';
			    cout<<"PRESS N TO COFIRM DELETION OF ORDER";
			    cin>>confirm;
			      if(confirm=='n')
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
			     remove("omain.dat");
			     rename("temp.dat","omain.dat");
	       }

void ewrite()
  {
    master e;
    fstream f1;
    e.newemp();
    f1.open("emain.dat",ios::app|ios::binary);
    f1.write((char*)&e,sizeof(e));
    f1.close();
  }

void eread()
   {
    master e;
    fstream f1;
    f1.open("emain.dat",ios::in|ios::binary);
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
		 master e;

		    ifstream f1("emain.dat",ios::in);
		    ofstream f2("temp.dat",ios::out);
		    int rno;
		    char found='y',confirm='n';
gotoxy(30,13);		    cout<<"ENTER EMPLOYEE ID";
		    cin>>rno;

		    while(f1.eof())
		      {
		       f1.read((char*)&e,sizeof(e));
			 if(e.meno()==rno)
			   {
			    e.viewemp();
			    found='t';
			    cout<<"are u sure to delete details";
			    cin>>confirm;
			      if(confirm=='n')
			      f2.write((char*)&e,sizeof(e));

			   }
			 else
			   {
			     f2.write((char*)&e,sizeof(e));
			   }
		      }
			   if(found=='f')
			     cout<<"RECORD NOT FOUND";
			     f1.close();
			     f2.close();
			     remove("emain.dat");
			     rename("temp.dat","emain.dat");
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
