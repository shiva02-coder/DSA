#include <bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int count=0;

    while(n>0){
        int s=n%10;     //this is optional, it's on me to use this or not
        count++;
        n=n/10;}

    return count;
}
int count_digits_Via_Log(int n){
    
    int count=log10(n)+1;   //this gives the couunt of number as float
    return (int)count;     //to convert that float into int
}
int reverse_number(int n){
    int reverse=0;

    while(n>0){
        int getlast=n%10;            //gives the last element until this loop runs
        reverse=(reverse*10)+getlast;
        n=n/10;     //cuts the last element each time so i don't get the same agai and again
    }
    return reverse;
}
int check_palandrome(int n){
    int reverse=0;
    int copy=n;
    while(copy>0){
        int last = copy%10;
        reverse=(reverse*10)+last;
        copy = copy/10;
    }
    if(reverse==n) cout<< "True";
    else cout<< "False";
    return 0;
}
int check_armstrong(int n){
    int copy=n;
    int total=0;
    int count=(int)log10(n)+1;

    while(copy>0){
        int last=copy%10;
        total+=pow(last,count);   //it means last^count
        copy=copy/10;
    }
    if(total==n) cout<<"True";
    else cout<<"False";
    return 0;
}
int print_divisionsBig(int n){
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";}
    }                          //time complexity is O(n) cuz we are running till n and just finding remainder
    return 0;
} 
int print_divisionsAdv(int n){
    vector<int> v;

    for(int i=1; i*i<=n; i++){   //Every divisor larger than √n has a matching divisor smaller than √n. So once you've checked all numbers up to √n, there is literally no new information left to discover.

        if(n%i == 0){                //we didn't used sqrt(n)h above cuz it's a mathamatical function itself, so it takes time to call again and again  
            v.emplace_back(i);       //gives only divisible shi
            if(n/i !=i){             //this check is for that point where the result matches 
                v.push_back(n/i);    //it will not count that duplicate
            }
        } 
    }    
    sort(v.begin(),v.end());

    for(auto a: v){cout<<a<<" ";}

    return 0;   //timeCom. is O(sqrt(N)) 
}
int check_prime(int n){
    bool isprime=true;

    if(n<=1){return false;}
    
    for(int i=2; i*i<=n; i++){   //there's no need to go till N cuz all the factors can be found till Sqt(N), also decrease the complexity from O(n) to O(sq(n))
        if(n%i == 0){
            isprime=false;
            break;}         //once it's found, there's no need to check again after   
    }
    if(!isprime){cout<<"Not a Prime No";}
    else cout<<"It's a Prime No"; 
    
    return 0;
}
int check_primeDiv(int n ){
    int count=0;

    for(int i=1; i*i<=n; i++){
        
        if(n%i == 0){    //function before is the faster aproachh than this
            count++;
            if(n/i != i){   //this whole thing is finding and collecting the divisors and this line prevent from duplicates at the shore
                count++;
            }
        }
    }
    if(count==2){cout<<"Prime";}    //we could have manny divisions but a prime number only have 2(itself and 1)
    else cout<<"NotPrime";

    return 0;
}
int find_GCD_Big(int n1,int n2){
    int gcd= 1;                //it's 1 by defalut cuz every pair have gcd 1 if they don't have anything comman in them 

    for(int i=1; i<=min(n1,n2); i++){   //we have to run till smallest amoung those 2, cuz gcd never goes beyond the smallest number
        if(n1%i==0 && n2 % i==0){       //if both of these number have anything in comman than set that value to 'i' value
            gcd=i;     //setting that new factor that we are finding and in the end we will be thier at the end factor so i will be that i.e biggest
        }    
    }
    cout<<gcd;

    return 0;
}
int find_GCD_Adv(int n1,int n2){
    int gcd=1;

    for(int i = min(n1,n2); i>=1; i--){    //as we saw above, we will be having the final GCd at the end, so to make it better 
        if(n1 % i ==0 && n2 % i == 0){
            gcd=i;      //we are looping from the end and after catching the end'th number i.e GCD 
            break;      //we will break and hence no need to fuck arround more
        }
    }
    cout<<gcd;   //it have better complexity than above function 
    
    return 0;   //these two fucntions were brute force method taking linear time complexity i.e till O(min(n1,n2)) so we need to manage somthing that will remove that fukking function
}
int find_GCD_Algo(int n1,int n2){

    while(n1>0 && n2>0)      //Equalodian Algo-> gcd(a,b)==gcd(a-b,b)  where [a>b]
        {                    //so what we will do now, that i'll apply this algo agian and again to truncate it till the very end to get my GCD more fast
            if(n1>n2){       //but what if the pair is (42,10) then it will be very long process to reach till the end, so we use
                n1=n1%n2;}   //gcd(a,b)==gcd(a%b,b)  where [a>b]. So at the end if one of them becomes 0 then the other one is GCD
            else n2=n2%n1;   //it says if a n1 is > then it will be module and if n2 is > then that will be module. It's the alternative of swaping function cuz i don't want to get involed it that
        }

    if(n1==0) cout<<n2;      //by now we will be reached with our final result
    else      cout<<n1;      //that's how we use alternative of swaping fucntion
         
    return 0; 
       //it's time complexity is O( logfie( min(n1,n2) ) ) Fie is there cuz the value is always fluctuation and we don't know what's the final value so it's Fie                  
}

int main(){
    //cout<<count_digits(56343);
    //cout<<count_digits_Via_Log(233523);
    //cout<<reverse_number(123456);
    //check_palandrome(1234321);
    //check_armstrong(407);
    //print_divisionsBig(10);
    //print_divisionsAdv(36);
    //check_prime(9);
    //check_primeDiv(7);
    //find_GCD_Big(12,9);
    //find_GCD_Adv(20,40);
    //find_GCD_Algo(52,10);
}