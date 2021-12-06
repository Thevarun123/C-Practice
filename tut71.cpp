#include<iostream>
#include<vector>
using namespace std; 

void name(){
cout<<'Author: Varun Gupta'<<endl;
}
template<class T>
void display(vector<T> &v )
    {
        cout<<"The elements of your vector are:"<<endl;
        for(int i=0;i<v.size();i++)
        {
           cout<<v[i]<<" ";
        //    cout<<v.at(i)<<" ";
           }
        cout<<endl;
    } 

int main(){
name();
   
     char words;
     //Using the zero length vector.
     vector<int> Vect1;
           display(Vect1);
     int element, size;
     //Using the 4-variable character length vector.
     vector<char> Vect2(4);   
      for(int i=0;i<5;i++)
      {
      cout<<"Enter the character:";
      cin>>words;
      Vect2.push_back(words);
      }
           display(Vect2);
     vector<char> Vect3(Vect2);
           display(Vect3);
  
     vector<int> Vect4(5,50);
           display(Vect4);


    //  cout<<"Enter the size of vector :"<<endl;
    //  cin>>size;
    //  for(int i=0;i<size;i++)
    //  {
    //      cout<<"Enter the no. "<<i+1<< " elements of your vector :";
    //      cin>>element;
    //      Vect1.push_back(element);
    //  }
    //        vector<int>:: iterator pin = Vect1.end();
        //    Vect1.insert(pin,786);
    //   cout<<"Return max_size:"<<Vect1.max_size()<<endl;   //Will return the maximum size as possible.
    //   Vect1.resize(5);      //Will resize the vector size. 
        //  Vect1.pop_back();  //Pop the last element of the vector. 

//*************Using the resize function.********************
    //  vector<int> hype;
    //  for(int i=0;i<10;i++)
    //  {
    //      hype.push_back(i);
    //  }
    //     hype.resize(5);
    //     // hype.resize(9,100);
    //     // hype.resize(12,34);
    //  cout<<"The elements are:"<<endl;
    //  for(int i=0;i<hype.size();i++)
    //  cout<<" "<<hype[i];
    //  cout<<endl;
     return 0;
}

