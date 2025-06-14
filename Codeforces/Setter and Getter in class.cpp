#include<bits/stdc++.h>
using namespace std;
class book{
       private:
          int page;
          float price;
          char name[200];
       public:
           void setpage(int p)
           {
               page=p;
           }
            void setprice(float pr)
           {
               price=pr;
           }
            void setname(char *n)
           {
               strcpy(name, n);
           }
    void display(){
       cout<<"The page is : "<<page<<endl;
       cout<<"The price is :"<<price<<endl;
       cout<<"The name is :"<<name<<endl;
    }
};

int main()
{
    book b1, b2;
    b1.setpage(100);
    b1.setprice(300.92);
    b1.setname("Web Programming");
    b1.display();

    cout<<endl<<endl;
     b2.setpage(1110);
    b2.setprice(525.929);
    b2.setname("Computer Programming");
    b2.display();
}

