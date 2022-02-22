#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
  int Heigth;
  int Width;
  int Length;

};

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
  struct Box box1,box2;
  int totalvolume;

    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalValume = volume(box1.Height,box1.width,box1.Length)+volume(box2.Height,box2.width,box2.Length);
    cout<<"Volume of Box is "<< totalVolume<<endl;


   
    return 0;
}
int volume(int heigth,int width,int length){
  return height*width*length;
}

// Implement the functions here
