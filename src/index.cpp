
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class Student{
    public:
       int student_id;
       string student_name;
       string student_address;
       string student_department;
       string student_blood_group;
       string DOB;                 
       char gender;
       void setStudentDetails();
       void getStudentDetails();
       bool isNumber(const std::string &s) {
         return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
      }
};

// Here we are taking the student details 

void Student::setStudentDetails(){

    cout<<"\n\n--------WELCOME TO THE REGISTRATION PORTAL--------"<<endl;
    cout<<endl;
    bool flag5=false,flag6=false,flag7=false,flag8=false,flag9=false,flag10=false,flag11=false;

    while(!flag5){
        cout<<"\n Enter Student ID : ";
        cin.sync();
        cin>>student_id;
        if(cin.fail())
            {
                flag5=true;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
                cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag5=!flag5;
    };

    while(!flag6){
          cout<<"\n Enter Student Name : ";
          cin.sync();
          getline(cin,student_name);
        if(isNumber(student_name))
            {
                flag6=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag6=!flag6;
    };
    
    while(!flag7){
          cout<<"\n Enter Student Address : ";
          cin.sync();
          getline(cin,student_address);
        if(isNumber(student_address))
            {
                flag7=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag7=!flag7;
    };

    while(!flag8){
         cout<<"\n Enter Student Department : ";
         cin.sync();
         cin>>student_department;
        if(isNumber(student_department))
            {
                flag8=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag8=!flag8;
    }
    
     while(!flag9){
        cout<<"\n Enter Student Blood Group : ";
        cin.sync();
        cin>>student_blood_group;
        if(isNumber(student_blood_group))
            {
                flag9=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag9=!flag9;
    }
     while(!flag10){
        cout<<"\n Enter Student Date of Birth (dd-mm-yyyy): ";
        cin.sync();
        cin>>DOB;
        if(isNumber(DOB))
            {
                flag10=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag10=!flag10;
    }
    while(!flag11){
         cout<<"\n Gender : ";
         cin.sync();
         cin>>gender;
        if(isdigit(gender))
            {
                flag11=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag11=!flag11;
    }
     
    cout<<"\n ------Data Added Successfully------"<<endl;
}



// Here we are getting the student details 

void Student :: getStudentDetails(){

    cout<<"\n\n--------HERE ARE THE DETAILS--------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Student ID : "<<student_id<<endl;
    cout<<"Student Name : "<<student_name<<endl;
    cout<<"Student Address : "<<student_address<<endl;
    cout<<"Student Department : "<<student_department<<endl;
    cout<<"Student Blood Group : "<<student_blood_group<<endl;
    cout<<"Student Date of Birth : "<<DOB<<endl;
    cout<<"Gender : "<<gender<<endl;
    cout<<endl;
    cout<<endl;
    
}

// Class Modules Starts Here....

class Modules:public Student{     // Class Module Inherit properties of Student Class 
    public:
      int module_ID;
      string module_name;
      string module_description;
      int module_duration;
      float module_fees;
      string module_start_date;
      void setModuleDetails();
      void getModuleDetails();
};



// Here we are taking the Modules details 

void Modules :: setModuleDetails(){

    cout<<"\n\n--------ADD THE MODULES HERE--------"<<endl;
    bool flag_a=false,flag_b=false,flag_c=false,flag_d=false,flag_e=false,flag_f=false,flag_g=false;

  while(!flag_a){
          cout<<"\n Enter Module ID : ";
          cin.sync();
          cin>>module_ID;
        if(cin.fail())
            {
                flag_a=true;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
                cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_a=!flag_a;
    };
   
  while(!flag_b){
            cout<<"\n Enter Module Name : ";
            cin.sync();
            getline(cin,module_name);
        if(isNumber(module_name))
            {
                flag_b=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_b=!flag_b;
    };
   while(!flag_c){
           cout<<"\n Enter Module Description : ";
           cin.sync();
           getline(cin,module_description);
        if(isNumber(module_description))
            {
                flag_c=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_c=!flag_c;
    };

    while(!flag_d){
            cout<<"\n Enter Module Duration(Month) : ";
            cin.sync();
            cin>>module_duration;
        if(cin.fail())
            {
                flag_d=true;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
                cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_d=!flag_d;
    };
    while(!flag_e){
             cout<<"\n Enter Module Fees : ";
             cin.sync();
             cin>>module_fees;
        if(cin.fail())
            {
                flag_e=true;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<endl;
                cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_e=!flag_e;
    };

     while(!flag_g){
              cout<<"\n Enter Module start Date(dd-mm-yyyy) : ";
              cin.sync();
              cin>>module_start_date;
        if(isNumber(module_start_date))
            {
                flag_g=true;
                cout<<"\nNOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
            }
          flag_g=!flag_g;
    };
   
     
    cout<<"\n ------Data Added Successfully------"<<endl;
}

// Here we are getting the Modules details 

void Modules :: getModuleDetails(){

    cout<<"\n\n--------HERE ARE THE MODULES DETAILS--------"<<endl;
    cout<<endl;
    cout<<endl;  
    cout<<" Module ID : "<<module_ID<<endl;
    cout<<" Module Name : "<<module_name<<endl;
    cout<<" Module Description : "<<module_description<<endl;
    cout<<" Module Duration(Month) : "<<module_duration<<endl;
    cout<<" Module Fees : "<<module_fees<<endl;
    cout<<" Module start Date(dd-mm-yyyy): "<<module_start_date<<endl;
    cout<<endl;
    cout<<endl;
}




// Main Function Starts here............



int main(){

   Modules module[20];     // Array of Objects
  
  /*
   int no_of_inputs;
   cout << "Enter no. of record you want to add ";
   cin>>no_of_inputs;

   Modules module[no_of_inputs];
  
  */

  // Variables 
   int choice;
   int student_count=0;
   int module_count=0;
   int stud_ID,M_ID;
   string name,addr,dept,Blood_g,dob,mod_name,mod_descr,mod_start;
   int mod_duration;
   float mod_fee;
   char gen;
   bool flag1=0,flag2=0,flag3=0,flag4=0;


   do{
      cout<<"\n\n--------------WELCOME TO THE COLLEGE REGISTRATION SYSTEM--------------"<<endl;
     
      cout<<"\n 1> Add Student Record ";
      cout<<"\n 2> Update Student Record ";
      cout<<"\n 3> Search Any Student Record ";
      cout<<"\n 4> Get All Student Record ";
      cout<<"\n 5> Add Module ";
      cout<<"\n 6> Get Any Module Details ";
      cout<<"\n 7> Update Any Module ";
      cout<<"\n 8> Get All Modules Details ";
      cout<<"\n 9> Exit.. ";
      cout<<"\n Enter Your Choice : ";
      cin>>choice;

      if(cin.fail() || choice>9 || choice==0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<endl;
            cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
        }
      switch(choice){
        
          case 1:
             module[student_count].setStudentDetails();
             student_count++;
             break;

          case 2:
              int update_details1;
              if(student_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
            do{
              cout<<"\n Enter Student ID : ";
              cin>>stud_ID;
              for(int i=0;i<student_count;i++){
                if(stud_ID == module[i].student_id){
                    flag3=1;
                    do{
                     cout<<"\n\n 1> Student Name  ";
                     cout<<"\n 2> Student Address  ";
                     cout<<"\n 3> Student Department  ";
                     cout<<"\n 4> Student Blood Group  ";
                     cout<<"\n 5> Student Date of Birth (dd-mm-yyyy) ";
                     cout<<"\n 6> Gender ";
                     cout<<"\n 7> Exit..";
                     cout<<"\n What do you want to update :";
                     cin>>update_details1;
                     if(cin.fail() || update_details1>7 || update_details1==0)
                      {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<endl;
                        cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
                      }
                      switch(update_details1){
                         case 1:
                             cout<<"\n Enter New Name ";
                             cin.sync();
                             cin>>name;
                             module[i].student_name=name;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break;
                         case 2:
                             cout<<"\n Enter New Address ";
                             cin.sync();
                             getline(cin,addr);
                             module[i].student_address=addr;
                             cout<<endl;
                             cout<<"\n Updated Successfully ";
                             break;
                         case 3:
                             cout<<"\n Enter New Department ";
                             cin.sync();
                             cin>>dept;
                             module[i].student_department=dept;
                             cout<<endl;
                             cout<<"\n Updated Successfully ";
                             break; 
                          case 4:
                             cout<<"\n Enter New Blood Group ";
                             cin.sync();
                             cin>>Blood_g;
                             module[i].student_blood_group=Blood_g;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break; 
                          case 5:
                             cout<<"\n Enter New Date of Birth ";
                             cin.sync();
                             cin>>dob;
                             module[i].DOB=dob;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break; 
                           case 6:
                             cout<<"\n Enter New Blood Group ";
                             cin.sync();
                             cin>>gen;
                             module[i].gender=gen;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break;
                          
                           case 7:
                             break;
                          
                      }

                    } while(update_details1!=7);
                }
              }
              if(flag3==0){
                  cout<<"Not a Valid ID !! Please Enter Valid ID "<<endl;
              }
            } while(flag3!=1);
              break;

          case 3:
              int stud_ID;
              if(student_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
              do{
                cout<<"\n Enter Student ID : ";
                cin>>stud_ID;
                for(int i=0;i<student_count;i++){
                if(stud_ID == module[i].student_id){
                    flag1=1;
                    module[i].getStudentDetails();
                }
              }
              if(flag1==0){
                cout<<"Not a Valid ID !! Please Enter Valid ID "<<endl;
              }
            } while(flag1!=1);
             break;

          case 4:
              if(student_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
              for(int i=0;i<student_count;i++){
                  module[i].getStudentDetails();
              }
             break;

          case 5:
             module[module_count].setModuleDetails();
             module_count++;
             break;

           case 6:
              int Mod_ID;
              if(module_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
              do{
              cout<<"\n Enter Module ID : ";
              cin>>Mod_ID;
              for(int i=0;i<module_count;i++){
                if(Mod_ID == module[i].module_ID){
                    flag2=1;
                    module[i].getModuleDetails();
                }
              }
              if(flag2==0){
                cout<<"Not a Valid ID !! Please Enter Valid ID "<<endl;
              }
            }while(flag2!=1);
             break;

            case 7:
              int update_details2;
              if(module_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
            do{
              cout<<"\n Enter Module ID : ";
              cin>>M_ID;
              for(int i=0;i<module_count;i++){
                if(M_ID == module[i].module_ID){
                    flag4=1;
                    do{
                     cout<<"\n\n 1> Module Name  ";
                     cout<<"\n 2> Module Description  ";
                     cout<<"\n 3> Module Duration  ";
                     cout<<"\n 4> Module Fees  ";
                     cout<<"\n 5> Module Start Date (dd-mm-yyyy) ";
                     cout<<"\n 6> Exit..";
                     cout<<"\n What do you want to update :";
                     cin>>update_details2;
                     if(cin.fail() || update_details2>6 || update_details2==0)
                      {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<endl;
                        cout<<"NOT A VALID INPUT !!! PLEASE ENTER THE VALID INPUT"<<endl<<endl;            
                      }
                      switch(update_details2){
                         case 1:
                             cout<<"\n Enter New Module Name ";
                             cin.sync();
                             cin>>mod_name;
                             module[i].module_name=mod_name;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break;
                         case 2:
                             cout<<"\n Enter New Module Description ";
                             cin.sync();
                             getline(cin,mod_descr);
                             module[i].module_description=mod_descr;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break;
                         case 3:
                             cout<<"\n Enter New Module Duration ";
                             cin.sync();
                             cin>>mod_duration;
                             module[i].module_duration=mod_duration;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break; 
                          case 4:
                             cout<<"\n Enter New Module Fees ";
                             cin.sync();
                             cin>>mod_fee;
                             module[i].module_fees=mod_fee;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break; 
                          case 5:
                             cout<<"\n Enter New Module Start Date ";
                             cin.sync();
                             cin>>mod_start;
                             module[i].module_start_date=mod_start;
                             cout<<endl;
                             cout<<"\n Updated Successfully  ";
                             break; 
                        
                         case 6:
                             break;
                        
                      }

                    } while(update_details2!=6);
                }
              }
              if(flag4==0){
                  cout<<"Not a Valid ID !! Please Enter Valid ID "<<endl;
              }

            } while(flag4!=1);
              break;

            case 8:
              if(module_count==0){
                cout<<"No Data Available Here...."<<endl;
                break;
              }
              for(int i=0;i<module_count;i++){
                  module[i].getModuleDetails();
              }
              break;
        
      }
      
   } while(choice!=9);
   
} 

// END 


/* TESTING 

1- If we are entering other than digits that are shown for selecting the options then program will give
   an error message.
2- If user enters input in other data type that are not compatible with defined data type then an
   error message will be shown until user not give the correct input.
3- If any record are not added(like student details or module details) yet and if user wants to search any
   record or update any record then an error message will be shown.
4- if user wants to search or update any particular record then if user enters wrong ID that are not available
   then an error messsage will be shown.  

*/