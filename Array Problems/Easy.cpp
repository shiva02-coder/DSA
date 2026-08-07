#include <bits/stdc++.h>
using namespace std;

// int main(){ //find the largest element inside of an array

//     int arr[]={2,3,0,5,8,6};
//     int size=sizeof(arr)/sizeof(arr[0]);  //brute force approach will include sorting the array first then gettin the last element for that TC will be nlogn and SC will be O1

//     int largest=arr[0];    // this is the most optimal approach with tc as O(n) and tc O(1)
//     for(int i=0; i<size; i++){
//         if(arr[i]>largest){  //if the any element in that array is greater than my variable, 
//             largest=arr[i];  //then set my variable value as that element and do this throughout the array
//         }
//     }
//     cout<<largest;  //now in online compilers these problems could be of any DS but the solution is same cuz at the end of the day they are Data Structure which lies under same niche
// }



// int main(){ //find the 2nd biggest element in an array(Brute Force Method)
//     int arr[]={2,3,0,5,8,8,6}; 
//     int size=sizeof(arr)/sizeof(arr[0]);

//     sort(arr,arr+size);  //To sort we pass-- arrayName(represents first element , arr[1stEl]+SizeOfArray that reperesents last)

//     int largest = arr[size-1]; //at this point our array is sorted so we got the last element by the end'th index
//     cout<<largest<<'\n';   //why i didn't did size-2 to directly get the 2nd last el? cuz what if last and 2nd last was same? so i need a loop  

//     int SndLargest=0;   //ALWAYS remember that we gotta need to make a variable for finding 2nd last 
//     for(int i=size-2; i>=0; i--){  //this loop is for finding 2nd Last and Checking if the 2nd last=last so we can get the Real 2nd Last
//         if(arr[i]<largest){    //^we started from the 2nd last element to directly compare it with the largest we found eirlier
//             SndLargest=arr[i];  //So, it says 'if largest elment is greater than arr[i] i.e 2nd largest el, then set in my variable as that i'th value
//             break;   //just after we varified that 2nd last el is != largest we break out form the entire loop and got the result already
//         }
//     }   //TC will be O(nlogn)  'n' came from the for loop and 'logn' came from the sort funtion
//     cout<<SndLargest; //For worst cases when it's like(1,8,8,8,8,8,8) then it's O(n) and if all elements are equual as the end'th element(8.8.8.8) then will give me -1 
// }  //so the overall TC will be O(N+nlogn) for all cases



// int main(){ //find the 2nd biggest element in an array(Better Method)
//     int arr[]={2,3,0,5,8,8,6}; 
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int largest=arr[0];

//     for(int i=0; i<size; i++){
//         if(largest<arr[i]){
//             largest=arr[i];  //till here i am finding the largest element as i did in the start
//         }
//     }
    
//     int Slargest=-1;   //here's the ground work. making this variable for later comparsion

//     for(int i=0; i<size; i++){  //checking 2 condtion down below and if both satisfies we set our variable as an array's value
//         if(arr[i]>Slargest && arr[i]!=largest){  //first condition constantly finds the bigger to bigger el in array and 2nd && varifies that it does not reaches the largest el
//             Slargest=arr[i];  //replacing value each time until the loop ends and we will be having our 2nd last value
//         }
//     }
//     cout<<Slargest; //TC will be O(2n) cuz we are running twice through the array
// }



// int main(){ //find the 2nd biggest element in an array(Optimal Method)
//     int arr[]={9,2,7,4,9}; 
//     int size=sizeof(arr)/sizeof(arr[0]);  //if the array contians -ve values then i can take very big -ve value
    
//     int largest=arr[0];  //in here i am assuing that array have all +ve values
//     int Slargest=-1;  //i can set this arr[o] also but this -1 handles null too but the arr[0] is most optimal to choose(if there are null values in array then i have to handle those first)

