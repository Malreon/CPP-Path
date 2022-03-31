#include<iostream>
#include<memory>
using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    public:
    Rectangle(int L, int W){
        length = L;
        width = W;
    }
    int area(){
        return length * width;
    }
    ~Rectangle(){ cout << "Rectangle Destroyed\n";}
};

int main(){
    unique_ptr<Rectangle> rctPTR1 = make_unique<Rectangle>(10, 5);
    cout << rctPTR1->area() << endl;
    
   // unique_ptr<Rectangle> rctPTR2 = make_unique<Rectangle>();
   // rctPTR2 = move(rctPTR1);
   // cout << rctPTR2->area() << endl;
}