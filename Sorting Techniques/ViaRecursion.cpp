#include <bits/stdc++.h>
using namespace std;


// void ms(vector<int> &vec_arr, int low, int high);  //MERGE SORT- time complexity is O(N*log n) for all cases(best/avg/worst) we are deviding by 2 each time so it's log
// void merge(vector<int> &vec_arr,int low,int mid,int high);                         // ^ 'N' this came by the fucntion 'merge' which is going everytime

// int main(){                                                                        //Space Complexity is O(n) cuz we are using extra space as temp to store
//     vector<int> arr= {5,3,8,6,9,2,0,4,7,1};  //we passed a vector in those functions above as the parameter, so we gotta make a vector in main to actually use it and save this into a variable and then this variable will get passed into that parameter below
//     int size=arr.size();  //we have to define low and high, low is always 0th index and last is the end'th element

//     ms(arr,0,size-1);     //passed our arry, the starting index,the ending index(it's size so we gotta do this to get the last index)

//     for(auto i:arr){      //to print all element's of array after sorting 
//         cout<<i<<" ";}    //Don't forget to use & cuz that's what will prevent diffrent fucntions to make a copy of our array result, we neeed to use orignall stuff and make changes into it directly so never forgor '&'
// }


// void merge(vector<int> &vec_arr, int low, int mid, int high){   //defing the merge algo which will merge those sorted element
//     vector<int> temp;   //making a temp variable which will store our sorted array later on
//     int left=low;     //making 2 pointers which will reperesent both splitting parts 
//     int right=mid+1;   //these will also help in comparing and iterating cuz these left are right are what are dinamic, lowmidhigh are static

//     while(left<=mid && right<=high){  //this condition will run true untill one box is not completed while comparing, if any of one box got full it'll stop(does'nt matter if 2nd box still have elments)
    
//         if(vec_arr[left]<vec_arr[right]){    //here we are comparing first elements of those blocks.(this statement will firstly be exicuted for the base case el where it will be somth like [7][3] and it will convert them into 3,7 and put them into temp while doing this and then put back into array sortdly for another comparizon upper one while calling which will have more than 1 el both ends)
//             temp.push_back(vec_arr[left]);    //adding those sorted elements in temperery array turn wize
//             left++;                           //this merge fucn works for each recursion call not only for bigger block but for smaller ones too
//         }  
//         else{
//             temp.push_back(vec_arr[right]);   
//             right++; }        
//     }  //right here one box must be completed or exhousted and since we know that while comming back we got the sorted el so 2nd box will contain sorted shi, that's why we are here so to add remaining all at once cuz they will be already sorted 
    
//     while(left<=mid){
//         temp.push_back(vec_arr[left]);  //if the right one is exhauseted then addding elements from this side at once all
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(vec_arr[right]);  //if the left one is exhausted then adding elements from this side to temp at once
//         right++; }   //now let's make the dynamic part below where i will shift all the element of temp into orignal array side by side right next when they are getting sorted

//     int j=0;                        //this is the part where i have to understand, REMEMBER this loop is not happening after everything is done, it is happening each time
//     for(int i=low; i<=high; i++){   //So i want to continuesly add sorted element in the main array from temp array(not at the end when everything is completed)
//         vec_arr[i]=temp[j];    //IMP- i can't do temp[i] equals lhs cuz first element is different for each iteration and comparizonm, so i gotta make diffrent variable that will start from zero'th index of my temp sorted array and goes till the very end
//         j++;}                  //so that will match the position with low cuz low is always moving (don't think that low is 0) it's the first element's index for each block 
// }                              //if i don't want to use external j and it's incriment 'j++', i need to just do 'i-low' inside of the temp instead of j, cuz i is always incrizing but it's initial point is the low so when i minus the initial point with the i like 'temp[i-low]' i will get the indexing from 0 to that point

// void ms(vector<int> &vec_arr, int low, int high){   //this is mainly focused on breaking into a tree structure
//     if(low==high){     //Base case for recursion: When we reaches at the base where only single element is there in a block
//         return;}       //so those singleres only have one element so naturally their low and high are at same location  so we will return from that cuz it's done we are at base

//     int mid=(low+high)/2;   //to segrigate into 2 parts, we gotta define mid and (brackets) are very important

//     ms(vec_arr,low,mid);      //if arry is odd then always we will be having 1 more element than rhs in our lhs
//     ms(vec_arr,mid+1,high);     //look here we want all the element after the mid till end, so we did this
//     merge(vec_arr,low,mid,high);  //after reaches and dividing,we gotta merge them sorted as we come back,and when the first recursion call is completed, it right after checks for the 2nd one at that deep end(it dont just come back and start from the start) so while comming back it checks for the 2nd call then right after 2nd they check for 3rd line i.e of merge so they got sorted and then they return to the next call and so on till the outer shore
// }                                   //The moment recurstion come back from the base case i.e when 1 el is remaining, it imidiatly calles merger[] for those 2 elments and they get sorted. so we can say that every parent call recives already sorted halves cuz each child call sorted it's own half before returning and then after that comparing happens and again ->temp->orignal->sorted