//     for(int i=0; i<size; i++){    //to find the 2nd largest, i have to find the largest first
//         if(arr[i] > largest){    //it asks if a new number is greater than my champion
//             Slargest=largest;   //if they are then that champion will become 2nd Largest
//             largest=arr[i];    //and the new number will become the top champion
//         }  //now what if the answer to the if statement was NO? that only means that there are elements also which are smaller than the champion but who knows if they are greater than the 2ndlargest...
        
//         else if(arr[i] < largest && arr[i]>Slargest){  //that's why we use ELse If for these 2 pending condition which are listed
//             Slargest=arr[i];   //SO this else if is totally based on the topic of deciding who is runner up. Checking that if the new array elemenent are less than champion but greater than the old 2ndLargest, then set that new element as 2nd Largest
//         }
//     }  //So by the end i will be having both values..Largest also with 2nd largest 
//     cout<<largest;
//     cout<<Slargest;  //TC will be O(n) cuz we using only one loop
// }


//Work For Tommorow - 
// Write this Better Method of 2nd largest by yourself $
// to Find Optimal Approach on top of that of your own $
// Write optimal aproach correct of your own $
// Work on the next topics $


// int main(){  //Find the Smallest and Second smallest el in an array
//     int arr[]={5,3,8,1,1,6,9,9};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int smallest=arr[0];
//     int Ssmalest=INT_MAX;  //took it as this cuz we need a biggest value so it don't ignore anything

//     for(int i=0; i<size; i++){
//         if(arr[i]<smallest){    //this means if my first el is bigger than the el found in the array, more precizely 'if arr's any el is smaller than the smallest where smallest is the first el by default
//             Ssmalest=smallest;  //look think this way, "when i am the smallest and i found more smallest value than that, than the first thing that i'll do is to give my old smallest value to 2nd smallest"
//             smallest=arr[i];
//         }
//         else if(arr[i]>smallest && arr[i]<Ssmalest){  //says that if smallest is smallest value in the whole array AND if any array el is smaller than the second smallest
//             Ssmalest=arr[i];
//         }
//     }
//     cout<<smallest<<Ssmalest;  //TC will be same O(n)
// }



// int main(){  //check if the array is sorted or not
//     int arr[]={1,1,2,3,4,6,8,8};  //if i remove '>=' then it will throw error
//     int size=sizeof(arr)/sizeof(arr[0]);
//     bool sorted= true;

//     for(int i=0; i<size-1; i++){  // Here no need to check for the last el so '-1', '>=' below cuz what if 2 el are equal
//         if(arr[i]>=arr[i-1]){     //doing it like this cuz if we do straight way then when our i+1 reaches at the end of the loop it will error out
        
//         }  //doing nothing here  
//         else{
//            sorted = false;  //in online platform and interview i always have to return no printing,
//            break;  //instead of  these 2 below, i can just return false here and now below in the if-else just return true 
//         }
//     }
//     if(sorted)cout<<"true";  //TC will be O(n) cuz one loop
//     else{cout<<"false";}
// }



// int main(){  //remove the duplicate el from the sorted array(Brute force)
//     int arr[]={8,1,1,2,2,4,6,8,8};  //what we will do is that i will create an set(cuz we know set only store unique sorted el) and then insert all the el from arry to set to get parished and clenzed no dup,
//     int size=sizeof(arr)/sizeof(arr[0]);  //then i will get those el from set and put back to the array using indexing and a loop while running the loop till the size of the SET

//     set<int> nodup;

//     for(int i=0; i<size; i++){  //here arr->set
//         nodup.insert(arr[i]);  //INSERting everyelement of the array into the set
//     }                       

//     int i=0;  //here putting back sorted and unique el into array
//     for(auto ite: nodup){ //this iterator have all the el cleared 
//         arr[i] = ite;  //so for each iteration from the start arr[i] is accesing and storing polished iteams into it
//         i++;  //so in layman lang it means set ke sare el arr1,arr2,arr3 me gusedho!
//     }

