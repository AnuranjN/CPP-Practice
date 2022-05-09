#include <iostream>

/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{                                        //Main class Rectangle and declaring integer variables width and height
   public:
        int width,height;
        void display(){
            std::cout<<width<<" "<<height<<std::endl;
        }
};
class RectangleArea: public Rectangle{                  //RectangleArea is derived from class Rectangle
    public:                                             //input of width and height is taken
        void read_input(){
            std::cin>>width>>height;
        }
        void display(){
            std::cout<<width*height<<std::endl;         //to output area
        }
}  ;      


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
