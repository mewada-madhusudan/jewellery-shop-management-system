//file handling errors are removed a step ahead.
//All error removed but still there is need of graphics;
//finally a working program

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

 int check()

       {
	  int k=0;
		char user[20],pass[10];
		clrscr();
		    while(k<3)
		     {
		      cprintf("USERNAME :");
		      cin>>user;
		      cprintf("PASSWORD :");

		      pass[0]=getch();
		      cprintf("*");
		      pass[1]=getch();
		      cprintf("*");
		      pass[2]=getch();
		      cprintf("*");
		      pass[3]=getch();
		      cprintf("*");
		      pass[4]=getch();
		      cprintf("*");
		      pass[5]=getch();
		      cprintf("*");
		      pass[6]='\0';
			if(strcmp(pass,"madesh")==0)
			  {     cprintf("\n");

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
				  cprintf("WRONG PASSWORD OR USERNAME");
				  cprintf("PLEASE RE-ENTER PASSWORD");
				  delay(1000);
				  k++;
				  if(k==3)
				    {
				     cprintf("UNAUTHORIZED PERSON");
				     delay(1000);
				     exit(0);
				    }

			 clrscr();

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
	     cout<<"DEALER :";
	     gets(dealer);
	     cout<<"JEWELTYPE :";
	     cin>>jeweltype;
	     cout<<"TOTAL WEIGHT :";
	     cin>>weight;
	     cout<<"AMOUNT :";
	     cin>>amount;
	    }


	void pview()
	  {
	     cprintf("DEALER :");
	     cout<<dealer;
	     cprintf("JEWELTYPE :");
	     cout<<jeweltype;
	     cprintf("TOTAL WEIGHT :");
	     cout<<weight;
	     cprintf("AMOUNT :");
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
	      cprintf("ENTER ORDER NO :");
	      cin>>ono;
	      cprintf("CUSTOMER NAME :");
	      gets(custname);
	      cprintf("ADDRESS :");
	      cin>>addr;
	      cprintf("JEWEL TYPE :");
	      cin>>jeweltype;
	      cprintf("NO OF GRAMS :");
	      cin>>weight;
	      cprintf("TOTAL AMOUNT :");
	      cin>>amount;
	      cprintf("PAID AMOUNT :");
	      cin>>pamount;
	      cprintf("BALANCE AMOUNT :");
	      cin>>bamount;
	      cprintf("DATE OF DELIVERY :");
	      cin>>ddate;

	  }

	void vieworder()
	 {
	      cprintf("ORDER NO. :");
	      cout<<ono;
	      cprintf("CUSTOMER NAME :");
	      cout<<custname;
	      cprintf("ADDRESS :");
	      cout<<addr;
	      cprintf("JEWEL TYPE :");
	      cout<<jeweltype;
	      cprintf("NO OF GRAMS :");;
	      cout<<weight;
	      cprintf("TOTAL AMOUNT :");
	      cout<<amount;
	      cprintf("PAID AMOUNT :");
	      cout<<pamount;
	      cprintf("BALANCE AMOUNT :");
	      cout<<bamount;
	      cprintf("DATE OF DELIVERY :");
	      cout<<ddate;

	 }



	void newemp()
	   {
	     cprintf("ENTER EMPLOYEE ID :");
	     cin>>eno;
	     cprintf("EMPLOYEE NAME :");
	     gets(e_name);
	     cprintf("ADDRESS :");
	     cin>>addr;
	     cprintf("contact");
	     cin>>contact;
	     cprintf("QUALIFICATION :");
	     cin>>qualify;
	     cprintf("JOINING DATE");
	     cin>>join_date;
	     cprintf("DEPARTMENT :");
	     cin>>depart;
	     cprintf("SALARY :");
	     cin>>salary;

	   }

	void viewemp()
	   {
	     cprintf("EMPLOYEE ID :");
	     cout<<eno;
	     cprintf("EMPLOYEE NAME :");
	     cout<<e_name;
	     cprintf("ADDRESS :");
	     cout<<addr;
	     cprintf("contact");
	     cout<<contact;
	     cprintf("QUALIFICATION :");
	     cout<<qualify;
	     cprintf("JOINING DATE");
	     cout<<join_date;
	     cprintf("DEPARTMENT :");
	     cout<<depart;
	     cprintf("SALARY :");
	     cout<<salary;

	   }



     void billing()
     {

      /* cprintf("BILL NO.",billno;
       cprintf("CUSTOMER NAME  :"<<custname;
       cprintf("ADDRESS : "<<addr;
       cprintf("DATE :";
       time();
       cprintf("JEWEL TYPE :"<<jeweltype;
       cprintf("NO. OF GRAMS :"<<weight;
       cprintf("AMOUNT :"<<ajomount;
	*/
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
      public:
	  void sadd()
	      {
		cprintf("CUSTOMER NAME :");
		gets(custname);
		cprintf("ADDRESS :");
		cin>>addr;
		cprintf("CONTACT NO :");
		cin>>contact;
		cprintf("JEWEL TYPE :");
		cin>>jeweltype;
		cprintf("NO OF GRAMS :");
		cin>>weight;
		cprintf("TOTAL AMOUNT :");
		cin>>amount;
		cprintf("DATE TIME :");
		time();
		cprintf("SALESMAN NAME : ");
		cin>>s_name;
		cprintf("BILL NO :");
		cin>>billno;
	      }


	  void sview()
	   {
		 cprintf("CUSTOMER NAME :");
		 printf(custname);
		 cprintf("ADDRESS :");
		 cout<<addr;
		 cprintf("CONTACT NO :");
		 cout<<contact;
		 cprintf("JEWEL TYPE :");
		 cout<<jeweltype;
		 cprintf("NO OF GRAMS :");
		 cout<<weight;
		 cprintf("TOTAL AMOUNT :");
		 cout<<amount;
		 cprintf("DATE TIME :");
		 time();
		 cprintf("SALESMAN NAME : ");
		 cout<<s_name;
		 cprintf("BILL NO :");
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
    if(!f1.eof())
      {
       cout<<"NO RECORD FOUND";
      }
    while(f1.read((char*)&p,sizeof(p)))
      {

	p.pview();

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
    if(f1.eof()==0)
      {
       cout<<"NO RECORD FOUND";
      }

    while(f1.read((char*)&s,sizeof(s)))
      {

	s.sview();

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
    if(f1.eof()==0)
      {
       cout<<"NO RECORD FOUND";
      }

    while(f1.read((char*)&m,sizeof(m)))
      {
	m.vieworder();
	 if(f1.eof())
	   {
	    cprintf("NO MORE ORDERS");
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
		    cprintf("ENTER ORDER NO");
		    cin>>rno;

		    while(f1.read((char*)&m,sizeof(m)))
		      {

			 if(m.mono()==rno)
			   {
			    m.vieworder();
			    found='t';
			    cprintf("PRESS N TO COFIRM DELETION OF ORDER");
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
			     cprintf("RECORD NOT FOUND");
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
       cout<<"NO RECORD FOUND";
      }

    while(f1.read((char*)&e,sizeof(e)))
      {

	e.viewemp();
	 if(f1.eof())
	   {
	    cprintf("NO MORE EMPLOYEES");
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
		    cprintf("ENTER EMPLOYEE ID");
		    cin>>rno;

		    while(f1.eof())
		      {
		       f1.read((char*)&e,sizeof(e));
			 if(e.meno()==rno)
			   {
			    e.viewemp();
			    found='t';
			    cprintf("are u sure to delete details");
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
			     cprintf("RECORD NOT FOUND");
			     f1.close();
			     f2.close();
			     remove("emain.dat");
			     rename("temp.dat","emain.dat");
	       }



   void menu()
     {   int ch;
       main:
	   cprintf("1. PURCHASE DETAILS");
	   cprintf("2. MASTER DETAILS ");
	   cprintf("3. SALES DETAILS");
	   cprintf("4. EXIT");
	   cin>>ch;
	   switch(ch)
	      {
	      case 1:
		     {
		      PD :
		       cprintf("1.ADD RECORD");
		       cprintf("2. VIEW RECORD");
		       cprintf("3.EXIT");
		       cin>>ch;
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
				    cprintf("PLEASE ENTER VALID CHOICE");
				    goto PD;
				  }
			     }

		      }
	      case 2:
		    {
		     MD:
			cprintf("1. ORDER DETAILS ");
			cprintf("2. EMPLOYEE DETAILS");
			cprintf("3. BILLING ");
			cprintf("4. EXIT ");
			cin>>ch;

			switch(ch)
			   {
			      case 1:
				   {
				   OD:
				    cprintf("1. NEW ORDER");
				    cprintf("2. VIEW ORDER");
				    cprintf("3. DELETE ORDER");
				    cprintf("4. EXIT ");

				    cin>>ch;

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
					     cprintf("PLEASE ENTER VALID INPUT ");
					     goto OD;
					    }
				      }
				   }

			      case 2:
				   {
				   ED:
				    cprintf("1. NEW EMPLOYEE");
				    cprintf("2. VIEW EMPLOYEES");
				    cprintf("3. REMOVE EMPLOYEE");
				    cprintf("4. EXIT");
				    cin>>ch;

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
					      cprintf("PLEASE ENTER VALID CHOICE");
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
				  cprintf("PLEASE ENTER VALID CHOICE");
				  goto MD;
				 }

			   }

		    }
	      case 3 :
		 {
		 SD:
		   cprintf("1. ADD SALE ");
		   cprintf("2. VIEW SALE ");
		   cprintf("3. EXIT ");
		   cin>>ch;
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
		 cprintf("PLEASE ENTER VALID CHOICE");
		 break;
		 }
	      }
     }
}

void main()
{
	clrscr();
	cprintf("**************************JEWELLERY MANAGEMENT PROJECT**************************\n\n");
	if(
	check())
		menu();
	getch();
}