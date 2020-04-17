//Error removed by deepak sir but steel 2 logical errors;

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
     cout<<"Date and Time : "<<asctime(timeinfo);
  }

  class logini
    {
	 public:
	    char user[10];
	    int pass[10];

	 int check()

	   { int k=1;

	    clrscr();
	    repeat :
	      cout<<"USERNAME :";
	      cin>>user;
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
		 for(int i=0;i<100;i++)
		   {
		   delay(200);
		   cout<<".";
		   }

		}
	      else
		{
		  cout<<"WRONG PASSWORD OR USERNAME";
		  cout<<"PLEASE RE-ENTER PASSWORD";
		  k++;
		  if(k==3)
		    {
		     cout<<"UNAUTHORIZED PERSON";
		     exit(0);
		    }
		 goto repeat;
	      }
	   return 1;
	  }

     }log;

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
	     cin>>dealer;
	     cout<<"JEWELTYPE :";
	     cin>>jeweltype;
	     cout<<"TOTAL WEIGHT :";
	     cin>>weight;
	     cout<<"AMOUNT :";
	     cin>>amount;
	    }


	void pview()
	  {
	     cout<<"DEALER :";
	     cout<<dealer;
	     cout<<"JEWELTYPE :";
	     cout<<jeweltype;
	     cout<<"TOTAL WEIGHT :";
	     cout<<weight;
	     cout<<"AMOUNT :";
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
	 int ajomount;
     public :

	void neworder()
	  {
	      cout<<"ENTER ORDER NO :";
	      cin>>ono;
	      cout<<"CUSTOMER NAME :";
	      cin>>custname;
	      cout<<"ADDRESS :";
	      cin>>addr;
	      cout<<"JEWEL TYPE :";
	      cin>>jeweltype;
	      cout<<"NO OF GRAMS :";;
	      cin>>weight;
	      cout<<"TOTAL AMOUNT :";
	      cin>>amount;
	      cout<<"PAID AMOUNT :";
	      cin>>pamount;
	      cout<<"BALANCE AMOUNT :";
	      cin>>bamount;
	      cout<<"DATE OF DELIVERY :";
	      cin>>ddate;

	  }

	void vieworder()
	 {
	      cout<<"ORDER NO. :";
	      cout<<ono;
	      cout<<"CUSTOMER NAME :";
	      cout<<custname;
	      cout<<"ADDRESS :";
	      cout<<addr;
	      cout<<"JEWEL TYPE :";
	      cout<<jeweltype;
	      cout<<"NO OF GRAMS :";;
	      cout<<weight;
	      cout<<"TOTAL AMOUNT :";
	      cout<<amount;
	      cout<<"PAID AMOUNT :";
	      cout<<pamount;
	      cout<<"BALANCE AMOUNT :";
	      cout<<bamount;
	      cout<<"DATE OF DELIVERY :";
	      cout<<ddate;

	 }



	void newemp()
	   {
	     cout<<"ENTER EMPLOYEE ID :";
	     cin>>eno;
	     cout<<"EMPLOYEE NAME :";
	     cin>>e_name;
	     cout<<"ADDRESS :";
	     cin>>addr;
	     cout<<"contact";
	     cin>>contact;
	     cout<<"QUALIFICATION :";
	     cin>>qualify;
	     cout<<"JOINING DATE";
	     cin>>join_date;
	     cout<<"DEPARTMENT :";
	     cin>>depart;
	     cout<<"SALARY :";
	     cin>>salary;

	   }

	void viewemp()
	   {
	     cout<<"EMPLOYEE ID :";
	     cout<<eno;
	     cout<<"EMPLOYEE NAME :";
	     cout<<e_name;
	     cout<<"ADDRESS :";
	     cout<<addr;
	     cout<<"contact";
	     cout<<contact;
	     cout<<"QUALIFICATION :";
	     cout<<qualify;
	     cout<<"JOINING DATE";
	     cout<<join_date;
	     cout<<"DEPARTMENT :";
	     cout<<depart;
	     cout<<"SALARY :";
	     cout<<salary;

	   }



     void billing()
     {

       cout<<"BILL NO."<<billno;
       cout<<"CUSTOMER NAME  :"<<custname;
       cout<<"ADDRESS : "<<addr;
       cout<<"DATE :";
       time();
       cout<<"JEWEL TYPE :"<<jeweltype;
       cout<<"NO. OF GRAMS :"<<weight;
       cout<<"AMOUNT :"<<ajomount;

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
		cout<<"CUSTOMER NAME :";
		cin>>custname;
		cout<<"ADDRESS :";
		cin>>addr;
		cout<<"CONTACT NO :";
		cin>>contact;
		cout<<"JEWEL TYPE :";
		cin>>jeweltype;
		cout<<"NO OF GRAMS :";
		cin>>weight;
		cout<<"TOTAL AMOUNT :";
		cin>>amount;
		cout<<"DATE TIME :";
		time();
		cout<<"SALESMAN NAME : ";
		cin>>s_name;
		cout<<"BILL NO :";
		cin>>billno;
	      }


	  void sview()
	   {
		 cout<<"CUSTOMER NAME :";
		 cout<<custname;
		 cout<<"ADDRESS :";
		 cout<<addr;
		 cout<<"CONTACT NO :";
		 cout<<contact;
		 cout<<"JEWEL TYPE :";
		 cout<<jeweltype;
		 cout<<"NO OF GRAMS :";
		 cout<<weight;
		 cout<<"TOTAL AMOUNT :";
		 cout<<amount;
		 cout<<"DATE TIME :";
		 time();
		 cout<<"SALESMAN NAME : ";
		 cout<<s_name;
		 cout<<"BILL NO :";
		 cout<<billno;
	   }

    };



