#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

    struct emp{
       string name,id,address;
       int contact,salary;
       };
      emp e[100];
      int total = 0;
     void empdata(){
          system("CLS");
          system("color 73");
          int choice;
          cout<<"\nHow many employees data do you want to enter ";
          cin>>choice;
          for(int i=total;i<total+choice;i++){
                cout<<"\nEnter data of employee "<<i+1<<endl;
                cout<<"Employee name: ";
                cin>>e[i].name;
                cout<<"Employee ID: ";
                cin>>e[i].id;
                cout<<"Employee Address: ";
                cin>>e[i].address;
                cout<<"Employee Contact: ";
                cin>>e[i].contact;
                cout<<"Employee Salary: ";
                cin>>e[i].salary;
                
          }
          total=total+choice;
          }
     void showdata(){
          system("CLS");
          system("color 80");
            if(total!=0)
              {
               for(int i=0;i<total;i++){
                       cout<<"\n\n\t\tData of Employee "<<i+1<<endl;
                       cout<<"\nEmployee name: "<<e[i].name<<endl;
                       cout<<"Employee ID: "<<e[i].id<<endl;
                       cout<<"Employee Address: "<<e[i].address<<endl;
                       cout<<"Employee Contact: "<<e[i].contact<<endl;
                       cout<<"Employee Salary: "<<e[i].salary<<endl;
                     }
              } 
             else{
                cout<<"\n Your recorde is empty."; 
              }         
          }
     void search(){
          system("CLS");
          system("color 37");
            if(total!=0)
              {
                  string id;
                  cout<<"\n\n\t\t Enter ID of data which you want to search ";
                  cin>>id;
               for(int i=0;i<total;i++){
                       if(id==e[i].id){
                       cout<<"\n\n\t\tData of Employee "<<i+1<<endl;
                       cout<<"\nEmployee name: "<<e[i].name<<endl;
                       cout<<"Employee ID: "<<e[i].id<<endl;
                       cout<<"Employee Address: "<<e[i].address<<endl;
                       cout<<"Employee Contact: "<<e[i].contact<<endl;
                       cout<<"Employee Salary: "<<e[i].salary<<endl;
                       break;
                     }
                     if(i==total-1){
                          cout<<"No such record found.";
                          }
              } 
              }
             else{
                cout<<"\n Your recorde is empty."; 
              }         
          }
     void update(){
          system("CLS");
          system("color 73");
            if(total!=0)
              {
                  string id;
                  cout<<"\n\n\t\t Enter ID of data which you want to Update ";
                  cin>>id;
               for(int i=0;i<total;i++){
                       if(id==e[i].id){
                                       cout<<"\n\n\t\tPrevious Data:";
                       cout<<"\n\n\t\tData of Employee "<<i+1<<endl;
                       cout<<"\nEmployee name: "<<e[i].name<<endl;
                       cout<<"Employee ID: "<<e[i].id<<endl;
                       cout<<"Employee Address: "<<e[i].address<<endl;
                       cout<<"Employee Contact: "<<e[i].contact<<endl;
                       cout<<"Employee Salary: "<<e[i].salary<<endl;
                       
                       cout<<"\n\n\t\tEnter New Data";
                       cout<<"\nEmployee name: ";
                       cin>>e[i].name;
                       cout<<"Employee ID: ";
                       cin>>e[i].id;
                       cout<<"Employee Address: ";
                       cin>>e[i].address;
                       cout<<"Employee Contact: ";
                       cin>>e[i].contact;
                       cout<<"Employee Salary: ";
                       cin>>e[i].salary;
                       break;
                     }
                     if(i==total-1){
                          cout<<"No such record found.";
                          }
              } 
              }
             else{
                cout<<"\n Your recorde is empty."; 
              }         
          }
     void del(){
          system("CLS");
          system("color 80");
          if(total!=0){
                  char user;
                  cout<<"Press 1 to delete full record"<<endl;
                  cout<<"Press 2 to delete specific record"<<endl;
                  user=getch();
                  if(user=='1'){
                                total=0;
                                cout<<"All record is deleted...!!";
                                }
                  else if(user=='2'){
                       system("CLS");
                       string id;
                       cout<<"\n\n\t\t Enter ID of data which you want to delete ";
                       cin>>id;
                  for(int i=0;i<total;i++){
                       if(id==e[i].id){
                              for(int j=i;j<total;j++){
                                       e[j].name=e[j+1].name;
                                       e[j].id=e[j+1].id;
                                       e[j].address=e[j+1].address;
                                       e[j].contact=e[j+1].contact;
                                       e[j].salary=e[j+1].salary;
                                       total--;
                                       break;
                                       }
                              cout<<"\n\nYour specific record is deleted.....";
                              if(i==total-1){
                                 cout<<"No such record found.";
                          }
                                  }
                       }
                  }
           else {
                cout<<"Your record is empty";
                }
          } 
          }
int main()
{
    system("color 37");
    cout<<"\n\n\t\tEMPLOYEE MANEGEMENT";
    cout<<"\n\n\t\tSign in Page";
    string username,password;
    cout<<"\n\n\t\tEnter username: ";
    cin>>username;
    cout<<"\n\t\tEnter Password: ";
    cin>>password;
    cout<<"\n\t\tYour id is creating please wait.";
    for(int i=0;i<=3;i++)
    {
        cout<<".";
        Sleep(1000);
    }
    cout<<"Your id is creating successfully."<<endl;
    system("CLS");
    start:
    cout<<"\n\n\t\tEMPLOYEE MANEGEMENT";
    cout<<"\n\n\t\tLogin Page";
    string username1,password1;
    cout<<"\n\n\t\tEnter username: ";
    cin>>username1;
    cout<<"\n\t\tEnter Password: ";
    cin>>password1;
    if(username1==username&&password1==password)
    {
         system("CLS");
          char user;
          while(1){
                   cout<<"\n\nPress 1 to Enter data"<<endl;
                   cout<<"Press 2 to Show data"<<endl;
                   cout<<"Press 3 to Search data"<<endl;
                   cout<<"Press 4 to Update data"<<endl;
                   cout<<"Press 5 to delete data"<<endl;
                   cout<<"Press 6 to Logout data"<<endl;
                   cout<<"Press 7 to Exit data"<<endl; 
                   user=getch();
                   switch(user){
                                case '1':
                                     empdata();
                                     break;
                                case '2':
                                     showdata();
                                     break;
                                case '3':
                                     search();
                                     break;
                                case '4':
                                     update();
                                     break;
                                case '5':
                                     del();
                                     break;
                                case '6':
                                     system("CLS");
                                     goto start;
                                     break;
                                default:
                                     cout<<"\aInvalid input.";
                                     break;
                                     
                   }      
                   }                              
    }
    else if(username1!=username)
    {
          system("CLS");
         cout<<"\n\t\t\aYour username is incorrect.";
         goto start;
    }
    else if(password1!=password)
    {
          system("CLS");
         cout<<"\n\t\t\aYour Password is incorrect.";
         goto start;
    }
    
    return 0;
}
