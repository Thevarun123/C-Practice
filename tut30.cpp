#include<iostream>
#include<math.h>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
//  class var; // Forward declaration.
 class Red;
 class Point
 {
     int x,y;
     int c1=0;

     public:
     friend class Red;
    //  friend class var;
       friend int distance(Point t1,Red t2);
        Point()
        {  
            // if(c1==0)
            // {
             cout<<"Enter the values of coordinates (x,y) "<<endl;
             cin>>x>>y;            
            
        }
              void outdata()
          {
              cout<<"The coordinates of x and y are ("<<x<<","<<y<<")"<<endl;
              ++c1;
              
          }

          
 };
    class Red
    {
        int x1,y1;
        friend int distance(Point ,Red);
        public: 
       
        int Sec()
        {
            Red r;
        cout<<"Enter the values of coordinates (x1,y1)"<<endl;
                   cin>>r.x1>>r.y1;
                   return 0; 
        }
    };

    int distance(Point t1,Red t2)
    {
        if(t1.x<t2.x1)
        {

        t1.x=pow((t2.x1-t1.x),2);
        }
        else 
        {
          t1.x =pow((t1.x-t2.x1),2);  
        }
        if(t1.y<t2.y1)
        {
        t2.y1=pow((t2.y1-t1.y),2);
        }
        else{
            t2.y1= pow((t1.y-t2.y1),2);
        }
        return sqrt(t1.x+t2.y1);
    }

    // class var
    // {
    //     var()
    //     {
    //         cout<<"Enter the values of (x1,y1) "<<endl;
    //         cin>>x>>y;
    //     }
    //     void showsec(Point P1,Point P2)
    //       {
    //           cout<<"The coordinates of x1 and y1 are ("<<P1.x<<","<<P2.y<<")"<<endl;
    //       }
         
    // };


int main(){
name();
    //  Point p(1,1);
    //  p.outdata();

    //  Point p1(1,1);
    //  p1.outdata();
    Point p;
    p.outdata();
    Red r;
    r.Sec();

   
     cout<<"The distace between the points is :"<<distance(p,r)<<endl;


     return 0;
}