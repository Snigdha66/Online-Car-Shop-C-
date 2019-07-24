#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>

class customer
		{
		intcno;
		charcname[20];
		char address[20];
		int a;
		float i;

      //FUNCTION TO ENTER THE VALUES

		public:

void entry()
		{
		clrscr();

		gotoxy(32,4);
		cout<<"XCLUSV CAR SHOP";
		gotoxy(5,8);
		cout<<"Customer ID :";
		gotoxy(5,10);
		cout<<"Customer name :";
		gotoxy(5,12);
		cout<<"Customer address :";
		gotoxy(5,14);
		cout<<"Customer phone number :";
		gotoxy(5,16);
		cout<<"Customer Bill number :";
		gotoxy(45,8);
		cin>>cno;
		gotoxy(45,10);
		gets(cname);
		gotoxy(45,12);
		gets(address);
		gotoxy(45,14);
		cin>>a;
		gotoxy(45,16);
		cin>>i;
		}

      //FUNCTION TO DISPLAY THE VALUES

void display()
		    {
		cout<<"\n\n";
		gotoxy(5,8);
		cout<<"Customer ID :";
		cout<<cno;
		gotoxy(5,10);
		cout<<"Customer name :";
		puts(cname);
		gotoxy(5,12);
		cout<<"Customer address :"<<address;
		gotoxy(5,14);
		cout<<"Customer Phone number :" <<a;
		gotoxy(5,16);
		cout<<"Customer Bill number :"<<i<<"\n";
		    }
intrcno()
      {
returncno;
      }
}c;

      //FUNCTION TO WRITE THE VALUES

void write()
		{
		charch;
		customer c;
		fstream f1;
		c.entry();
		f1.open("main.dat",ios::app|ios::binary);
		cout<<"\n\n\tDO you want to save the record(y/n)\t";
		cin>>ch;
		if(ch=='y')
		{
		f1.write((char*)&c,sizeof(c));
		}
		f1.close();
		}

	  //FUNCTION TO READ THE VALUES

void read()
		{
		customer c;
		fstream f1;
		f1.open("main.dat",ios::in|ios::binary);
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		c.display();
		if(f1.eof())
		{
		cout<<"\n\n   End of the file reached\n\n";
		}
		}
		f1.close();
		}

      //FUNCTION FOR SEARCHING THE RECORD

void search()
		{
		customer c;
		intrn;
		char found='n';
		ifstream f1("main.dat",ios::in);
		cout<<"\n\n Enter Customer ID you want to SEARCH :\t";
		cin>>rn;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rn)
		{
		c.display();
		found='y';
		break;
		}
		}
		if(found=='n')
		cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
		f1.close();
		}

     //FUNCTION TO DELELTE THE RECORD

void del()
		{
		ifstream f1("main.dat",ios::in);
		ofstream f2("temp.dat",ios::out);
		intrno;
		char found='f',confirm='n';
		cout<<"\n\n Enter Customer ID you want to DELETE :\t";
		cin>>rno;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
		c.display();
		found='t';
		cout<<"\n\n Are you sure want to DELETE this record ?    

           (y/n)\t";
		cin>>confirm;
		if(confirm=='n')
		f2.write((char*)&c,sizeof(c));
		}
		else
		f2.write((char*)&c,sizeof(c));
		}
		if(found=='f')
		cout<<"\n\n\tRECORD NOT FOUND\n";
		f1.close();
		f2.close();
		remove("main.dat");
		rename("temp.dat","main.dat");
		f1.open("main.dat",ios::in);
		clrscr();
		cout<<"\n\n\n Now the file contains\n\n\n";
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(f1.eof())
		c.display();
		}
		f1.close();
		}

      //FUNCTION TO MODIFY THE RECORD

