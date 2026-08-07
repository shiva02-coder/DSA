#include <bits/stdc++.h>
using namespace std;


// Selection Sort:
// In each iteration, assume the current element is the smallest.
// Search the entire unsorted part of the array to find the actual smallest element.
// Do NOT swap while searching, only remember and set the index of the smallest element into Finding _mini.
// After the inner loop finishes, swap the smallest element with the first element of the unsorted part.
// This fixes one element in its correct position after every pass, so the sorted part grows from left to right until the whole array is sorted.

// int main(){     
//     int arr[]={4,6,2,7,1,9,3,5};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<size-1; i++){   //we did size-1 cuz there is no point to sort the last element. It will sort till 2nd last element only(n-1 is the last cuz we are starting from 0)
//         int finding_mini=i;       //for all outer loops we're supposing the mini as 'i' which is their first element,SO for each outer loop mini will start from thier first el and go on comparing, so after that we can compare this with the all the elements in the array and if we found any element 'j' smaller than the first element 'mini', then we set our mini as that value which is smaller, after the next inner loop that value will act as the mini and gave us the smaller value

//         for(int j=i+1; j<size; j++){    //inner loop is going till the end cuz we need to find the smallest value and it could be anywhere
//             if( arr[finding_mini]>arr[j] ){   //arr[j] is dynamic and mini changes only if we found someone smaller 
//                 finding_mini=j;}    //so it says "agr mera first element > hai j se to us j ki value ko first element ki jahag bhr do set kr do" after that,that value will act as the first value and smallest value and afterwards in the inner loop that will check if there is any value onwards smaller than that
//         }   //after all that fight and swaping we will get our warrier which will be sent to the safe place in the starting to rest 

//         int temp=arr[finding_mini];    //store mini's value in temp variable
//         arr[finding_mini]=arr[i];   //since mini is empty and mini is accually the index where we found the smallest shit so fill it with the first value that is i
//         arr[i]=temp;     //now i is empty i.e first value so we fill it with the temp which initially stores the mini's value and now it's in the starting and by the next loop it will not come under coverage
//     }

//     for(int i=0; i<size; i++){   //now to check i print this shit
//         cout<<arr[i];     //time complexity is O(n^2) for all best-worst-avg cases
//     }
// }




// int main(){   //Bubble Sort -- Selection sort takes minimum at the front but this bubble sort pushes maximum at the last and run one less time
//     int arr[]={1,4,3,2,7,8,9};   //it does adjsent swaping by checking each el with it's next and after only one iteration we have our biggest element at the end
//     int size=sizeof(arr)/sizeof(arr[0]);

//     for(int i=1; i<=size-1; i++){   //i wanted to run like one less element each time
//         int checkSwap=0;    //to check the first case that it accually have any swapped we initialized this 
        
//         for(int j=0; j<size-i-1; j++){     //for each loop it will run 1 lesser, first time for 0 to 7 then 0 to 6 and so on
           
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];    //it's complexity is O(n^2) and it's worst/avg but the good news is that it can be optimized to O(n)
//                 arr[j]=temp;     //so now imagine if array is already sorted then why go to loop each time. so can make a check for it and it will check if no swap is done in the first iterration then that means it's sorted already and that's how we will get the time complexity of O(n) liniear in our BEST
//                 checkSwap=1;}   //if for the first phase that runs from start to end, it didn't hit checkswap that means there were no swaps so this part never exicuted and it never became 1 and it kept 0
//         }
//         if(checkSwap==0){break;}    //after the first loop, we check if it's zero then there's no swap in the whole first iteration form start to end so we break out cuz we know that it's already sorted
//         cout<<"findin\n";     //so this findin' will tell me how manny iteration does actually happed i.e how manny times loop ran to complete the sorting, if there were none then it will run till O(n) linear and if there were some elements which were sorted at the end then it will not iterate on them
//     }
 
//     for(int i=0; i<size; i++){cout<<arr[i];} 
// }




// int main(){     //Insertion Sort -- We compare elements from starting till the i'th element but we go from i'th till start i.e 0th idx. After Comparizon we swap smaller to the left
//     int arr[]={4,6,2,7,1,9,3,5};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<size; i++){    //outer loop creates farther point by 1 each time. And from the farther point till 0th, inner loop goes for it's completion, and it repeats for each iteration of outer loop
       
//         int j=i;                  //the while loop will not go frontwards, it will go backwords like when(i=3 then j=321 or i=4 then j=4321)
//         while(j>0 && arr[j-1]>arr[j]){    //imagine the first element(we can't compare with anybody) so this whole loop will start when i reaches 2nd index[1] and i.e 2ndElement and then 2nd element will compared with 1st
//             int temp=arr[j-1];   // ^ also right when we are at 2nd element we have to compare it with 1st element(while loop is going backwards--) so if the before element is bigger than next then swap cuz arry[j-1] comes before arr[j] so we swap those values so we will get smaaler in arr[j-1] and this repeats until we reaches the case 0 cuz we did j--
//             arr[j-1]=arr[j];   //right here it will swap the smaller el to it's correct position(if the smaller is after larger element)
//             arr[j]=temp;
//             j--;   //this helps to Continue checking further left until sorted. this is where whenever i am at the end'th index(i) like 3 then it will get me back to 0 cuz we specified in condition that when i reaches 0 stop(or do this till i reaches 0 and here we are constantly substracting)
//         }
//     }   //it's T.C for worst and avg case is O(n^2) and for best case it's O(n) that's liniar 
//         for(int i=0; i<size; i++){cout<<arr[i]<<" ";} //It's more efficient from bubble sort cuz it don't need a check for the cases whenn arrray is already sorted cuz we implied the while conditon so when array is sorted beforehead than it will skip that cases
// }
