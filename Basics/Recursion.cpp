#include <bits/stdc++.h>
using namespace std;


void printN_times(string name,int times,int count){
    
    if(count==times){    //i have to use count in the parameter else it will get changed inside everytime and outside it's not working
        return;}         //#1.BaseCase, it asks if i should stop before doing the work or after doing the work?
    
    cout<<name<<"\n";   //#2.Work
    count++;            //if i use it here not in the #3, then i am changing the fucntion itself after printing not the recusrsive call is getting changed  

    printN_times(name,times,count+0);    //#3.Call, it says if i use +1 here instead of +o then im changing the call and the fucntion stays with what value they have initially
}
void print_till(int start,int end){
    
    cout<<start<<" ";   //#1.Work

    if(start==end){return;}   //#2.Condition    //After printing it is getting checked

    print_till(start+1,end);  //#3.Recursion
}
void backtracking(int start, int end){
    
    if(start>end){return;}    //i is ^sing so it's checking each time that when will the start will be greater than end
                
    backtracking(start+1,end);   //Anything written after the recursive call runs only when the recursion have touched the base case and coming back. Since function calls came back in Last-In_First-Out (LIFO) order, the output naturally appears in reverse.
          
    cout<<start<<" ";   //after finding and reaching base case it starts printing from there(LIFO)
}
int sum_till_W_rec(int n, int bank){
    
    if(1>n) return bank;   //if the 'n' that is getting substracted each time reaches 1 then return the value that got jot up in the bank
    
    bank+=n;    //at the end this bank is returned cuz it's in the base case so that's why we returned the recursion below too.

    return sum_till_W_rec(n-1,bank);   //this recursion is not storing anything but this keep taking the value to the next recursion and keep adding using above line of code  
}
void sum_till_Wt_rec(int n){
    int bank=0;

    bank=(n) * (n+1)/2;   //formula to calculate directly that sum till the entered n
    cout<<bank;
}
int sum_till_Adv_rec(int n){
    
    if(n==0) return 0;

    return n + sum_till_Adv_rec(n-1);   //it awaits like - 5+f(4)+f(3)+f(2)+f(1) then base case triggers and after than values got returned
}
int cal_factorial(int n){

    if(n==1) return 1;

    int s=n*cal_factorial(n-1);   //returning a variable which keeps the logic
    
    return s;   //time and space complexity is O(n)
}
void rev_array(int arr[],int i,int size){
    
    if(i>=size/2) return;   //this shi means if i touched the middle from start or end

    swap(arr[i],arr[size-i-1]);     //i could've also made an vector array with 2 paramters only array and i, size will be there in the function of it

    rev_array(arr,i+1,size);
}
void check_string_palandrome(string name,int i){
    
    int size=name.length();     //i can cal. the lenght of an string and it will never change

    if(name[i]!=name[size-i-1]){    //i is there cuz size is +1 than index and we started index from 0
        cout<<"It's Not a Palendrome";
        return;}

    if(i>=size/2){      //this shi means if i touched the middle from start or end
        cout<<"It's a Palendrome"; 
        return;} 
        
    check_string_palandrome(name,i+1);  //time-space complexity is O(n/2) 
}
int find_Nth_fibonachi_Via_loop(int n){
    int first=0;
    int second=1;
    int future;

    if (n==0) return 0;
    if (n==1) return 1;

    for(int i=2; i<=n; i++){
 
        future=first+second;
        first=second;
        second=future;
    }

    return second;
}
int find_Nth_fibonachi_Via_recursion(int n){

    if(n==0) return 0;   //time-space complexity is  near O(2^n) exponential. 
    if(n==1) return 1;   //since the sequence starts from 0 so 1st index is always 0 then 1 so they are constant listed here

    int last = find_Nth_fibonachi_Via_recursion(n-1)+find_Nth_fibonachi_Via_recursion(n-2);   //if i look at closly to fibonachi thing, it's clear that "it's the sum of last element with the last-1" but since the starting element/index is 0 so it's "last-1 + last-2"

    return last;    //this was multi recursion, i used 2 recursion in here, so a recursion tree will be formed to understand better
}


int main(){

    //printN_times("ShivaAlone",3,0);
    //print_till(1,5);
    //backtracking(1,6);
    //cout<<sum_till_W_rec(5,0);
    //sum_till_Wt_rec(5);
    //cout<<sum_till_Adv_rec(5);
    //cout<<cal_factorial(5);
    //check_string_palandrome("NitiN",0);
    //cout<<find_Nth_fibonachi_Via_loop(5);
    //cout<<find_Nth_fibonachi_Via_recursion(5);
    
}
