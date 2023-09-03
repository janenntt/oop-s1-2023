#include <iostream>
#include <string>
using namespace std;

class A{
    protected:
        int a;
    public:
        void set_a(int new_a){
            this -> a = new_a;
        }
        // use const = the method is not allowed to change anything above
        int get_a() const{
            return a;

        }
};
//only protected data members from the parent class become private data members of class B    
class B : public A{
    private: 
        double x;
    public:
    void set_x(double x){this -> x =x;}
    void set_a(int new_a){
        if(new_a<0){
            a=0;
        }else{
            A::set_a(new_a);
        }
    }
    double foo(){
        return x*a;
    }
};

int main(){
    A a;
    B b;
    
    b.set_a(50);
    cout << b.get_a() << endl;
    //b.set_a(10);
    //b.set_x(3);
    //cout << b.foo() << endl;
}