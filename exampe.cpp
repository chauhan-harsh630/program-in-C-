#include<iostream>
#include<string>
using namespace std;
class Animal{
   public:
 
   void printDomastic( const string& animalname ){
      cout<<"Cow: "<<animalname<<endl;
      cout<<"Dog: "<<animalname<<endl;
      cout<<"Cat: "<<animalname<<endl;
   }

};
int main(){
   Animal obj;
   string name = "mypet";
   obj.printDomastic(name);
   return 0;
    
}