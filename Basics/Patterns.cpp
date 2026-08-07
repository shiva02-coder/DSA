//Practicing each Pattern Again !!

// Almost every pattern problem falls into one of these 4 categories:
// 1️⃣ Distance from edges
// 2️⃣ Symmetry around center
// 3️⃣ Row + column relationships
// 4️⃣ Diagonal conditions
    

#include <bits/stdc++.h>
using namespace std;

class pp{
    public:

        void p1(int val){
            for(int i=0; i<val; i++){
                for(int j=0; j<val; j++){
                    cout<<'*';
                }
            cout<<"\n";
            }
        }
        void p2(int val){
            for(int i=0; i<val; i++){
                for(int j=0; j<=i; j++){
                    cout<<'*';
                }
            cout<<"\n";
            }
        }
        void p3(int val){
            for(int i=0; i<=val; i++){
                for(int j=1; j<=i; j++){
                    cout<<j;
                }
            cout<<'\n';
            }
        }
        void p4(int val){
            for(int i=1; i<=val; i++){
                for(int j=1; j<=i; j++){
                    cout<<i;  
                }
            cout<<"\n";
            }
        }
        void p5(int val){
            for(int i=0; i<val; i++){
                for(int j=1; j<=val-i; j++){
                    cout<<"*";
                }
            cout<<"\n";
            }
        }
        void p6(int val){
            for(int i=0; i<val; i++){
                for(int j=1; j<=val-i; j++){
                    cout<<j;}
            cout<<"\n";
            }
        }
        void p7(int val){
            for(int i=0; i<val; i++){
 
                for(int j=val-1; j>i; j--){     //differnt appraoch down and up
                    cout<<" ";
                }
                // for(int k=(val-i)*2; k<=val*2; k++){
                //     cout<<"*";                        //both the ways are correct ts is mine invention
                for(int k=1; k<=(i*2)+1; k++){          //simple
                    cout<<"*";
                }
                for(int j=1; j<val-i; j++){         //intial is 0
                    cout<<" ";
                }
            cout<<"\n";    
            }

        }
        void p8(int val){
            for(int i=0; i<val; i++){

                for(int s=0; s<i; s++){
                    cout<<" ";
                }
                for(int n=1; n<=(val*2)-(i*2)-(1); n++){
                    cout<<"*";
                }
                for(int s=i; s>0; s--){      //this one is also different
                    cout<<" ";               //jb tk eg(2) bra hai 0 se 1 minus krte rho s se ie 2...
                }
            cout<<"\n";    
            }
        }
        void p9(int val){
            int i,y;

                i=0;
                while(val>i){
                    
                   for(int j=1; j<val-i; j++){
                        cout<<" ";
                    }
                   for(int s=1; s<=(i*2)+1; s++){
                        cout<<"*";
                    }
                   for(int j=val-1; j>i; j--){
                        cout<<" ";
                    }
                cout<<"\n";    
                i++;
                }
                
                for(int i=0; i<val; i++){
                    int x1=1;

                   for(int j2=1; j2<=i; j2++){
                        cout<<" ";
                   }
                   for(int s=1; s<(val*2)-(i*2); s++){
                        cout<<"*";
                   }
                   for(int j2=1; j2<=i; j2++){
                        cout<<" ";
                   }

                cout<<"\n";
                }          
        }
        void p10(int val){
            for(int i=1; i<val*2; i++){
                
                int star;                    //inside the loop, 'i' have to flow as it is. Don't try to change the flow of the river like 'i=i-1'.

                if(i<val){star=i;}           //when it's before the peak, set the flow of stars as 'i'.
                   
                else{star=2*val-i;}          //To think it carefully look for available variables first(i=1,2,3 & val=5). Use these and construct something. #ProTip-'2' is used at manny loops.

                //(i >= val) ? stars=(2*val - i):stars=i ;   //ternary alternative 

                for(int j=1; j<=star; j++){     //Insted of thinking 'How do I change the loop?', think 'How do I transform i into what I need?'
                    cout<<"*";
                }          
            cout<<"\n";
            }
        }
        void p11(int val){
            int start;

            for(int i=1; i<=val; i++){

                if(i%2==0) start=0;
                else       start=1;
                
                    for(int j=1; j<=i; j++){     //this thing is only structure(DownStairs) and have nothing to do with the printing
                        cout<<start;            //If done till this then i will get same number in one row
                        cout<<" ";
                    //   if(start == 0) start = 1;  
                    //   else start = 0;
                        start=1-start;}       //upper one also works but this is the simple task so i used this.
               
                cout<<"\n";
            }                               //after this point it will go to the inner loop top, not outer loop top              
                 
        }        
        void p12(int val){
            for(int i=1; i<=val; i++){
                
                for(int j=1; j<=i; j++){
                    cout<<j; 
                }
                for(int s=1; s<=val*2-(2*i); s++){
                    cout<<" ";
                }
                for(int j=i; j>=1; j--){    //this was lil tricky
                    cout<<j;
                }
            cout<<"\n";    
            }
        }
        void p13(int val){

            int num=1;         //if inside the outer loop, then in each row it will get reset, but if outside then it'll continew from that everytime.
            for(int i=1; i<=val; i++){
                
                for(int j=1; j<=i; j++){
                    cout<<num;
                    cout<<" ";
                    num++;
                }
            cout<<"\n";
            }
        }
        void p14(int val){
            for(int i=1; i<=val; i++){
                char s=65;                   //i placed it inside the Outer Loop because now it will reset back to 65(i.e 1) everytime the new row starts
                for(int j=1; j<=i; j++){
                    cout<<s; //or cout<<char('A'+j-1);
                    s++;
                }
            cout<<"\n";
            }
        }
        void p15(int val){
            for(int i=0; i<val; i++){

                char v=65;
                for(int j=1; j<=val-i; j++){
                    cout<<v;
                    v++;
                }
                cout<<"\n";
            }
        }
        void p16(int val){
            char v=65; 

            for(int i=1; i<=val; i++){
              
                for(int j=1; j<=i; j++){  
                    cout<<v;}

            v++;           //this means a->b will happen when inner loop got completed fully, means only for outer loop it will get incrimented
            cout<<"\n";    
            }
        }
        void p17(int val){
 
            for(int i=1; i<=val; i++){
              
                for(int s=1; s<=val-i; s++){    
                    cout<<" ";}

                char ch=65;             //placed outside so every row starts from 'A'
                for(int j=1; j<=i*2-1; j++){   
                    
                    cout<<ch;

                    if(j<i) ch++;               
                    else     ch--;
                }

                for(int s=val-i; s>1; s--){
                    cout<<" ";}
                
                cout<<"\n";    
            }
        }
        void p18(int val){
            int ch=65;         //char ch=65 also worked but since we are converting them below 
            
            for(int i=1; i<=val; i++){
                for(int j=val-i; j<val; j++){
                 
                    cout<<char(j+ch)<<" ";}      
        
            cout<<"\n";
            }
        }
        void p19(int val){
            for(int i=0; i<val*2; i++){
                int stars;              //always make a new variable where there is control or autochange alongway
                    
                    if(val>i){
                        stars=val-i;}    //by now i is 5    
                    else{               //at this moment i becomes 5 or bigger
                        stars=i-val+1;}  //So it goes decreasing (i is 5 here)
                
                for(int p=1; p<=stars; p++){   //started from stars which initially had all the conditions applied on it
                    cout<<"*";}                 //value of star changes according to the if-elseif-else 
        

                int gap;
                    if(i<val){      //defined before gaps starting from 0 then 2 then 4 
                        gap=i*2;
                    }
                    else if(i==val){  //defined on the constant gaps(cuz there are 2 points where i and val are same)
                        gap=val*2-2;  //gives the same value of gaps
                    }
                    else{
                        gap=(val*2-2)-(i-val)*2;   //this condition made by me personnally to go downwards starts from 6 to 0 with 2 spaces
                    }
                for(int g=1; g<=gap; g++){
                    cout<<" ";
                }


                int star2;
                    if(val>i){
                        star2=val-i;
                    }
                    else if(val==i){       //here the middle part where both are equal so we know same numbers will be there
                        star2=1;
                    }
                    else{ 
                        star2=(i-val)+1;
                    }
                for(int p=1; p<=star2; p++){
                    cout<<"*";
                }               //practivce this shit up all by yourself , workflow on notbook

            cout<<"\n"; 
            }
        }
        void p20(int val){
            int medium=0;

            for(int i=1; i<=val*2-1; i++){
        
                if(i<=val){medium=i;}  // or (med++) both will work
                else{medium--;}       //more efficient is 'if one' cuz we are going with flow instead of creating another river
            
                for(int j=1; j<=medium; j++){
                cout<<"*";}
                
                for(int j=1; j<=(val-medium)*2; j++){  //catchup!
                cout<<" ";} 
                
                for(int j=1; j<=medium; j++){
                cout<<"*";}
                
            cout<<"\n";}
        }     
        void p21(int val){
            int star=0;

            for(int i=1; i<=val; i++){
                
                // for(int j=1; j<=1; j++){
                //     std::cout<<"*";}

                for(int j=1; j<=val; j++){
                    
                    if(i==1 || i==val || j==1 || j==val) std::cout<<"*";
                    else std::cout<<" ";
                }
                
                // for(int j=1; j<=1; j++){
                //     std::cout<<"*";}
                
                std::cout<<"\n";   
            }
        }
        void p22(int val){
            int size = (val * 2) - 1;

            for(int i = 0; i < size; i++){
                for (int j = 0; j < size; j++){

                    int top = i;                //it means going from top to down
                    int bottom = size - 1 - i;  //it means going from bottom to top

                    int left = j;               //means going from left to right and as we know that 'j' works as LHS->RHS
                    int right = size - 1 - j;   //-1 is there cuz we started i and j both from 0 so the outer loop is settled with the indexing from 0 to 6 i.e 7 in Total

                    int nearest = top;         //need somewhere to start, so I'll temporarily assume top is nearest
                        if(bottom < nearest) nearest = bottom;   //Best answer I've found up to this moment.
                        if(left < nearest) nearest = left;     //now since the value of neawrest is changed so i will check another statement
                        if(right < nearest) nearest = right;

                    int nn = val - nearest;  //nearest is the layer number.

                    cout << nn << " ";
                }
                cout << "\n";
            }
        }                              //Nhi hua bhang Bhosda boht hai(Edit-Hogya Kindoff Xd)
};


int main(){
    pp all;

    all.p1(5);
cout<<"\n";
    all.p2(5);
cout<<"\n";
    all.p3(5);
cout<<"\n";
    all.p4(5);
cout<<"\n"; 
    all.p5(5);
cout<<"\n"; 
    all.p6(5);  
cout<<"\n";
    all.p7(5);   
cout<<"\n";
    all.p8(5); 
cout<<"\n";
    all.p9(5);
cout<<"\n";
    all.p10(5);
cout<<"\n";
    all.p11(5);
cout<<"\n";
    all.p12(5);
cout<<"\n";
    all.p13(5); 
cout<<"\n";
    all.p14(5);  
cout<<"\n";
    all.p15(5);  
cout<<"\n";
    all.p16(5);
cout<<"\n";
    all.p17(5);
cout<<"\n";
    all.p18(5);    
cout<<"\n";
    all.p19(5);
cout<<"\n";
    all.p20(5);
cout<<"\n";
    all.p21(5);
cout<<"\n"; 
    all.p22(5);      
}
