#include <iostream>
using namespace std;

int main(){
    
    float a,b,c;
    cout<<"==========KONVERSI SUHU=========="<<endl;
    cout<<"1. Celcius"<<endl;
    cout<<"2. Fahrenheit"<<endl;
    cout<<"3. Reamur"<<endl;
    cout<<"4. Kelvin"<<endl;
    cout<<"================================="<<endl;
    cout<<"Bentuk Asal : ";
    cin>>a;
    cout<<"Bentuk Akhir : ";
    cin>>b;
    cout<<"Suhu : ";
    cin>>c;
    
    if (a==1){
        if(b==1){
            cout<<c<<" C = "<<c<<" C "<<endl;
        }else if(b==2){
            cout<<c<<" C = "<<((9*c)/5)+32<<" F "<<endl;
        }else if(b==3){
            cout<<c<<" C = "<<(4*c)/5<<" R "<<endl;
        }else if(b==4){
        	cout<<c<<" C = "<<c+273<<" K "<<endl;
		}
	}
	if (a==2){
        if(b==1){
            cout<<c<<" F = "<<((c-32)*5)/9<<" C "<<endl;
        }else if(b==2){
            cout<<c<<" F = "<<c<<" F "<<endl;
        }else if(b==3){
            cout<<c<<" F = "<<((c-32)*4)/9<<" R "<<endl;
        }else if(b==4){
        	cout<<c<<" F = "<<(((c-32)*5)/9)+273<<" K "<<endl;
		}
	}
	if (a==3){
        if(b==1){
            cout<<c<<" R = "<<(c*5)/4<<" C "<<endl;
        }else if(b==2){
            cout<<c<<" R = "<<((c*9)/4)+32<<" F "<<endl;
        }else if(b==3){
            cout<<c<<" R = "<<c<<" R "<<endl;
        }else if(b==4){
        	cout<<c<<" R = "<<((c*5)/4)+273<<" K "<<endl;
		}else{
		}
	}
	if (a==4){
        if(b==1){
            cout<<c<<" K = "<<c-273<<" C "<<endl;
        }else if(b==2){
            cout<<c<<" K = "<<(((c-273)*9)/5)+32<<" F "<<endl;
        }else if(b==3){
            cout<<c<<" K = "<<((c-273)*4)/5<<" R "<<endl;
        }else if(b==4){
       	cout<<c<<" K = "<<c<<" K "<<endl;
		}else{
		}
	}
    return 0;   
}
    