//     for(int i=0; i<nodup.size(); i++){  //this is not mandatory to show in the interview or online platform,
//         cout<<arr[i]<<" ";  //i ran till the size of set cuz i can't run till the size of array and size of set is how the final outcome is like
//     }  //TC will be - O(nlogn) for the first pass of loop+insert fucn and then next loop have o(n) so total TC will be O(n+nlogn)
// }  //SC is O(n) cuz we are taking extra space in the set to store and that can range till n



//Work For Tommorow -
// Do find the smallest and 2nd smallest $
// Check if the array is sorted or not $
// remove the duplicates from the array $
// Move on to optimized version of this $


// int main(){  //Remove duplicates from an SORTED array(optimized version)
//     int arr[]={1,1,2,2,3,3,6,6,8,8};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int i=0;                     //using 2 pointers for this approach
//     for(int j=1; j<size; j++){  //if i found the el in the array which is bigger than 1st el i.e i then set i+1th position i.e 2nd to that el. Then i will increment i and now i is at that i+1th place,else if the el is same the if stament won't exicute. i will get incremented++ each after 
//         if(arr[j] > arr[i]){  
//             arr[i+1]=arr[j];   //this whole shi that im doin would've not worked if the array were not sorted
//             i++;              //so here we are just putting authentic values to front and going 1 step forward
//         }
//     }
//     for(int p=0; p<=i; p++){   //algo never remove dup it overwrites the first part only so as we know we will get our sorted stuff in 'i' so i am running till i
//         cout<<arr[p];         //now i will not get the brag at the end
//     }                        //instead of this loop in interviews and online compilers i have to 'return i+1' cuz that is the index location of last unique el 
// }  //Tc will be O(n) and SC will be O(1)



// int main(){  //left rotate the array by 1th place(optimal at best)
//     int arr[]={1,2,3,6,8};     //they want first el in the end and 2nd to endth el in the start  
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int temp=arr[0];  //in temp i just stored the first el

//     for(int i=1; i<size; i++){  //now from 2nd el(i.e first el) to end i'll run a loop
//         arr[i-1]=arr[i];   //it means 0th index pe 1st el ajaye and so on for other iterations (shifting leftwards by 1th place <-)
//     }                     //ek ek kadam sbko peeche khiska rhe hein idr^
//     arr[size-1]=temp;    //no everyone have shifted so for the last place we will be putting our 1st el i.e on 0th index

//     for(int i=0; i<size; i++){  //this part is only for showcasin i only need to return the array in the online compilers and interviews
//         cout<<arr[i];   //Time Complexity is O(n) 
//     }                   //We are using the array to solve the problem so SC is O(n) but Extra Space Complexity is O(1) cuz we are not using any external shi. 
// }                       //Be carefull and understand wdim^



// int main(){  //left rotate the array by 2th place like '{3,6,8,1,2}' 
//     int arr[]={1,2,3,6,8};   //so in a nutshell we gotta (1.Select first 2 el, 2.Shift 3rd el and so on to the first place, 3.put those first 2 el line wize at the end(2nd last will be oth index one, and lasst will be 1st index one)
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int temp1=arr[0];  //we gotta shift everyone in front and these 2 in back(visualize)
//     int temp2=arr[1];  //cuz it is comming at last so we gotta select first 2 or that much el which we want to left rotate

//     for(int i=2; i<size; i++){  //this is impPart, we started from those el who were getting shift
//         arr[i-2]=arr[i];       //so the 3rd el at 2nd index will get placed in 0th index i.e first el,
//     }                         //and the 4th will at (3-2) i.e on 1st index and so on
    
//     arr[size-2]=temp1;  //at the end of loop, we got 2 vacant spaces which are going to be filled with FirsT El then SECOND
//     arr[size-1]=temp2;  //understannd while connecting with the defination of temp Very carefully why i did this

//     for(int i=0; i<size; i++){  //now finnaly printing the result which we did after shifting 2 left places  
//         cout<<arr[i];
//     }
// }  //now imagine i gotta left rotate this shi by nth place, will i be doing this step above printing for loop forever? no so i need another aproach



