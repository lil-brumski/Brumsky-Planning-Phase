#include <iostream>
using namespace std;

int main (){
	    cout<<"Welcome to Brumsky! Sign Up to create an account: "<<endl;
	    
	    
	    cout<<" "<<endl;
	    
	    string name;
	    cout<<"Full name: ";
	    getline(cin,name);
	    
	    string email;
	    cout<<"Email address: ";
	    cin>>email;
	    
	    string password;
	    cout<<"Password: ";
	    cin>>password;
	    
	    string confirm_password;
	    cout<<"Retype your password: ";
	    cin>>confirm_password;
	    while(confirm_password != password){
	    cout<<"Retype your password: ";
	    cin>>confirm_password;
	    }
	    
	    string country;
	    cout<<"Nationality: ";
	    cin>>country;
	    
	    string gender;
	    cout<<"Enter your gender: ";
	    cin>>gender;
	    while(gender != "male" && gender != "female" && gender != "Male" && gender != "Female"){
	    	        cout<<"Invalid gender! Try again: ";
	    	        cin>>gender;   
	    	        }
	    cout<<"You have successfully created your account!"<<endl;
	    
	    cout<<" "<<endl;
	    
	    cout<<"Login: "<<endl;
	    
	    string loginEmail;
	    cout<<"Enter your email: ";
	    cin>>loginEmail;
	    
	    string loginPass;
	    cout<<"Key in your password: ";
	    cin>>loginPass;
	    while(loginEmail != email || loginPass != password){
	    	         cout<<"Details not found! Try again";
	    	         cout<<"Enter your email: ";
	    cin>>loginEmail;
	           cout<<"Key in your password: ";
	    cin>>loginPass;
	    }
	    
	    cout<<"Login Successful!"<<endl;
	    
	    cout<<" "<<endl;
	    
	    cout<<" "<<endl;
	    
	    cout<<"Name: "<< name<<".\nEmail Address: "<<email<<".\nCountry: "<<country<<"."<<endl;
	    
	    return 0;
	    
	    
	    
	
}