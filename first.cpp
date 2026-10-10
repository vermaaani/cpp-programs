/*#include<iostream>
using namespace std;*/
/*int main(){
    cout<<"HELLO";
    return 0;
}*/
/*int main(){
    string name;
    cout<<"name";
    cin>>name;
    cout<<"hello "<<name;
    return 0;
}*/
/*int main(){
    const int a = 10;
    int b = 20;
    a = 40; // error because i cant change a ki value
    b = 30;
    cout<<a<<b;
    return 0;
}*/
/*  int x; // global outside the code
int main(){ // if asked to print will give precison to local value
int x; // local inside the code
}
*/
/*int main(){

    int a;

    cout << "Enter number: ";
    cin >> a;

    if (a % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}*/
/*int main(){
    for(int i=1;i<=4;i++)
    {
        cout<<i ;
    
    }
    return 0;
}*/
/*int main(){
    int i=1;
    while(i<=5){
       cout<<i; 
       i++;
    }
    
    return 0;

}*/
#include <iostream>
using namespace std;

int main() {

    int pin;

    cout << "Enter PIN: ";
    cin >> pin;

    while (pin != 9999) {

        cout << "Incorrect, try again: ";
        cin >> pin;
    }

    return 0;
}