//Work For Tommorow :-
// Write down this left rotation of the array by 3rd place by yourself $
// Complete the left shift the array by nth place (15:50) %



// void leftrorate(int arr[],int size, int d){  //Left shift the array by dth place(brute approach)
   
//     d = d % size;   //this is to make sure that if the dth place is to be said as 16 or 34 then it will act only by it's remander like it will be somthing(if aray have 7 el in total) and nth or dth place is 24 it will do 7 7 7 3, so by this step by devidding i don't need the first 3 seven cuz rotating an array by it's size is same so im only interensted in that last shi whcih i am getting by doing this modulo 'd=d%n'
//     int temp[d];  //this means temp array will reserve that much storage in it

//     for(int i=0; i<d; i++){  //we are running till d cuz it is that temp array storage where we store all el which will go at the end
//        temp[i] = arr[i];    //our step 1 is to store el from our orignal array to temp array that are comming under our range or d'th input
//     }  //in layman it says ^ temp pe d tk el daal do from arry 

//     for(int i=d; i<size; i++){  //this is the step 2 in which we are shifting those d'th onwands el to the starting left
//         arr[i-d]=arr[i];}   //the el from nth index are shifted to the first place. Now what's left is to get "till d'th el" at the back
    
//     int j=0;    //this is the final 3rd step where those el from temp will get put into real array into it's back
//     for(int i=size-d; i<size; i++){  //i is from that idx from where our temp el have to start getting filled and till very end.
//        arr[i]=temp[j];  //what i wanted is that the first el stored in temp will get put in that position of our real array and then 2nd and so on
//        j++;     //so in a nutshell, all the el from temp array will get attached at our required/desizred place into our real array
//     }       //now what if i don't want this extra j shi

//     // for(int i=size-d; i<size; i++){  //another way to impress interviewer and to get rid of that j variable is this. Earliar we were using a incrimental variable starting from 0 to get all values from temp to our orignal array one by one after each iteration. So putting in simple language i just want to do indexing from 0 then 1 then 2 and so.
//     //     arr[i]=temp[ i-(size-d) ];      //this means that i am always sure that the 0th idx of temp will always go to the size-d th index and then 1st idx will go to size-d+1 index and so on, so from their i got the intuation that I can substract this i i.e 'size-d' which is keep increstin with the base i i.e 'size-d' so i will get lets suppose 4-4,5-4,6-4...
//     // }    //right above we substracted the base index from 'i', 'i' was let's say 4,5,6 and base index is always 4 so it gives = 0-1-2
// } //so the above ^ thing is that i want all the variable from temp to be filled at the end cuz we have shifted already and temp is containing that much n'th indexes of values from front, so we do need to fit that temp from size-d to size and the values to be fit are from temp so, size-d+1 then 2 then 3, using this i can substaract the base that is size-d from each of those i'es and will get that much index value i.e in this case 0,1,2

// int main(){  
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     int d=2;  //deciding by how much we are going to get shifted
    
//     leftrorate(arr,size,d);  //passed our function

//     for(int i=0; i<size; i++){   //TC will be -> O(d) + O(n-d) + O(d) i.e O(n+d)
//         cout<<arr[i];            //SC will be -> O(d) 
//     }  
// }



//Work For Tommorow -:
// Do this ^ by yourself but before doing write the steps on paper then exicute $
// After doing interpret the comments again $
// Move onto the optimal solution(22:00) $



// void Reverse(int arr[], int start, int end){  //Left rotating an array by d'th index(optimized version)  
//     while(start<end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;

//         start++;
//         end--;    //interviweewr might ask us to write the reverse function of our own so this is the snippit for that
//     }
// }

// void leftrotate(int arr[], int size, int d){  //Left rotate the array by d'th index(optimal aproachh)
//     d = d % size;                 //now for the optimal approach what if the interviewer asks us to solve this shit without using any extra space which will make our SC from O(d) to O(1) but it will slightly increase our TC   
//     // reverse(arr, arr+d);       //arr is the starting index till our dth index(last one is not included)
//     // reverse(arr+d, arr+size);  //this is from dth index till end
//     // reverse(arr, arr+size);    //this is for whole array (only starting idx is included in reverse func, not the ending part)

