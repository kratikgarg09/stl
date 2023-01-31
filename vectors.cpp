#include<iostream> 
#include<vector>

using namespace std; 

template <class T>

void display(vector<T> &v){
    cout<<endl<<"Displaying the vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main(){ 


    //Ways to create a vector

    vector<int> vec1;//Zero length vector
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5,5666);  //this for insert the value at the specify position
    
    vector<char> vec2(5); //For 5-element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); // 5-Element character vector from vec 2
    // display(vec3);

    vector<int> vec4(6,13); // 6 element of vector 3s
    display(vec4);
    cout<<vec4.size();

   
    // int element,size;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add top this vector :";
    //     cin>>element;
    //     vec1.push_back(element);
    // }


  
    return 0;
}