// void recursiveBubble(int arr[],int size){  //doing all past algos using recursion instead of loop

//     if(size==1){    //look very down in the #2, it is decresing size each time as we get sorted by the end each time. so when we reach to the 1st element, there's nothing left to sort so we're done
//         return;    //###1 above LOC^ was for the base case of rercursion
//     }             //one thing which is worth noticing is that one recursion is loop itself. But it can just decrese or increse the value , can't perform complex logic of different path in it. so here outer loop is what that is quite simple and normal, so only there the recursion is replaced

//     bool didswap = false;         //'didswap' is for the cases when the array is already sorted somewhere.
//     for(int j=0; j<size-1; j++){  //see here it is runnig indendently till end and end is what that' dynamic and getting reduced each time but in 'for' loop it was getting deduced and the outer looop end was constant
//         if(arr[j]>arr[j+1]){      //again remember this is the inner loop we are going into.
//             int temp= arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=temp;
//             didswap=true;   //plus for recursion we gotta make a different function to operate in. Like where we are rn is a void function, but if iv'e used a 'for loop', then the whole shit could've been inside the main function
//         }
//     } 
//     if(didswap==false) return;  //this will be our best case for T.C O(n) or else it will be O(n^2)

//     recursiveBubble(arr,size-1);  // ###2 this is where we go one less than before(from end) cuz it is getting sorted at the end each time.
// }   //till this point everything is covered by ^ this fucntion so no need to make any changes in main, just call as it is

// int main(){    //Space Complexity is O(n) and  T.C is  O(n^2) for Avg-Worst Cases but for best it's O(n)
//     int arr[]={5,4,3,7,2,8,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
 
// cout<<"Before Recursive Bubble Sort : \n";   //After each pass, bubble sort knows one mare element is permanently osrted. The next step is to simply to ignore that sorted part..And this could be done by 2 ways-> 1.By doing n-i inside the inner loop(supported in both recursion and loop), 2.By decresing the size each time(only in recrusion )
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";}


//     recursiveBubble(arr,size);  //we used our recursion fucntion here so things changed and it's sorted now

// cout<<"\nAfter Recursive Bubble Sort : \n";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";}

//     return 0;   //This was somehow differnt from normal 'for' loop approch that we do. In this we were not concidering the last el 1 by 1 after each iteration of outer loop but in the 'for loop' method, we were not concidering the last el inside the inner loop and that check of ' issorted ' was saving us
// }



// Work for tommorow :-
//  Practice above shit of your own $
//  Reseach why the code above this shi doens't worked and how to make that approach work
//  Check why does we need 'i-low' for our printing of merge sorted algo $
//  Start doing selection sort and insertion sort- using for loop first then try converting into recursion then understand that $




// void recursiveInsertionSort(int arr[], int size,int start){
    
//     if(start==size) return;   //in this for each loop we have to go from starting to ending  so we need simple adding factor that's why i addeed another parameter to incresce the counter by 1 each time(the work of i is done by that counter)

//         int j=start;   //then the counter which will act like 1 then 2 then 3, by the help of that we can go reverse till 0 each time like 3(321) or 5(54321)
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j],arr[j-1]);      //always use temp while swaping, i used this cuz it's easy for the concept to get explained rn
//             j--;}   //this will do the rest of the job
    
//     recursiveInsertionSort(arr,size,start+1);   //here is the factor '+1' that will increse our counter 'start' each time !
// }

// int main(){
//     int arr[]={5,3,7,1,0,9,2};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     recursiveInsertionSort(arr,size,0);  //calling that fucntion and giving initial start as 0

//     for(int i=0; i<size; i++){  //TC is O(n^2) for worst and avg case for best it's O(n) and the best case don't need a check like in bubble sort it will do it of it's own using the condition in while loop!
//         cout<<arr[i]<<" ";}     //space complexity is O(n)
// }




// Work for tommorow :-
//meaning of auxiliary space stack $ - extra additional temporary memory space required by an algorithim during execution
//practice the selection sort again with for loop $
//convert yourself selection sort for loop version in recursion $




// void SelectionSortRecursion(int arr[], int size, int i){

//    if(i==size-1) return;  //we don't need to check the last element so i did '-1'

//    int ismini=i;
//    for(int j=i; j<size; j++){
//        if(arr[ismini]>arr[j]){
//            ismini=j;}
//     }
//    swap(arr[ismini],arr[i]);   //not using temp cuz it's just for speed
      
//    SelectionSortRecursion(arr, size, i+1);  //it is aslo similar to merge sort, cuz we just want to go forward while ignoring the 1st element each time(ignoring part will be done by inner loop)
// }                                            //so i should generally use recursion instead of loops when i have to iterate from one point to another(outer loops)

// int main(){
//     int arr[]={5,3,7,1,0,9,2};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     SelectionSortRecursion(arr,size,0);

