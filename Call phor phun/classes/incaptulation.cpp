// Encaptulation is to tie or group the data and the methods together to prevent the direct access, use or modification to 
// the data. In this we just wnat that no one shoul dbe able to access our data directly.

#include<iostream>
using namespace std;

class AbsEmp {
    virtual void AskForPromotion() = 0;
};

class Emp:AbsEmp{
    private:

        /////////////////////////////
        ///// ENCAPTULATION /////////
        /////////////////////////////
        
        string company;
        int age;
    // Protected elements are just like private but are visible to the sub-class 
    protected:
        string name;
    public:
        ////////////////////////////////////////////////
        ///////////// GETTERS AND SETTERS //////////////
        ///////////////////////////////////////////////

        // As we can no longer access the class properties directly therefore we make getters and setters 
        // These are declared in public and being a class method they can access the properties of the class
        // directly and thus provid a indirect access to the elements of the class.
        // In this we can also specify ou rown way to give access to the properties of the class
        void setname(string nam){name = nam;}
        string getname(){return name;}

        void setcom(string com){company = com;}
        string getcom(){return company;}

        void setage(int a){age = a;}
        int getage(){return age;}

        //////////////////////////////////////////
        //////// ABSTRACTION ////////////////////
        ////////////////////////////////////////

        // This is a complex logic for example taking a picture on your phone.
        // Taking a picture is just a click a button for you but at the backend it is a very complex process 
        // To make the user experience good and the hiding of the complexity is called abstraction

        void AskForPromotion(){
            if (company=="Mere baap ki")
                cout<< name << " got promoted!";
            else
                cout<< name << " denied promotion.";
        }

        /////////////////////////////////////////////
        ///// CONSTRUCTOR AND A DISPLAY METHOD //////
        /////////////////////////////////////////////

        void specifications(){
            cout<<"Name: "<<name;
            cout<<"\nCompany: "<<company;
            cout<<"\nAge: "<<age;
        }

        Emp(string nam, string com, int a){
            name = nam;
            company = com;
            age = a;
        }

};
/////////////////////////////////////////
/////////// INHERITANCE ////////////////
///////////////////////////////////////

class Dev:public Emp {
    public:
        bool isDev;
        Dev(string nam, string com, int a,bool isdev):Emp(nam, com, a){isDev = isdev;}
        void Fix(){
            cout<<name<<" Fixing bug "<< getcom();
        }
};

int main(){
    int val;
    Emp employ("Any", "NO", 0);
    // Here we are usong our getters and setters to chaneg the values of class properties
    // This is how we are defining our own way to give acccess the values and manuplate them 
    employ.setname("Nobody");
    employ.setcom("Any");
    employ.setage(30);
    val = employ.getage();

    employ.specifications();

    Emp employ1("Me", "Mere baap ki", 25);

    employ.AskForPromotion();
    employ1.AskForPromotion();
    cout<<"value of val = "<<val;

    Dev d("Suyash", "None", 19, true);
    d.Fix();
    d.AskForPromotion();

    return 0;
} 