void update()
		{
		fstream f1("main.dat",ios::in | ios::out | ios::binary);
		intrno;
		longpos;
		char found='f';
		cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
		cin>>rno;
		while(!f1.eof())
		{
		pos=f1.tellg();
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
		c.entry();
		f1.seekg(pos);
		f1.write((char*)&c,sizeof(c));
		found='t';
		break;
		}
		}
		if(found=='f')
		cout<<"\n\n\tRECORD NOT FOUND\n";
		f1.seekg(0);
		clrscr();
		cout<<"\n Now the file contains\n\n";
		c.display();
		f1.close();
		getch();
		}

      //STARTING OF THE VOID MAIN

	int main()
		{
char ftype1[25],colour1[25],btype1[25],trans1[20],ftype2[25],colour2[25],btype2[25],trans2[20],ftype3[25],colour3[25],btype3[25],trans3[20],ftype4[25],colour4[25],btype4[25],trans4[20],ftype5[25],colour5[25],btype5[25],trans5[20],ftype6[25],colour6[25],btype6[25],trans6[20];
float cc1,cc2,cc3,cc4,cc5,cc6;
int seater1,seater2,seater3,seater4,seater5,seater6,choice;
unsigned intadd,d,j,e,f,g,h,k=0,l,w,x,y,z;
double sum,price1,price2,price3,price4,price5,price6;
char pu,str[10],yes,et;clrscr();
	// WELCOME SCREEN

	clrscr();
	lab:;
	clrscr();
	pass:;
	cout<<"\n\n\t\t\tEnter your Password\t";
	str[0]=getch();
	cout<<"*";
	str[1]=getch();
	cout<<"*";
	str[2]=getch();
	cout<<"*";
	str[3]=getch();
	cout<<"*";
	str[4]=getch();
	cout<<"*";
	str[5]=getch();
	cout<<"*";
	str[6]=getch();
	cout<<"*";
	str[7]='\0';
	cout<<"*";
	if(strcmpi(str,"carshop")==0)
	{
	cout<<"\n\n\n\t\t\t\tLOADING";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(150);
	cout<<".";
	delay(200);
	}
	else
	{
	cout<<"\n\n\t\t\t Ooop's wrong password \n";
	cout<<"\n\n\t\t\t Please re-enter the password\n";
	getch();
	k++;
	//getch();
	if(k==3)
	{
	cout<<"\nExiting from the project!"<<endl<<" Bye\n";
	getch();
	exit(0);
	}
	goto pass;
	}


	clrscr();
	textcolor(RED);
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("********************************************************************************\n");
	gotoxy(2,21);

	cputs("                   SCHOOL:ATOMIC ENERGY CENTRAL SCHOOL-3                  ");
	gotoxy(2,22);
	cputs("                              TARAPUR                               ");
	cout<<"\n";

	cout<<"\n\n";
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	gotoxy(1,37);

	cputs("BY: SNIGDHA LABH AND PRAKHYA SINGH\n");
	gotoxy(1,39);
	cputs("CLASS: XII\n");

	gotoxy(1,43);
	cputs("YEAR:- 2016-2017\n");
	cout<<"\n\n";
	printf("********************************************************************************\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	cout<<"\n\n";

	gotoxy(45,48);
	cputs("PRESS ENTER TO CONTINUE!");
	getch();
	clrscr();
	clrscr();
//LOADING THE PROJECT

	gotoxy(32,13);
	textcolor(BLUE);
	cputs("********************");
	gotoxy(32,15);
	cputs("LOADING YOUR PROJECT");
	gotoxy(32,17);
	cputs("********************");
	gotoxy(32,20);

	cputs("PLEASE WAIT.........");

	delay(500);

			// TO PURCHASE ,SEARCH ,MODIFY ,DELETE ,DISPLAY ALL RECORDS ,DETAILS ,NEW CUSTOMER

		again:;
		clrscr();


		cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
		cout<<"\n\t\t\t    !=========================!\n";
		cout<<"\n\t\t\t    !**** XCLUSV CAR SHOP ****!\n";
		cout<<"\n\t\t\t    !=========================!";
		cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n\n\n";
		cout<<"  \t\t\t**********************************";
		cout<<"\n\n\t\t\t*     1.NEW CUSTOMER            *";
		cout<<"\n\n\t\t\t*     2.SHOP DETAILS            *";
		cout<<"\n\n\t\t\t*     3.SEARCH A RECORD         *";
		cout<<"\n\n\t\t\t*     4.DELETE A RECORD         *";
		cout<<"\n\n\t\t\t*     5.MODIFY A RECORD         *";
		cout<<"\n\n\t\t\t*     6.DISPLAY CURRENT RECORD  *";
		cout<<"\n\n\t\t\t*     7.EXIT                    *\n";
		cout<<"\n\t\t\t**********************************";
		cout<<"\n\n\n\n\t Enter your choice :\t";
		cin>>d;
		switch(d)
		{


	case 1:

		clrscr();

		cout<<"\n\n\n\t\t\t XCLUSV CAR SHOP";
		cout<<"\n\n\n\t\t\t CONSUMER INFORMATION";

	// TO ENTER THE DETAILS OF THE CUSTOMER

		write();

		start:
		cout<<"\n\n\nDO YOU WANT TO PURCHASE??(Y/N):\n\n";
		cin>>pu;
		if(pu=='Y'||pu=='y')
		{
		clrscr();

	// CAR LIST

		items:;
		textcolor(GREEN);
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t  CAR LIST";
		cout<<"\n\t\t\t\t*************\n\n\n\n";
		cout<<"\n\n\t\t\t1.HYUNDAI-EON";
		cout<<"\n\n\t\t\t2.FORD-FIGO ";
		cout<<"\n\n\t\t\t3.RENAULT-DUSTER ";
		cout<<"\n\n\t\t\t4.MARUTI-ALTO";
		cout<<"\n\n\t\t\t5.MARUTI-SWIFT";
		cout<<"\n\n\t\t\t6.TOYOTA-INNOVA";
		cout<<"\n\n\n\t\t\tEnter your choice\t";
		cin>>choice;
		if(choice==1)
		{
	clrscr();
	charpu[10];
	cout<<"\n\n\t\t\tHYUNDAI-EON\n\n";
	cout<<"*PRICE:-3.7 LAKHS"<<endl;
	   price1=370000;
	cout<<"*FUEL TYPE:-DIESEL"<<endl;
	strcpy(ftype1,"diesel");
	cout<<"*BODY TYPE:-HATCHBACK"<<endl;
	strcpy(btype1,"hatchback");
	cout<<"*COLOUR:-SILVER"<<endl;
	strcpy(colour1,"silver");
	cout<<"*ENGINE CAPACITY:-998 cc"<<endl;
	   cc1=998;
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans1,"automatic");
	cout<<"*SEATING CAPACITY:-5"<<endl;
	   seater1=5;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(strcmp(pu,"y")==0)
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED EON!!"<<endl;
	clrscr();
	goto cash1;}
	else
	       {return choice;}
}

		if(choice==2)
		{
		clrscr();
		pep:;
		clrscr();
		cout<<"\n\n\t\t\tFORD-FIGO\n\n";
	cout<<"*PRICE:-5 LAKHS"<<endl;
	     price2=500000;
	cout<<"*FUEL TYPE:-PETROL"<<endl;
	strcpy(ftype2,"Petrol");
	cout<<"*BODY TYPE:-HATCHBACK"<<endl;
	strcpy(btype2,"hatchback");
	cout<<"*COLOUR:-SEA GREY"<<endl;
	strcpy(colour2,"sea grey");
	cout<<"*ENGINE CAPACITY:-1196 cc"<<endl;
	cc2=1196;
	textcolor(GREEN);
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans2,"automatic");
	cout<<"*SEATING CAPACITY:-5"<<endl;
	seater2=5;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(pu=='y')
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED FORD-FIGO!!"<<endl;
	clrscr();goto cash2;}
	else
	     {return choice;}

		}



		if(choice==3)
		{
		clrscr();
		den:;
		clrscr();
		cout<<"\n\n\t\t\tRENAULT-DUSTER\n\n";
	cout<<"*PRICE:-12.9 LAKHS"<<endl;
	    price3=1290000;
	cout<<"*FUEL TYPE:-DIESEL"<<endl;
	strcpy(ftype3,"Diesel");
	cout<<"*BODY TYPE:-SUV"<<endl;
	strcpy(btype3,"suv");
	cout<<"*COLOUR:-WHITE"<<endl;
	strcpy(colour3,"white");
	cout<<"*ENGINE CAPACITY:-1461 cc"<<endl;
	     cc3=1461;
	textcolor(GREEN);
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans3,"automatic");
	cout<<"*SEATING CAPACITY:-8"<<endl;
	    seater3=8;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(pu=='y')
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED RENAULT-DUSTER!!"<<endl;
	clrscr();goto cash3;}
	else
 {return choice;}

		}


		if(choice==4)
		{
		clrscr();
		mun:;
		clrscr();
		cout<<"\n\n\t\t\tMARUTI-ALTO\n\n";
	cout<<"*PRICE:-3.5 LAKHS"<<endl;
	     price4=350000;
	cout<<"*FUEL TYPE:-CNG"<<endl;
	strcpy(ftype4,"CNG");
	cout<<"*BODY TYPE:-HATCHBACK"<<endl;
	strcpy(btype4,"hatchback");
	cout<<"*COLOUR:-WHITE"<<endl;
	strcpy(colour4,"white");
	cout<<"*ENGINE CAPACITY:-998 cc"<<endl;
	     cc4=998;
	textcolor(GREEN);
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans4,"automatic");
	cout<<"*SEATING CAPACITY:-5"<<endl;
	     seater4=5;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(pu=='y')
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED MARUTI-ALTO!!"<<endl;
	clrscr();goto cash4;}
	else
	   {return choice;}

	     }


