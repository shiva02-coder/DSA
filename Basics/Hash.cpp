#include <bits/stdc++.h>
using namespace std;
 

// int main(){     //HashMaping is the Efficent approach of counting how manny times a variable appears in an array than running a for loop and calculting in that manner

//     int array[] = {0,0,3,5,4,5,5,2,3,4};  //array is defined
//     int sizeOfArray = sizeof(array) / sizeof(array[0]);    //one limitation is that the elements will get stored in same index. So if i have the largest element in an array as 52335, then i have to make the size of the hash as 52335(Doen't matter if other elements are small asf)
    
//     int hash[6]={0};    //created an hash space with initial value of 0 in all spaces and now it's ready to store the count of the elements from 0 to 6 in it of all boxex for my element to get counted and stored directly like a train box with grouped items in their respected boxes. Note- Size should be 1 bigger than the biggest element in the array. EXPLANATION ^
//     for(int i=0; i<sizeOfArray; i++){   //this means i will go n times
//         hash[array[i]] += 1;    //by now my hash is ready and it have counted every element and replicated those element as their same indexes(i.e index is the number itself), so basiclly now every index hold the count of those elements in the array and this all shit is stored in a Hash  
//     }

//     cout<<hash[0]<<" ";   //now i just gotta enter the element whom total occerance i am looking for
//     cout<<hash[5]<<"\n";       //this is how i find singular count of occurance if i want to 

//     for(int i=0; i<6; i++){
//         if(hash[i]>0){      //this check that we won't get those numbers which are not present in the array but in loop having no count
//         cout<<"Number "<<i<<" Has Total Occurence of  "<<hash[i]<<" Times\n";} 
//     }    //Note- we cannot hash values more than the range 10^6(inside of the main if we declare hash) and 10^7(IF WE declare hash outside) for bool it's 10^7(inside the main) & 10^8(outside the main)
// }





// int main(){    //finding the count of 'lower case' string charactor using hash

//    int st='a';  //i defined it as a int so will get the ascii value of it
   
//    string rubb="qrweiuyopioasfdhkjvcxzmndfghtyurewvcxzjklmnioupcafds";

//    int hash[26]={0};   //made 26 space cuz we are finding count in between lower case chractors, if i want to find between every char,then i should have passed 256. cuz it contain all the values in the ascii table and it will map out those on there respective places like a on 65 etc till 256 it covers each of the charactors lower and upper included also then there whould be no need of substraction and that.

//    for(int i = 0; i<=rubb.size(); i++){
//         hash[rubb[i]-st] += 1;   //this is how we got correct index value of each !
//    }

//    cout<<hash[0]<<" ";   //a is 0
//    cout<<hash[2]<<" ";   //c is 2, this is how each variable is stored with thier respective indexes

//    char nn='g';     //to find the count via giving the char itself
//    cout<<hash[nn-'a']<<"\n";   //this will give me the index of that char that i am looking for  
 
//    char s='a';   //declaring a variable that will change each time below
//    for(int i=0; i<26; i++)
//      if(hash[i]>0){   //will only print the variable-values who's count in greater than zero, means 'is present in the string that we passed'
//           cout<<"Total Count of "<<s<<" is "<<hash[i]<<" Times\n";}
//      s++;    //this is how it will change everytime from A(0th index) to Z(25th index)
//    }
// }





// int main(){    //PRIVIOUSLY, we saw that we can't store values bigger than 10^6(inside the main) and 10^7 outside the main, if we does than it will give us error

//      int arr[]={1,3,5,634,3,5,23,1,2,3,5,5231};   //but now we can see that the size is larger, if we apply normal hashing using array then we would have to make the space till this 4 Digit number
//      int size=sizeof(arr)/sizeof(arr[0]);

//      map<int,int> mm;    //map will do the job by storing and counting the data in key-value pair. No need to go till the biggest element

//      for(int i=0; i<size; i++){ //in map, key is the value itself and value is our count, so to access we gotta do '.first' and '.second'
//           mm[arr[i]] += 1;    //this will go and for each element it will increase the initial count from 0 to 1. And when the number repeats then it will increse that count to 2 and so on
//      }

//      for(auto i:mm){cout<<i.first<<" Have Total Count of "<<i.second<<"\n";}    //'Iteration through map', map stores all the values in sorted order so here also everything will be sorted and listed
     
//      cout<<"\n"<<mm[634]<<" ";   //now by entering the element, i can find out the count easily of that perticular element
//      cout<<"\n"<<mm[5]<<"\n";    //the below way of printing is used for array hashing generally and the map hashing way can use both above and below printing style but ^above is priscribed

//      for(int i=0; i<mm.size(); i++){    //it's map so i can access manny tools of it
//           if(mm[i]>0){    //if i don't use this then it will count and print the element ranging from 0 to the largest one present there
//                cout<<"The Element "<<i<<" Have the Total Count of "<<mm[i]<<"\n";}
//      }  
// } 





int main(){    //COLISION - When we use division method(only keep last number of an element stored inside of the hash and then link that as shortcut USING %10) then if manny elements get stored inside of the one hash space[LINEAR CHAINING](if there last number of the element is same) so when ts happens, then rest of the spaces of other hash indexes kept unopcupied but this perticular index's hash space got full of shit and then booom! colition happns and our once in a blue moon case(when the dataset is bound to get us to the worst case) and this all have efffect on the time limit exceding 

     string name="sdfdfwehgewresfsddsdfws";

     unordered_map<char,int> mpp;  //now the order is random and not in the sorted order !. WE can use any of our choice as per our neeed

     for(int i=0; i<name.size(); i++){    //in the first refrence we should use unordered map no matter the problem of counting. But if the time limit is exciding(that means once in a blue moon worst case happened) then we use ordered map
          mpp[name[i]] += 1;}      //in unordred map we can't use pair or any complex datatype cuz it's limitied to int,double,char etc datatype while defining, but in map we can
     
     for(auto i : mpp){cout<<i.first<<" have the count of "<<i.second<<"\n";}   //and also ordered map can have key-value of any datatype but key should have the datatype same as of in the dataset and value will be the count so it's int mostly 

     char c = 'e';        //Time complexity of map in all cases will take LogN time complexity weather it's best case or worst or avg. Also LogN is the Time-Space complexity in storing and fetching(both have same complexity)
     cout<<"\n"<<mpp[c]<<"\n\n";   //the above ^ was for simple 'ordered map', for 'unordered map' it have time complexity of O(1) --for BEST and AVG cases, but for worst case in here it is O(n) linier time (where n is number of element). EXPLANATION ^ 
       
    }