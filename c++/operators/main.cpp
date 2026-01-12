#include <iostream>
#include <sstream>

using namespace std;
//operator overloading
class Box{
    public:
        double length, width, breadth;
        string boxString;
        Box(){
            length=1, width=1, breadth=1;
        }
        Box(double l, double w, double b){
            length=l, width = w, breadth = b;
        }

        //increment the box by 1    
        Box& operator ++ (){
            length++;
            width++;
            breadth++;

            return *this;
        }
        // operation to print value
        operator const char*(){
            ostringstream boxStream;
            boxStream << "Box :"<<length<<", "<<width<<", "<<breadth;
            boxString = boxStream.str();
            return boxString.c_str();
        }
        //operation for adding two boxes
        Box operator + (const Box& box2){
            Box boxSum;
            boxSum.length = length + box2.length;
            boxSum.width = width + box2.width;
            boxSum.breadth = length + box2.breadth;
            
            return boxSum;
        }    

        //check two boxes are equal
        bool operator == (const Box& box2){
            return ((length == box2.length) && (width ==box2.width) && (breadth == box2.breadth));
        }

};

int main(int argc, char const *argv[])
{
    Box box(10,10,10);
    ++box;
    cout<< box <<endl;

    Box box2(5,5,5);
    cout<< box2 <<endl;

    cout<< "Box1 + Box2 =="<<box + box2 <<endl;    
    return 0;
}