if(choice==5)
		{
		clrscr();
		coco:;

		cout<<"\n\n\t\t\tMARUTI-SWIFT\n\n";
	cout<<"*PRICE:-7.2 LAKHS"<<endl;
	     price5=720000;
	cout<<"*FUEL TYPE:-DIESEL"<<endl;
	strcpy(ftype5,"Diesel");
	cout<<"*BODY TYPE:-SEDAN"<<endl;
	strcpy(btype5,"sedan");
	cout<<"*COLOUR:-WHITE"<<endl;
	strcpy(colour5,"white");
	cout<<"*ENGINE CAPACITY:-1248 cc"<<endl;
	     cc5=1248;
	textcolor(GREEN);
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans5,"automatic");
	cout<<"*SEATING CAPACITY:-5"<<endl;
	     seater5=5;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(pu=='y')
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED MARUTI-SWIFT!!"<<endl;
	clrscr();
	goto cash5;}
	else
	       {return choice;}
	     }


if(choice==6)
		{
		titan:;
		clrscr();
		cout<<"\n\n\t\t\tTOYOTA-INNOVA\n\n";
	cout<<"*PRICE:-11.8 LAKHS"<<endl;
	     price6=1180000;
	cout<<"*FUEL TYPE:-DIESEL"<<endl;
	strcpy(ftype6,"Diesel");
	cout<<"*BODY TYPE:-SUV"<<endl;
	strcpy(btype6,"suv");
	cout<<"*COLOUR:-BLUE"<<endl;
	strcpy(colour6,"blue");
	cout<<"*ENGINE CAPACITY:-2494 cc"<<endl;
	     cc6=2494;
	cout<<"*TRANSMISSION:-AUTOMATIC"<<endl;
	strcpy(trans6,"automatic");
	cout<<"*SEATING CAPACITY:-10"<<endl;
	     seater6=10;
	cout<<"\n\n DO YOU WANT TO BOOK. PLEASE ENTER y/n"<<endl;
	cin>>pu;
	if(pu=='y')
	   {
	clrscr();
	cout<<"CONGRATS YOU HAVE BOOKED TOYOTA-INNOVA!!"<<endl;
	clrscr();goto cash6;}
	else
	      {return choice;}
	      }