//     for(int i=0; i<size; i++){  //Time complexity is O(n^2) for all worst-avg-best cases
//         cout<<arr[i]<<" ";}     //space complexity is O(n)
// }




//Work For Tommorow :-
// Understand the quick sort algo with notes and interpretation of everything $
// Write QuickSort algo from scrach of your own $
// For all algorithms check out how to do descending order for all of them
// Write all the algos of recurtion as test





// int pivot(int arr[], int low, int high){  //QUICK SORT

//     int point=arr[low];  //choosing any pivot point but generally the first element is prescribed to choose as pivot
//     int i=low;          //defining the start and end point for replacing that will increment and decrement accordingly
//     int j=high;        //these two i and j will be compared with the pivot for the act and swaping shi
    
//     while(true){     //until a internal break is not happened it will run. And that breakage will be when i and j crossed at the end 
        
//         while(point>=arr[i] && i<=high){   //i says "jb tk pivot bda hai tb tk mt ruko and increment krte rho". i defined the range too till which i have to go till and don't have to cross.
//             i++;}                         //it will increse until i find the INDEX WHERE ELEMENT IS GREATER THAN PIVOT'S. On those indexes it will not increment and kept still for the swap and the next iteration
        
//         while(point<arr[j] && j>=low){   //that ^ above was for left of the pivot, this is for the right side of the pivot where we have to decrement(come back from the end). This is saying similar story that "jb tk pivot chota hai j se ya JB TK J BDA hai pivot se, tb tk neeche jate rho"and when ye condition met nhi hogi or man lo hume koi el bda mil gya i side ya koi el chota mil gya j side to ye el ko increment nhi krega and neeche jake swap ho jayega tb again check hoga then increment krega
//             j--;}                       //the main purpose is to STOP ON ONLY THOSE INDEXES WHERE ELEMENT IS SMALLER THAN THE PIVOT, else keep decrementing. So by the end we will be having those element which are ready to swap and follows both left and right rule
    
//         if(i>=j){ break; }   //this is V.V.I, it stops right when both points croses their area(left into right and vise versa) and by now we kinda have all the stuff smaller on the left and vise versa but still the pivot is not still at it's correct position (but we've found it's position)
        
//         int temp = arr[i];   //what we accually need is to swap the values which are larger than the pivot onto the rhs of pivot and vise versa, so while loop does the oppisite and keeps moving where it's !Opposite and this swap will not be exicuted for those cases 
//         arr[i] = arr[j];    //but when i want to swap acc. to conditon and plan then those elements will not be incremented/decremented and i will get them safe and sound at the end and i will swap them here like i am doing rn
//         arr[j] = temp;     //And you know why i didn't used the function to increse the fukkin efficency
//     }
//         int temp = arr[low];   //this will execute after our big while loop. By now will be having everything smaller on the left and vise versa
//         arr[low] = arr[j];    //now THIS IS TO BE NOTED AND MEMORISED THAT "THE LAST VALUE POSITION OF THE J IS WHAT THE ACTUAL POSITION OF PIVOT IS"
//         arr[j] = temp;       //so we swap j with the lowest point in the array that was pivot. Note that we can't switch j with pivot directly cuz pivot is just the variable storing the copy of the first element< WE gotta SWITCH it with the LOWEST INDEX ELEMENT that we DECIDED eirlier as pivot

//     return j;               //we gotta return the value's index that we found in the end so we can use it as partition
// }

// void qs(int arr[], int low, int high){
//     if(low>=high) return;   //base case, if one element is left on left and right of the partition. Its follows deviding and quenquering(similar to the merge sort)

//     int partition=pivot(arr, low, high);   //storing in a varible which have our 1 correct possition and smaller element on left with larger on right across that positon 

//     qs(arr,low,partition-1);   //it completly sorts the lhs before moving to rhs down below
//     qs(arr,partition+1,high);  //this will divide the array each time our array will be called and repeats these all steps until base case condition
// }


// int main(){    //Quick Sort - Better than Merge Sort cuz it doesn't use any temp array to store the sorted element. It store those elements on their respected locations one by one
//     int arr[]={5,3,7,1,0,9,2};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     qs(arr,0,size-1);  //calling 

//     for(int i=0; i<size; i++){  //Time complexity is O(N log n) for all avg-best cases and for worst it 's O(n^2)
//         cout<<arr[i]<<" ";}   //space complexity is O(1) cuz we are not using any auxilary space  
// }




//Work For Tommorow :-
// Write QuickSort algo from scrach of your own $ 
// Read all the comments of QS and interpret them again $
// Write all the algos of reccurtion as test $
// For all algorithms check out how to do descending order for all of them $

//merge sort $
//selection sort $
//bubble sort $
//insertion sort $
//quick sort $

//Work For Tommorow :-
// Solve Quick Sort and Watch video of it afterwards and code again $
// Solve Merge Sort $
// Watch video of Merge Sort afterwards $
// Solve that old topic 'Hashing' Again Test $
// Check why the Commented Solution is not working(requries internet) $