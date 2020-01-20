#include<iostream>
#include<fstream>
using namespace std;
class customer
{
    private:
        int customer_id;
        char customer_name[50];
        char customer_email[30];
        char customer_mobile[15];
    public:

    void ins(){
        ofstream file;
        file.open("customer.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of customer:\n";
        cin>>customer_id>>customer_name>>customer_mobile>>customer_email;
        file<<customer_id<<" "<<customer_name<<" "<<customer_mobile<<" "<<customer_email<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
    }

    void show()
    {
        ifstream file1;
        file1.open("customer.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>customer_id>>customer_name>>customer_mobile>>customer_email;
            while(!file1.eof()){
            cout<<customer_id<<" "<<customer_name<<" "<<customer_mobile<<" "<<customer_email<<endl;
            file1>>customer_id>>customer_name>>customer_mobile>>customer_email;
            }
        }
    }
};
class product
{
    private:
        int product_id;
        int product_number;
        char product_type[20];
        char product_description[50];
        int product_customer_id;
    public:
        void ins(){
        ofstream file;
        file.open("product.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of product:\n";
        cin>>product_id>>product_number>>product_type>>product_description>>product_customer_id;
        file<<product_id<<" "<<product_number<<" "<<product_type<<" "<<product_description<<" "<<product_customer_id<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
        }
        void show()
    {
        ifstream file1;
        file1.open("product.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>product_id>>product_number>>product_type>>product_description>>product_customer_id;
            while(!file1.eof()){
            cout<<product_id<<" "<<product_number<<" "<<product_type<<" "<<product_description<<" "<<product_customer_id<<endl;
            file1>>product_id>>product_number>>product_type>>product_description>>product_customer_id;
            }
        }
    }
};
class payment
{
    private:
    int payment_id;
    int payment_customer_id;
    int payment_amount;
    char payment_date[15];
    char payment_description[20];
    public:
        void ins(){
        ofstream file;
        file.open("payment.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of payment:\n";
        cin>>payment_id>>payment_customer_id>>payment_amount>>payment_date>>payment_description;
        file<<payment_id<<" "<<payment_customer_id<<" "<<payment_amount<<" "<<payment_date<<" "<<payment_description<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
        }
        void show()
    {
        ifstream file1;
        file1.open("payment.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>payment_id>>payment_customer_id>>payment_amount>>payment_date>>payment_description;
            while(!file1.eof()){
            cout<<payment_id<<" "<<payment_customer_id<<" "<<payment_amount<<" "<<payment_date<<" "<<payment_description<<endl;
            file1>>payment_id>>payment_customer_id>>payment_amount>>payment_date>>payment_description;
            }
        }
    }

};
class role
{
    private:
    int role_id;
    char role_title[20];
    char role_description[20];
    public:
        void ins(){
        ofstream file;
        file.open("role.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of customer:\n";
        cin>>role_id>>role_title>>role_description;
        file<<role_id<<" "<<role_title<<" "<<role_description<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
    }

    void show()
    {
        ifstream file1;
        file1.open("role.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>role_id>>role_title>>role_description;
            while(!file1.eof()){
            cout<<role_id<<" "<<role_title<<" "<<role_description<<endl;
            file1>>role_id>>role_title>>role_description;
            }
        }
    }
};
class permission
{
    private:
    int permission_id;
    int permission_role_id;
    char permission_title[20];
    char permission_module[20];
    char permission_description[20];
    public:
        void ins(){
        ofstream file;
        file.open("permission.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of payment:\n";
        cin>>permission_id>>permission_role_id>>permission_title>>permission_module>>permission_description;
        file<<permission_id<<" "<<permission_role_id<<" "<<permission_title<<" "<<permission_module<<" "<<permission_description<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
        }
         void show()
    {
        ifstream file1;
        file1.open("permission.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>permission_id>>permission_role_id>>permission_title>>permission_module>>permission_description;
            while(!file1.eof()){
            cout<<permission_id<<" "<<permission_role_id<<" "<<permission_title<<" "<<permission_module<<" "<<permission_description<<endl;
            file1>>permission_id>>permission_role_id>>permission_title>>permission_module>>permission_description;
            }
        }
    }
};
class sales
{
private:
    int sales_id;
    char sales_type[15];
    char sales_description[20];
    int sales_amount;
    int sales_customer_id;
public:
    void ins(){
        ofstream file;
        file.open("sales.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of payment:\n";
        cin>>sales_id>>sales_type>>sales_description>>sales_amount>>sales_customer_id;
        file<<sales_id<<" "<<sales_type<<" "<<sales_description<<" "<<sales_amount<<" "<<sales_customer_id<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
        }
        void show()
    {
        ifstream file1;
        file1.open("sales.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>sales_id>>sales_type>>sales_description>>sales_amount>>sales_customer_id;
            while(!file1.eof()){
            cout<<sales_id<<" "<<sales_type<<" "<<sales_description<<" "<<sales_amount<<" "<<sales_customer_id<<endl;
            file1>>sales_id>>sales_type>>sales_description>>sales_amount>>sales_customer_id;
            }
        }
    }
};
class store
{
private:
    int store_id;
    char store_name[20];
    char store_description[30];
    char store_type[20];
public:
    void ins(){
        ofstream file;
        file.open("store.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of customer:\n";
        cin>>store_id>>store_name>>store_description>>store_type;
        file<<store_id<<" "<<store_name<<" "<<store_description<<" "<<store_type<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
    }

    void show()
    {
        ifstream file1;
        file1.open("store.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>store_id>>store_name>>store_description>>store_type;
            while(!file1.eof()){
            cout<<store_id<<" "<<store_name<<" "<<store_description<<" "<<store_type<<endl;
            file1>>store_id>>store_name>>store_description>>store_type;
            }
        }
    }

};
class user
{
private:
    int user_id;
    int user_role_id;
    char user_name[20];
    char user_email[30];
    char user_dob[15];
public:
    void ins(){
        ofstream file;
        file.open("user.dat",ios::app);
        if(!file)
        {
            cout<<"Error in creating file.."<<endl;
            }
        cout<<"File created successfully."<<endl;
        file.seekp(0,ios::end);
        cout<<"enter details of payment:\n";
        cin>>user_id>>user_role_id>>user_name>>user_email>>user_dob;
        file<<user_id<<" "<<user_role_id<<" "<<user_name<<" "<<user_email<<" "<<user_dob<<endl;
        file.close();
        cout<<"File saved and closed succesfully."<<endl;
        }
        void show()
    {
        ifstream file1;
        file1.open("user.dat",ios::in);
        if(!file1){
        cout<<"Error in opening file.";
        }
        else{
            cout<<"File opened and the contents in the file are:\n";
            file1>>user_id>>user_role_id>>user_name>>user_email>>user_dob;
            while(!file1.eof()){
            cout<<user_id<<" "<<user_role_id<<" "<<user_name<<" "<<user_email<<" "<<user_dob<<endl;
            file1>>user_id>>user_role_id>>user_name>>user_email>>user_dob;
            }
        }
    }

};
int main()
{
    customer c1;
    c1.ins();
    c1.show();
    return 0;
}