//TO DISPLAY THE CASH MEMO
clrscr();
cash1:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"=============================="<<endl;
cout<<"You have purchased HYUNDAI-EON"<<endl;
cout<<"=============================="<<endl;
cout<<"Fuel Type:"<<ftype1<<endl;
cout<<"Body Type:"<<btype1<<endl;
cout<<"Colour:"<<colour1<<endl;
cout<<"Seating Capacity:"<<seater1<<endl;
cout<<"Transmission:"<<trans1<<endl;
cout<<"Engine capacity:"<<cc1<<endl;
cout<<"Total Amount is--->"<<price1<<endl;
gotocpaid;


cash2:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"============================"<<endl;
cout<<"You have purchased FORD-FIGO"<<endl;
cout<<"============================"<<endl;
cout<<"Fuel Type:"<<ftype2<<endl;
cout<<"Body Type:"<<btype2<<endl;
cout<<"Colour:"<<colour2<<endl;
cout<<"Seating Capacity:"<<seater2<<endl;
cout<<"Transmission:"<<trans2<<endl;
cout<<"Engine capacity:"<<cc2<<endl;
cout<<"Total Amount is--->"<<price2<<endl;
gotocpaid;

cash3:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"================================="<<endl;
cout<<"You have purchased RENAULT-DUSTER"<<endl;
cout<<"================================="<<endl;
cout<<"Fuel Type:"<<ftype3<<endl;
cout<<"Body Type:"<<btype3<<endl;
cout<<"Colour:"<<colour3<<endl;
cout<<"Seating Capacity:"<<seater3<<endl;
cout<<"Transmission:"<<trans3<<endl;
cout<<"Engine capacity:"<<cc3<<endl;
cout<<"Total Amount is--->"<<price3<<endl;
gotocpaid;

cash4:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"=============================="<<endl;
cout<<"You have purchased MARUTI-ALTO"<<endl;
cout<<"=============================="<<endl;
cout<<"Fuel Type:"<<ftype4<<endl;
cout<<"Body Type:"<<btype4<<endl;
cout<<"Colour:"<<colour4<<endl;
cout<<"Seating Capacity:"<<seater4<<endl;
cout<<"Transmission:"<<trans4<<endl;
cout<<"Engine capacity:"<<cc4<<endl;
cout<<"Total Amount is--->"<<price4<<endl;
gotocpaid;

