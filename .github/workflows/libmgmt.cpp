#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;

//**************LIBRARY MANAGEMENT SYSTEM RECORD***************//
struct book  //book structure
{
	int bookID;
	char bookname[30];
	char authorofbook[30];
	int noofcopies;
	float costofbook;
};
const int books=5;//Maximum 5 book Enter in the record
int arr;//array declared
book bookobj[books];


void Add_Book()//ENTER THE BOOK RECORD
{
	if(arr < books)
	{
		cout<<"---***Enter  the Details of Books---***"<<endl;
		cout<<"Enter a book id="<<endl;
		cin>>bookobj[arr].bookID;
		cout<<"Enter book title="<<endl;
		cin>>bookobj[arr].bookname;
		cout<<"Enter name of author="<<endl;
		cin>>bookobj[arr].authorofbook;
		cout<<"Enter the number of books="<<endl;
		cin>>bookobj[arr].noofcopies;
		cout<<"Enter the cost of book="<<endl;
		cin>>bookobj[arr].costofbook;
		arr++;
	}
	else
	    {
	    	cout<<"No more space in system for another"<<endl;
		
	    }
}

void Display_Books()//DISPLAY THE BOOK RECORD
{

	for(int i=0; i < arr; i++)
	{
		cout<<"---***Detail of all books in liabrary***---";
		cout<<"Book ID="<<bookobj[i].bookID<<endl;
		cout<<"Book Title is="<<bookobj[i].bookname<<endl;
		cout<<"Author Name="<<bookobj[i].authorofbook<<endl;
		cout<<"Number of copies="<<bookobj[i].noofcopies<<endl;
		cout<<"cost of book="<<bookobj[i].costofbook<<endl;
	}
}

void Book_Name()//SEARCH BY BOOK NAME
{
	char search_book[30];
	cout<<"Enter the name of book="<<endl;//Book BY SEARCH BY NAME
	cin>>search_book;
	int i,flag=0;
	for(i=0;i<arr;i++)
	{
		if(strcmp(search_book,bookobj[i].bookname)==0)
		{
			cout<<endl;
		    cout<<"Book ID="<<bookobj[i].bookID<<endl;
		    cout<<"Book Title is="<<bookobj[i].bookname<<endl;
		    cout<<"Author Name="<<bookobj[i].authorofbook<<endl;
			cout<<"Number of copies="<<bookobj[i].noofcopies<<endl;
		    cout<<"cost of book="<<bookobj[i].costofbook<<endl;
			flag=flag+1;
		}
		
	}
	if (flag==0)
	{cout<<"book not available"<<endl;}
}


void Book_Author()//SEARCH BY BOOK AUTHOR
{
	char search_book[30];
	cout<<"Enter the name of Author="<<endl;//Book BY SEARCH BY AUTHOR
	cin>>search_book;
	int i,flag=0;
	for(i=0;i<arr;i++)
	{
		if(strcmp(search_book,bookobj[i].authorofbook)==0)
		{
			cout<<endl;
		    cout<<"Book ID="<<bookobj[i].bookID<<endl;
		    cout<<"Book Title is="<<bookobj[i].bookname<<endl;
		    cout<<"Author Name="<<bookobj[i].authorofbook<<endl;
			cout<<"Number of copies="<<bookobj[i].noofcopies<<endl;
		    cout<<"cost of book="<<bookobj[i].costofbook<<endl;
			flag=flag+1;
			
		}
		
	}
if (flag==0)
	{cout<<"book not available"<<endl;}
    
}

void Book_Sort()//SORT BOOK LIST BY NAME
{
    int i,j;
    char t[20];

	for(i=1; i<5; i++)
        {
                for(j=1; j<5; j++)
                {
                        if(strcmp(bookobj[j-1].bookname, bookobj[j].bookname)>0)
                        {
                                strcpy(t, bookobj[j-1].bookname);
                                strcpy(bookobj[j-1].bookname, bookobj[j].bookname);
                                strcpy(bookobj[j].bookname, t);
                        }
                }
        }
        cout<<"\n Names Sorted in Alphabetical Order : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cout<<bookobj[i].bookname<<"\n";
        }
	
	
	
}

int main()//MAIN BODY START
{
	int choice;
	char input;
	do
	{
		cout<<"***---Library Book Record System***--"<<endl;
		cout<<"Press 1 to enter a book record:"<<endl;
		cout<<"press 2 to Display all Records of books:"<<endl;
		cout<<"press 3 to search book by name:"<<endl;
		cout<<"press 4 to search book by Author:"<<endl;
		cout<<"press 5 to sort books by name:"<<endl;
		cout<<"press 6 to Exit from the system:"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;

		switch(choice)//Switch statement used
		{
			case 1://case 1 Add Book
				Add_Book();
				break;
			case 2://Case 2 Display Book
			    Display_Books();
				break; 	
			case 3://Case 3 Search By Book Name
			    Book_Name();
				break;	
		    case 4://Case 4 Search By Book Author
			    Book_Author();
				break;
			case 5://Case 5 Sort Books By Name
			    Book_Sort();
				break;
			case 6://case 6 exit 
			    exit(0);
			default:
				cout<<"invalid choice please try again";
		}
		cout<<"Are you want to continue,please press y or Y"<<endl;
		cin>>input;

	}while(input=='y'||input=='Y');
}
