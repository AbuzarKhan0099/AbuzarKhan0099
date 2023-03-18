/* C++ Semester Project:
Car Rental System*/

//#include :- Tells the proccessor to include this headerFiles.// included required library files

#include <iostream>   //This HeaderFile is for input and output.  
              
#include <fstream>    //Generaly they use for File to save code in the file. 

#include <conio.h>    /*The conio stands for Console-Input-Output.
                       and use for getch (get cahrachter) and clrar-screen(clrscr)*/

// #include <stdlib.h>                 // (use for printf in c but c++ is the advance of c);
								 
#include <unistd.h>           //Some of these are used at compile time, 
                              //while others are used to interrogate the system at run time

//#include <dos.h>           // (uSE for sound and date and time);

#include <iomanip>       //layout of output
                        //OR iomanip is a library that is used to manipulate the output of C++ program. 
                         // [Means that tarteeb dena]
                           
using namespace std;
class customer           // customer class (data type) that to find that who entered: private or public 
{
	public:                   // (cheak accessbility)
    string customername;
	long long int cnic;
	long long int phnumber;
    string carmodel;
    string carnumber;
    char data;
                                    // variables defined in this class in public mode.
};
class rent : public customer            // inhereted class from customer class
{
	public:                              
	int days=0,rentalfee=0; // additional int vatiables defined
	void data()
	{
		int login();
	login();
	cout << "\n\n\t\t\t -: WELLCOME TO [ENJOY TRAVEL] for Car rent :- "<<endl;
	cout << "\n\n\t\t\t\tPlease Enter your Name: "; //taking data from the user
	cin  >> customername;
	cout << "\n\n\t\t\t\tPlease Enter your CNIC: ";
	cin  >> cnic;
	cout << "\n\n\t\t\t\tPlease Enter your Phone number: ";
	cin  >> phnumber;
    cout << endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; //giving user a choice to select among three different models
        cout <<"\t\t\t\tEnter 'A' for Tesla 2020.  Per/day rate = 60$"<<endl;
        cout <<"\t\t\t\tEnter 'B' for Hyundai 2015.  Per/day rate = 70$"<<endl;
        cout <<"\t\t\t\tEnter 'C' for Ford 2017.  Per/day rate = 80$"<<endl;
        cout <<"\t\t\t\tEnter 'D' for Toyota 2023.  Per/day rate = 90$"<<endl;
        cout <<"\t\t\t\tEnter 'E' for Firari 2021.  Per/day rate = 100$"<<endl;
        cout <<endl;
        cout <<"\t\t\t\tChoose a Car from the above options: ";
        cin  >>carmodel;
        cout <<endl;
        cout <<"********************************************************************"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");        // Clear screen
 
		cout<<"You have choosed Tesla model 2020"<<endl;
		 ifstream inA("A.txt"); //displaying details of model A
         char str[200];
         while(inA)
		  {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");
  
		cout<<"You have choosed Hyundai model 2015"<<endl;
		 ifstream inB("B.txt"); //displaying details of model B
		 
         char str[200];          /*str is a character array variable, 
		                        it is used to store the lines of text that are read from the file 
								"A.txt" or "B.txt" using the getline() function.*/
         while(inB)
		  {
         inB.getline(str, 200);        /*The getline() function is a standard C++ library function
		                                  that is used to read a line of text from an input stream.
			                            It takes in 3 parameters: */
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Ford model 2017"<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC)
		  {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
} 
if(carmodel=="D")
 {
 	system("CLS");
	     cout<<"You have choosed Toyota model 2022"<<endl;
		 ifstream inD("D.txt"); //displaying details of model D
         char str[200];
         while(inD)
		  {
         inD.getline(str, 200);  
         if(inD) cout << str << endl;
     }
     sleep(2);
} 
if(carmodel=="E")
 {
 	system("CLS");
	     cout<<"You have choosed Firari model 2021"<<endl;
		 ifstream inE("E.txt"); //displaying details of model E
         char str[200];
         while(inE)
		  {
         inE.getline(str, 200);  
         if(inE) cout << str << endl;
     }
     sleep(2);
}
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E")
     
      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E");
    cout<<"*******************************************"<<endl;
    cout << "Please provide following information: "<<endl; 
	//getting data from user related to rental service
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*60;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*70;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*80;
        if(carmodel == "D" ||carmodel=="d")
        rentalfee=days*90;
        if(carmodel == "E" ||carmodel=="e")
        rentalfee=days*100;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;     /*setw is a manipulator in C++ 
	                                                                                                  that is used to set the width of the field 
	                                                                                                   for the next insertion operation. 
																									   It is defined in the iomanip header file.*/
    cout << "\t\t	************************************************"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"@AH9900W"<<"   |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<"   |"<<endl;
    cout << "\t\t	| Customer Cnic :"<<"----------------|"<<setw(10)<<cnic<<"|"<<endl;
    cout << "\t\t	| Customer Ph Number :"<<"-- --------|"<<setw(10)<<phnumber<<"   |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<"   |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<"   |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<"   |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<"   |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<"   |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"No! Advance."<<" |"<<endl;
    cout << "\t\t   ************************************************"<<endl;
    
    cout << "\t\t	 ____________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ____________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture @"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	***********************************************************"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty/Late fee fee will be applied"<<endl;
    cout << "\t\t	************************************************************"<<endl;
    cout << "\n\n"<<endl;
    cout << "\t\t   ======  ==    ==  ========  ===      ==  ==      =  ========"<<endl;
    cout << "\t\t     ==    ==    ==  ==    ==  ==  =    ==  ==     =   ="<<endl;
    cout << "\t\t     ==    ========  ========  ==   =   ==  == = =     ========"<<endl;
    cout << "\t\t     ==    ==    ==  ==    ==  ==    =  ==  ==     =          ="<<endl;
    cout << "\t\t     ==    ==    ==  ==    ==  ==     ====  ==      =  ========"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf)
   {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome //welcome class
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353

  if(!in)
   {
    cout << "Cannot open input file, PIN is must to Enter.\n And this pin is only for Producers.";
  }
  char str[1000];
  while(in)
   {
    in.getline(str, 1000);  // delim defaults to '\n' cp
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(3); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
}

};
int main()
{
welcome obj1; //object created for welcome class
obj1.welcum(); //welcum function is called
rent obj2; 
//object created for rent class and further member functions are called
obj2.data();
obj2.calculate();
obj2.showrent();

return 0; //end of the program
}

int login()
{
   string Abuzar ="";               //For login (This is not Customer)
   int in;
   cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t=================================\n";
   cout <<"\t\t\t\t\tFor Login Enter your Correct PIN: \n";
   cout <<"\t\t\t\t\t=================================";
   cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout <<"\t\t\t\t\t===============================";
   cout <<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout <<"\t\t\t\t\t===============================\n\n";	
   cout <<"\t\t\t\t\tEnter Your PIN: ";
   in = _getch();
   while(in != 13)
   {//character 13 is enter
      Abuzar.push_back(in);
      cout << '*';
      in = _getch();
   }
   if(Abuzar == "Abuzarhyder")
   {
      cout << "\n\n\n\t\t\t\t\t\tCongratulation...! \n";
      system("PAUSE");
      system ("CLS");
   }
   else
   {
      cout << "\n\n\t\t\t\t\t\t\tYou Enter Invalid Data!...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }

}
  