//     Reverse(arr, 0, d-1);      //this include first and last value and it's more natural 
//     Reverse(arr, d, size-1);   //i can coment out this and use the above too
//     Reverse(arr, 0, size-1);   //indexing starts from 0 so that's why we need -1
// }                              //that's it we don't need anything extra than this like for loops and shi, it's just another way in which we can left swap our array 


// int main(){
     
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
        
//     int d=2;   
    
//     leftrotate(arr,size,d);      //passed our function

//     for(int i=0; i<size; i++){   //TC will be -> O(d) + O(n-d) + O(n) i.e O(2n)
//         cout<<arr[i];            //SC will be -> O(1) and this is extra space used that is null, innerly we are using the internal array
//     }  
// }   



//Work For Tommorow -:
// Do this Optimal Solution of your own $
// Right rotate an aray by d'th place $



// void rev(int arr[],int st,int ed){  //Right Rotate an array by d'th place(both approaches)
//     while(st<ed){
//         int temp=arr[st];
//         arr[st]=arr[ed];
//         arr[ed]=temp;

//         st++;
//         ed--;
//     }
// }

// void Rightrotate(int arr[],int size, int d){
//     d=d%size;
//     int temp[d];

//    rev(arr,size-d,size-1);  //reversing the last el in fashion cuz in right rotate that's the point we gotta start from
//    rev(arr,0,size-d-1);    //reversed the starting el to the el before d
//    rev(arr,0,size-1);     //reversed the whole array   

// //    for(int i=0; i<d; i++){     //from here it's brute force taking TC-O(d+n) and SC-O(d) and above ^ is optimal appraoch taking TC-O(2n) and SC-O(1)
// //     temp[i]=arr[size-d + i];  //putting the last els which to shift in front into an another array 
// //    }
// //    for(int i=size-d-1; i>=0; i--){  // we will overwrite the value that we still need- if we go i++,
// //     arr[d+i]=arr[i];               // that's why we go from size-d and keep putting those at the end while --
// //    }
// //    for(int i=0; i<d; i++){   //putting those el in temp back to the array start,by now it's done ^ above step was right shift
// //     arr[i]=temp[i];
// //    }
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int d=2;

//     Rightrotate(arr,size,d);

//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }



//Work For Tommorow -:
// Again solve this right shift and interprit perfectly $
// understand other methods too(rev and handmade rev function) $
// Solve these all by yourself and add comments $



// int main(){   //Remove all the 0'es from the array and put them back after the the all non zero el till end
//     int arr[]={1,0,3,0,2,0,5,0,6,7,8};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     vector<int> StoreNonZero;  //Made a Vector -> Push only non Zero El -> Fit those non 0 into array again
//     int count=0;

//     for(int i=0; i<size; i++){      
//         if(arr[i] != 0){
//             StoreNonZero.push_back(arr[i]);}

//         else{count++;}  //we made a counter to get us know how manny 0'es are actually there.
//     }

//     for(auto m : StoreNonZero){  //this is for showing what's inside that vector
//         cout<<m;}

//     cout<<"\n";

//     for(int i=0; i<size-count; i++){  //this counter have total number of zeros in it
//        arr[i] = StoreNonZero[i];
//     }                          
    
//     for(int i = size-count; i<size; i++){  //i could've used .size instead of counter but it's more slayish
//         arr[i]=0;
//     }

//     for(int i=0; i<size; i++){  //this one is also for the showcase..
//         cout<<arr[i];           // TC will be- O(n)+O(size-count)+O(n-(size-count))  --> O(2n)
//     }                           // SC- 'Extra space will be used as O(n) also this SC is for worst case cuz imagine if there's no zero in the entire array but still all el will be added to the temp
// }



