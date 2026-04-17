#include<iostream>
#include<string.h> // often we can use cstring here or we can say that it is more better to use
#include<stdlib.h>
using namespace std;

class Library{
 public:
        // Book details and student details
        int bookid;
        char bookname[20];
        char author[20];
        char studentname[20];
        int price;
        int pages;
};


int main(){
        Library lib[20];
        int input = 0;
        int count = 0;

        while(input != 3){
                cout<<"Enter 1 to input details"<<endl;
                cout<<"Enter 2 to to display details"<<endl;
                cout<<"Enter 3 to quit"<<endl;
                cin>>input;

                switch(input){
                        case 1:
                                cout<<"Enter book id"<<endl;
                                cin>>lib[count].bookid;

                                cout<<"Enter bookname"<<endl;
                                cin>>lib[count].bookname;

                                cout<<"Enter author name"<<endl;
                                cin>>lib[count].author;

                                cout<<"Enter your name"<<endl;
                                cin>>lib[count].studentname;

                                cout<<"Enter price of the book"<<endl;
                                cin>>lib[count].price;

                                cout<<"Enter no. of pages in the book"<<endl;
                                cin>>lib[count].pages;
                                count++;
                                break;
                        
                        

                }
        }
}
