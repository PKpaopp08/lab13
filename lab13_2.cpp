#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool im[][M],int S,int X,int Y){
    im[X][Y] = 1;
    for(int i=0;i<30;i++){
               
            for(int j=0;j<70;j++){
               
                if(sqrt(pow(i-X,2)+pow(j-Y,2)) <= S-1){
                    im[i][j] = 1;
                }
            
            } 
        
    } 
    
}


void showImage(const bool im[][M]){
     for(int i=1;i<73;i++){
        cout<<"-";
        
    } 
    cout << endl;
    for(int i=0;i<30;i++){
        cout<<"|";           
            for(int j=0;j<70;j++){
                if(im[i][j] == 0){
                    cout<<" ";
                }
                else if(im[i][j] == 1){
                    cout<<"*";
                }
                
            
            } 
        cout<<"|"; 
        cout << endl;
    } 
    for(int i=1;i<73;i++){
        cout<<"-";
        
    } 
    cout << endl;
    
}