// int main(){ //getting the non zero'th el at the front(optimal approach)
//     int arr[]={1,3,0,2,0,0,6,7,8};
//     int size=sizeof(arr)/sizeof(arr[0]);  //using 2 pointers we'll get those non zero at front

//     int j=-1;  //Step 1 is to assign the val of j as the 'first occurance location idx of Zero element'
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             j=i;
//             break;  //by now our j is at the first zero'th el idx. so we break cuz that's where we wanna stop 
//         }  
//     } //if this loop passes without break, that means there were no null elements, so our j will never got the index value of anyone and never got assigned any position
    
//     if(j == -1) return arr[size]; // so we check for it and if we get that initial '-1' then we'll just return the whole array without running the below loop and condition cuz our condition is met i.e our array is Zero Free
   
//     for(int i=j+1; i<size; i++){  //now for the comparizon- i ran from 'j+1' cuz before j there will be non zero el and that's why those before j el were never assigned as j
//         if(arr[i] != 0){          //this new i pointer will move everytime checking if any further el have the value '0' or not if it's not,
//             swap(arr[i],arr[j]);  //if it's not then we will swap that value with our j which is at the first occurance of 0 so we'll get this chain like thing with non zero el increasing each time from the start and yeah we can swap using that temp thing for a little better speed but here- just focus on understanding the damn concept man! 
//             j++;                  //understant this - j always mean 'first idx of the location of 0 in the array, after swaping sure the values of both of them will get swapped but after one iteration if i don't increment 'j++' - j will again point to that 2nd idx regardless of it's value cuz the condtion of it(it should be zero) was getting checked in the first for loop and on there we assigned it as 'i=j', by now in this for loop we only got that 'first 0 occurance idx' so we need to increment.
//         }
//     }  //i am printing the result down below but in online compilers i gotta return the array or vector only

//     for(int i=0; i<size; i++){ //TC will be-> firstly we moved till first Occurance of '0' let's say that's "x", then i did loop again from that occurance to n so "n-x". Final TC will be 'O(n)'
//        cout<<arr[i];           //SC will be O(1) of extra space cuz we are using given array
//     }          
// }



// int main(){  //Linear Search(brutal approachh) #this is the only approach that i did, can search more if i caught up reading this comment in the future
//     int arr[]={1,4,7,5,9,7,5,3,4,8};
//     int size=sizeof(arr)/sizeof(arr[0]);  //the whole point is to get the first occurance idx of the given number

//     int num=5;   //remember i will only get the idx of first occurance of my number

//     for(int i=0; i<size; i++){  //Also if they want all occurance of the el then i can just store count in the starting ->increment it inside the 'if' statement -> print that count or return at the outside of loop i.e ending point
//         if(arr[i]==num){
//             cout<<"The number "<<num<<" is at "<<i;  //if i just put the below print statement which is outside the loop in the else so it would have ran cuz for every el we are checking if-else, so until a if is true else will get exicuted and we could be printing "your ass line"
//             return i;    //same in the case of 'break' if i added that 'your ass' stattement in the else, so until if is true that else would have exicuted and only than after nothing will get printed
//         }                //so what i did is that i just returned rightaway, that means - right on the moment when i got the idx value, just return that value and below loop never got exicuted cuz i wrote the below statement outside the loop
//     }                    //but what about 'break' ? if i would have used break instead of return + the statementt outside the loop instead of placing inside the else, then it will run once at the end when i will be getting a index. This is cuz 'break' just break out from loops, the code below still runs
//     cout<<"Your ass number is not in the array";   //do return '-1' in online compilers
// }



//Work For Tommorow :-
// Do "Push 0'es at the end(brutal) by yourself and then interpret comments $
// Do "Optimal approach of this ^ by yourself and then interpret comments $
// Do "Linaer search by yourself -> Read Comments -> Look for another approaches
// Then move onto the next question "union and somthing".



// int main(){
//     int arr[]={4,6,2,3,8,6,7,9,3};
//     int size= sizeof(arr)/sizeof(arr[0]);
    
// }