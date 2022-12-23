#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    int a, i = 0;
    string text, old, password1, password2, pass, name, password0, age, user, word, word1;
    string cards[2], cp[2];

    cout<<"                Security system                      "<<endl;
    cout<<"_____________________________________________________"<<endl<<endl;
    cout<<"|                1. Register                         |"<<endl;
    cout<<"|                2. Login                            |"<<endl;
    cout<<"|                3. Change password                  |"<<endl;
    cout<<"|________________4. End program______________________|"<<endl<<endl;

    do{
        cout<<endl<<endl;
        cout<<"Enter your choice :- ";
        cin>>a;
        switch(a){
            case 1:
            {
                cout<<"__________________________________"<<endl<<endl;
                cout<<"|------------Register-------------|"<<endl;
                cout<<"|_________________________________|"<<endl<<endl;
                cout<<"Please enter userName :- ";
                cin>>name;
                cout<<"Please enter passowrd :- ";
                cin>>password0;
                cout<<"Please enter age :- ";
                cin>>age;

                ofstream of1;
                of1.open("file.txt");
                if(of1.is_open()){
                    of1<<name<<"\n";
                    of1<<password0;
                    cout<<"Registration successfull "<<endl;
                }
                 break;
            }
           
        }

    }while(1);
   
}