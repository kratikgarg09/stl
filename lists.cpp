#include<iostream> 
#include<list>
using namespace std; 

template <class T>
void display(list<T> &lst)
{
    cout<<"{ ";
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"} ";
    cout<<endl;
}
int main(){ 

    ////**ways to use lists**////

//way 1 :-)

    list<int> list1; //list of 0 length

    //inserting data to the list

    list1.push_back(9);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(97);

    // deletion data from the list

    // list1.pop_front();
    //this removes first element of the list 
    // list1.pop_back(); 
    // this removes last element of the list

    // this function removes all the occurences of  that specfic element which is present in the breckets/perenthesis
    // list1.remove(3); 

    //sorting the lists
    // list1.sort();
    
    //Reversing the list
    list1.reverse();

    display(list1);


// Way 2 :-)

    list<int>list2(8); //list of size 7 
    list<int> :: iterator iter;
    for (iter = list2.begin();iter!=list2.end();iter++)
    {
        int n;
        cout<<"enetr value : ";
        cin>>n;
        *iter = n;
    }
    display(list2);

// way 3 (merging the lists)

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List1 after merging"<<endl;
    display(list1);

    return 0;
}