cash5:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"=============================="<<endl;
cout<<"You have purchase MARUTI-SWIFT"<<endl;
cout<<"=============================="<<endl;
cout<<"Fuel Type:"<<ftype5<<endl;
cout<<"Body Type:"<<btype5<<endl;
cout<<"Colour:"<<colour5<<endl;
cout<<"Seating Capacity:"<<seater5<<endl;
cout<<"Transmission:"<<trans5<<endl;
cout<<"Engine capacity:"<<cc5<<endl;
cout<<"Total Amount is--->"<<price5<<endl;
gotocpaid;


cash6:;
textcolor(BLUE);
cout<<"\n\n\n\n\n\n\t\t\t\t XCLUSV CAR SHOP\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n";
cout<<"================================"<<endl;
cout<<"You have purchased TOYOTA-INNOVA"<<endl;
cout<<"================================"<<endl;
cout<<"Fuel Type:"<<ftype6<<endl;
cout<<"Body Type:"<<btype6<<endl;
cout<<"Colour:"<<colour6<<endl;
cout<<"Seating Capacity:"<<seater6<<endl;
cout<<"Transmission:"<<trans6<<endl;
cout<<"Engine capacity:"<<cc6<<endl;
cout<<"Total Amount is--->"<<price6<<endl;
gotocpaid;

cpaid:;
cout<<"\n\n\n\n\t\t\tEnter the cash paid\t";
cin>>sum;
cout<<"\n\n\n\t\t\tCASH RECIEVED :"<<sum;
getch();
clrscr();
		cout<<"\n\n\n\n\n NO CREDIT OF THE ADDITIONAL DUTY OF";
		cout<<"\n\n   CUSTOMS LEVIED UNDER SECTION (5) OF";
		cout<<"\n\n   SECTION-3 OF THE CUSTOMS TARIFF ACT";
		cout<<"\n\n  1975 HAVE BEEN AVAILED/SHALL BE ADMISSABLE\n\n";
		cout<<"\n\n  CASH RECIEVED:"<<sum<<endl;
		cout<<"\n\n\tTHANK YOU.\t\t\t\tVISIT US AGAIN!!\n";
		cout<<"\n\n\tTHANK YOU FOR USING OUR SERVICE!!\n\n";
		getch();
		goto again;
		}
		else
		{
		clrscr();
		getch();
		goto again;
		}

	case 2:

		//TO DISPLAY THE SHOP DETAILS

		clrscr();
		cout<<"\n\n\n\n\n\t\t\t\tSHOP DETAILS\n\n\n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		cout<<"\t\t  #   TIMING: 11 AM TO 02 PM & 03 PM TO 05 PM                    \n";
		cout<<"\t\t  #   SHOP WILL CLOSED ON TUESDAY.                               \n";
		cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED.            \n";
		cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             \n";
		cout<<"\t\t  #   COLLECT YOUR SMART CARD & BILL AFTER PAYMENT.              \n";
		cout<<"\t\t  #   DO NOT BREAK ANY SHOP ITEMS.                               \n";
		cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        \n";
		cout<<"\t\t  #   Email :- www.xclusv_carshop.com                            \n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		getch();
		clrscr();
		goto again;

	case 3:

		//TO //SEARCH THE RECORDS

		clrscr();
		search();
		getch();
		goto again;

	case 4:

		//TO DELETE THE RECORDS

		clrscr();
		del();
		getch();
		goto again;

	case 5:

		//TO MODIFY THE RECORDS
		clrscr();
		update();
		getch();
		goto again;

	case 6:
		    //TO DISPLAY ALL SAVED RECORDS

		{
		clrscr();
		read();
		getch();
		goto again;
		}




	case 7:

		//TO EXIT FROM THE PROGRAM
		clrscr();
		cout<<"\n\n\n\t\tARE YOU SURE TO EXIT FROM THE PROGRAM??\t";
		cin>>et;
		if(et=='y')
		{
		goto ex;
		}
		else
		{
		goto again;
		}
		ex:;
		clrscr();

		sleep(1);


		clrscr();
		gotoxy(28,30);
		cout<<"THANK YOU FOR SHOPPING!\n\n\n\n ";
		gotoxy(35,35);

		gotoxy(35,25);

		delay(1000);
		cputs("HAVE A NICE DAY");
		gotoxy(45,45);
		cout<<endl;
		cputs("Press ENTER to EXIT.......");
		getch();
		exit(0);
		default:
		cout<<"OOPS! Your choice is WRONG";
		getch();
		goto again;
		}
}
