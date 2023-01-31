#include<iostream> 
#include<functional>
#include<algorithm>
using namespace std; 

int main(){ 
    //funtion Objects (functors) : Function wrap in a class so that it  is available like an object

    int arr[] = {1,2,3,34,2,45,55};
    sort(arr,arr+7,greater<int>());
    sort(arr,arr+7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    return 0;
}