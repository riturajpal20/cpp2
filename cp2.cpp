#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int arr1[3];
        for(int i=0;i<3;i++){
            cin>>arr1[i];
        }
        int arr2[3];
        for(int i=0;i<3;i++){
            cin>>arr2[i];
        }
        int x=0;
        int y=0;
        for(int i=0;i<3;i++){
            if(arr1[i]>arr2[i]){
                x++;
            }
             if(arr2[i]>arr1[i]){
                y++;
            }
            
        }
        if(x>y){
            cout<<"a"<<endl;
        }
        else{
            cout<<"b"<<endl;
            
        }
        
        
      
                
        
    }  
    
	// your code goes here
	return 0;
}