void pwrite()
  {
    purchase p;
    fstream f1;
    p.padd();
    f1.open("pmain.dat",ios::app|ios::binary);
    f1.write((char*)&p,sizeof(p));
    f1.close();
  }

void pread()
   {
    purchase p;
    fstream f1;
    f1.open("pmain.dat",ios::in|ios::binary);
    while(!f1.eof())
      {
	f1.read((char*)&p,sizeof(p));
	p.pview();
	 if(f1.eof())
	   {
	    cout<<"end of file";
	   }
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
    while(!f1.eof())
      {
	f1.read((char*)&s,sizeof(s));
	s.sview();
	 if(f1.eof())
	   {
	    cout<<"end of file";
	   }
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
    while(!f1.eof())
      {
	f1.read((char*)&m,sizeof(m));
	m.vieworder();
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

		    while(f1.eof())
		      {
		       f1.read((char*)&m,sizeof(m));
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
    while(!f1.eof())
      {
	f1.read((char*)&e,sizeof(e));
	e.viewemp();
	 if(f1.eof())
	   {
	    cout<<"NO MORE EMPLOYEES";
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
		    cout<<"ENTER EMPLOYEE ID";
		    cin>>rno;

		    while(f1.eof())
		      {
		       f1.read((char*)&e,sizeof(e));
			 if(e.meno()==rno)
			   {
			    e.viewemp();
			    found='t';
			    cout<<"are u sure to delete";
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
	   cout<<"1. PURCHASE DETAILS";
	   cout<<"2. MASTER DETAILS ";
	   cout<<"3. SALES DETAILS";
	   cout<<"4. EXIT";
	   cin>>ch;
	   switch(ch)
	      {
	      case 1:
		     {
		       cout<<"1.ADD RECORD";
		       cout<<"2. VIEW RECORD";
		       cout<<"3.EXIT";
		       cin>>ch;
			 switch(ch)
			     {
			       case 1:
				  {
				    pwrite();
				    break;
				  }

			       case 2:
				  {
				     pread();
				     break;
				  }
			       case 3:
				  {
				     exit(0);
				     break;
				  }
			       default :
				  {
				    cout<<"PLEASE ENTER VALID CHOICE";
				    break;
				  }
			     }
		      break;
		     }
	      case 2:
		    {
			cout<<"1. ORDER DETAILS ";
			cout<<"2. EMPLOYEE DETAILS";
			cout<<"3. BILLING ";
			cout<<"4. EXIT";
			cin>>ch;

			switch(ch)
			   {
			      case 1:
				   {
				    cout<<"1. NEW ORDER";
				    cout<<"2. VIEW ORDER";
				    cout<<"3. DELETE ORDER";
				    cout<<"4. EXIT";

				    cin>>ch;

				    switch(ch)
				      {
				       case 1:
					    {
					    owrite();
					    break;
					    }
				       case 2:
					    {
					    oread();
					    break;
					    }
				       case 3:
					    {
					    delorder();
					    break;
					    }
				       case 4:
					    {
					    exit(0);
					    break;
					    }
				      default :
					    {
					     cout<<"PLEASE ENTER VALID INPUT";
					     break;
					    }
				      }
				   }

			      case 2:
				   {
				    cout<<"1. NEW EMPLOYEE";
				    cout<<"2. VIEW EMPLOYEES";
				    cout<<"3. REMOVE EMPLOYEE";
				    cout<<"4. EXIT";
				    cin>>ch;

				    switch(ch)
				       {
					 case 1:
					    {
					     ewrite();
					     break;
					    }
					 case 2:
					    {
					     eread();
					     break;
					    }
					 case 3:
					    {
					     delemp();
					     break;
					    }
					 case 4:
					    {
					    exit(0);
					    break;
					    }
					 default :
					    {
					      cout<<"PLEASE ENTER VALID CHOICE";
					      break;
					    }
				       }
			      case 3 :
				 {
				 m1.billing();
				 break;
				 }

			       case 4 :
				 {
				 exit(0);
				 break;
				 }

			      default :
				 {
				  cout<<"PLEASE ENTER VALID CHOICE";
				  break;
				 }

			   }

		    }
	      case 3 :
		 {
		   cout<<"1. ADD SALE ";
		   cout<<"2. VIEW SALE ";
		   cin>>ch;
		      switch(ch)
			{
			  case 1:
			     {
			       swrite();
			       break;
			     }
			  case 2:
			     {
			       sread();
			       break;
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
		 cout<<"PLEASE ENTER VALID CHOICE";
		 break;
		 }
	      }
     }
}

void main()
{
	clrscr();
	cout<<"\n\n**************************JEWELLERY MANAGEMENT PROJECT**************************\n\n";
	if(log.check())
		menu();
	getch();
}