#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Book {
	private char name[25];
  private int bookNo;
  private char location[10];
  private bool checkedOut;
  
  public Book(char[] n, int no, char[] loc, book check) {
  	name = n;
    bookNo = no;
    location = loc;
    checkedOut = check;
  }
  
  public char[] getName() {
		return name;
  }
  
  public int getBookNo() {
    return bookNo;
  }
  
  public char[] getLocation() {
  	return location;
  }
  
  public void setName(char[] inputName) {
    name = inputName;
  }
  
  public void setBookNo(int inputBookNo) {
    bookNo = inputBookNo;
  }
  
  public void setLocation(char[] inputLocation) {
    location = inputLocation;
  }
  
   public bool getCheckedOut() {
  	return checkedOut;
  }
  
  public void setCheckedOut(bool checked) {
    checkedOut = checked;
  }
}

class Student {
  private char name[25];
  private int studentNo;
  private char address[25];
  
  
}

int menu() {
  int choice;
  cout << "Library";
  cout << "1. Check out a book." << "\n2. Return a book." << "\n3.Get a library card." << "4. Pay Fines";
  cout << "\nWhat do you want to do? Enter option (1-4): ";
  cin >> choice;
  return choice;
}

void create_student(){
    clrscr();
    cout<<"\nNEW STUDENT ENTRY...\n";
    cout<<"\nEnter Admission number : ";
    cin>>admno;
    cout << "\n\nEnter Name of Student : ";
    gets(name);
    token = 0;
    stbno[0] = '/0';
    cout<<"\n\nStudent Record Created..";
}

void show_student()
  {
      cout<<"\nAdmission no. : "<<admno;
      cout<<"\nStudent Name : ";
      puts(name);
      cout<<"\nNo of Book issued : "<<token;
      if(token==1)
          cout<<"\nBook No "<<stbno;
  }

void checkBook() {
}

void returnBook() {
}

void newCard() {
}

void payfine() {
}

void create_book()
	{
        cout<<"\nNEW BOOK ENTRY...\n";
        cout<<"\nEnter The book no.";
        cin>>bno;
        cout<<"\n\nEnter The Name of The Book ";
        gets(bname);
        cout<<"\n\nEnter The Author's Name ";
        gets(aname);
        cout<<"\n\n\nBook Created..";
    }

void show_book()
{
    cout<<"\nBook no. : "<<bno;
    cout<<"\nBook Name : ";
    puts(bname);
    cout<<"Author Name : ";
    puts(aname);
}

void modify_book()
{
    cout<<"\nBook no. : "<<bno;
    cout<<"\nModify Book Name : ";
    gets(bname);
    cout<<"\nModify Author's Name of Book : ";
    gets(aname);
}

int main() {
  int choice = menu();]
  Student student1;
  if (choice = 1) {
    checkBook();
  }
  else if (choice = 2) {
    returnBook();
  }
  else if (choice = 3) {
    newCard();
  }
  else if (choice = 4) {
    payFine();
  }
  else {
    cout << "Enter a valid choice.";
  }
}