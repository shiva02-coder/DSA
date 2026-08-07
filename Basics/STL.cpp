#include <bits/stdc++.h>
using namespace std;

void pair_explain(){
   
    pair<int,int> G = {43,23};       //Pairs are used to store 2 or more elements in one
    cout<<G.first<<" "<<G.second;    //for accesing

    cout<<"\n";

    pair<int, pair<int,int>> g2 ={ 4, {52,12} };  //to store 3 elements at once
    cout<<g2.second.second;

    cout<<"\n";

    pair<int,char> arr[] ={ {1,'A'},{3,'g'} };    //pair can be treated as datatype
    cout<<arr[0].first<<" "<<arr[1].second;      //look here,each indexing have 2 element

    cout<<"\n";

}
void vector_explain(){
   
    vector<int> v={12};    //that's how single vector is defined with the item in it
    cout<<v[0];            //printing while using the first index i.e 0 (doesn't matter if the vector is carring 1 or more elements at the emd it's just similar to an array)

    v.push_back(43);         //push_back  = create object → put into vector
    v.emplace_back(25);      //emplace_back = create object directly inside vector so it's fast
    
    cout<<"\n"<< v[1] <<" "<< v[2];   //see they got added in the end of the vector, that's how it works  

    vector<int> p = {1,2,3,4,5,6,7,8};  //this is the collection of element of same datatype

    vector< pair<int,int> > vpair ={ {5,3} };              //vectors include pairs so it's like this - {{}}
    cout<<"\n"<< vpair[0].first <<" "<< vpair[0].second;  //mentioning index of vector pair is must i.e 0 here, then came first or second

    vpair.push_back({56,23});      //To add a pair at the end of a vector, we defined a pair first
    vpair.emplace_back(23,12);    //mostly this one is used, it automatly assume info as pair

    cout<<"\n"<< vpair[1].second <<" "<< vpair[2].first;     //means 2nd pair ka first element

    vector<int> emp(4);             //container stores 4 size of 0000 values, also i can use pushback to increase it's size
    vector<int> times(4,20);       //creates a container of - instance 4 times and fill it with 20 like this {20,20,20,20}
    vector<int> times2(times);    //creates a copy named times2 which now contain all the data of times
    
    emp.emplace_back(999);         //this will increase the space of emp, the value is that inside of ()
    times.emplace_back(30);        //this will insert 30 at the end of the times

    cout<<"\n"<<times[4]<<" "<<times2[3];      //works like indexing, the times-1 prints the last element
}
void iterator_explain(){
    
vector<int> p = {1,2,3,4,5,6,7,8};   //vector set

    vector<int>::iterator itm = p.begin();    //this only gives the memory address of first element
        cout<<*(itm);       //this converts the adress into value
    itm++;
        cout<<*(itm);
    itm+=2;
        cout<<*(itm);
    itm=itm-3;           //that's how i hovour inside of a vector
        cout<<*(itm);

    vector<int>::iterator ee = p.end();  //now it's pointing to the next position after an end
        ee--;                  //gotta do this to move in the possition to point at the very end
    cout<<"\n"<< *(ee);
        ee-=5;               //gets me 3 as result cuz we moved 5 step inward from the end
        ee=ee+6;            //to get it at it's initial point

    cout<<"\n"<<p.back()<<"\n";   // used simple and sober like this to access the last element without any hasle  

    
    for(itm; itm < ee; itm++){    //using defined start and end variables of iterators, i can print every value through for loop
        cout<<*(itm);
    } cout<<"\n";          //from here everything above is wrapped up.

vector<char> grade={'a','b','c','d','e','f'};  //complete revising all 3 before opening comments for 'erase'
    
    for(vector<char>::iterator ch=grade.begin(); ch!=grade.end(); ch++){ //start from begin and runn until it's != end
        cout<<*(ch);
    } cout<<"\n";

    for(auto ch2=grade.begin(); ch2<grade.end(); ch2++){
        cout<<*(ch2);      //automatily assign the datatype i.e 'vector<char>::iterator' in our case
    } cout<<"\n";

    //    grade.erase(grade.begin()+5);   //erase always excepts an iterator and here it means last element will get erased
    //    grade.erase(grade.begin()+1, grade.begin()+4);   //this is actually (Start<Stop) means from 2(b) then(cd) till e(not included)  

    for(char ch3 : grade){    //datatype should be same as of the dataset, i could've set that 'char' as 'auto'
        cout<<ch3;            //this is for-each loop
    } cout<<"\n";            
}
void insert_function(){

vector<int> num(4,200);            // {200 200 200 200}
    num.insert(num.begin()+2,300);   //(position,value)
        for(auto n: num){cout<<n<<" ";}       //will get printed ON the 3rd Position

cout<<"\n";
    num.insert(num.begin(),3,100);     //(start_point,quantity,num)
        for(auto n:num){cout<<n<<" ";}   //using this i can insert any values anywhere inside of the vector
cout<<"\n";

vector<int> num2(2,400);        //inserting another vector into our first vector
    num.insert(num.end(), num2.begin(),num2.end());      //(position_firstVec, startOf2nd, endOf2nd) if only portion is needed of 2nd vector, so that's also i can do
        for(auto n:num){cout<<n<<" ";}
cout<<"\n";
    cout<<num.size();    //tells the size
cout<<"\n";
    num.pop_back();    //delete last element only
        for(auto n:num){cout<<n<<" ";}
cout<<"\n";
    num.swap(num2);     //it swaps the names of the both vector but content stays there
        for(auto n:num){cout<<n<<" ";}   //as i can see im printing num, but now num is filled with num2 values and vise versa
cout<<"\n";
    num.clear();   //clears the whole vector as empty
    cout<<num2.empty()<<" "<<num.empty();     //it checks if the vector is null or not via 0(not empty) or 1(empty)
}    
void list_explain(){

list<int> saman(3,45);           //similar to vectors
list<int> dusraSaman={43,52,13};  //other practiced stuff like begin,end,clear,insert,size,swap are also same

    saman.insert(saman.begin(),32);   // see all similar

    dusraSaman.push_back(4);     //added to the end
    saman.emplace_back(23);     //same ^

    dusraSaman.push_front(56);
    dusraSaman.emplace_front(11);

    for(auto m=saman.begin(); m!=saman.end(); m++){
        cout<<*(m)<<" ";}
cout<<"\n";
    for(list<int>::iterator s=dusraSaman.begin(); s!=dusraSaman.end(); s++){
        cout<<*(s)<<" ";}
    

}
void deque_explain(){

deque<int> dq;              //it's empty initially
    dq.push_back(1);        //A vector is great at the back but slow at the front.
    dq.emplace_back(2);     //A deque is designed to work efficiently at both ends.

    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();        //everything extra is similar to those of vectors and lists of this deque

    cout<<dq.back();        //asses and prints the last element
    cout<<dq.front();    //assess and can print the first element of the deque

// Vector = Best random access.
// Weakness = front/middle insertions and deletions.

// List = Best insertion/deletion in the middle.
// Weakness = random access.

// Deque = Best fast front and back operations,Random access is still fast.
// Weakness = middle insertions/deletions.
}
void stack_explain(){

//list<int> sthelper ={53,23,24};   //don't use this for help, it's long and least efficent

//deque<int> stMorehelp ={7,2,6};   //making a deque is the best option whenever we want to insert manny elements in one stack at once
//stack<int> stacker(stMorehelp);   //then making a stack and putting deque elements in it

//Adding a bunch of elements at once is only possible if we do ^ this at the top, the method below is fine for single elements

stack<int> stacker;       //Folows 'LIFO' this stack does't have a direct container so it can't directly store elements like {3,3,5,25} 
    stacker.push(0);      //normal way to add elements in a stack
    stacker.push(3);      //stack becomes {3,0}
    stacker.push(4);      //{4,3,0} last added element at top
    stacker.emplace(5);   //we got only emplace in stack and it does same job as push

    cout<<stacker.top();   //will get 5 cuz last element came at the topp in stack(lifo)
    stacker.pop();         //deletes the top element
    cout<<stacker.top();   //now it's 4 at the top

    cout<<stacker.size();  //also we can't access stack or queue with indexes and shit

stack<int> st2;                 //made another stack for swap 
    st2.swap(stacker);          //both ways works and i can just  do 'stacker.' to see all methods available
    cout<<" "<<st2.empty();     //it's filled after swaping so it's not empty i.e 0
    cout<<" "<<stacker.empty(); //it's empty after swaping so it's 1 i.e true 

cout<<"\n";  //now to showcase every element of stack oderwize(lifo) we have to do somthing since normal loops doesn't work here

stack<int> copy = st2;           //Make a completely separate copy of st2 and store it as copy.
    while( !copy.empty() ){      //look here
        cout<<copy.top()<<" ";   //gives top element in the starting of the loop(lifo)
        copy.pop();}             //deletes the topth element and then loop gives the 2nd lop element
} 
void queue_explain(){

queue<int> q;
    q.push(4);     //it's like a ticket line, first in first out(fifo)
    q.emplace(3);  //can see all the methods available by 'q.'
    q.push(65);
    q.emplace(1);  //now it's {4,3,65,1}
    
    q.front()-=3;  //can access or edit first element like this  
    q.back() +=4;      //last element will get added +4 in it
        cout<<q.front()<<" ";  //1
        cout<<q.back();        //5

    q.pop();   //deletes the first element i.e *1
}
void pqueue_explain(){

priority_queue<int> pq;  //called 'Max Heap'
    pq.push(47);       //sets everything in the decending oder by default
    pq.emplace(55*2);  //keep experimenting
    pq.push(13);
    pq.emplace(24);    //so the result is {110,47,24,13}

    cout<<pq.top()+2;  //can apply operation and print first element now it's 112

    pq.pop();          //deletes first top element i.e 112
    cout<<' '<<pq.top();
    cout<<pq.size();   //can check rest of funtions using 'pq.'

priority_queue< int, vector<int>, greater<int> > apq;  //called 'Min Heap' by this now the reverse way accending to decending   
    apq.push(3);
    apq.emplace(9);
    apq.push(7);
    apq.emplace(11);   //{3,7,9,11}
    
    cout<<apq.top();   //will give me 3
}
void set_explain(){

set<int> num={4,3,5};   //as per the name i can do multiple stuff with sets
set<int> n2;            //sets store everything in sorted order

    num.insert(1);
    num.emplace(2);
    num.insert(6);
    num.insert(1);     //doens't store copy, only unique stays in sorted order
    num.emplace(6);    //rest of the functions are same as the vectors

    for(set<int>::iterator st=num.begin(); st !=num.end(); st++){  //did by longcut instead of by for-each shortcut
        cout<<*(st)<<" ";}  //same as iterator on vector, but don't forgor set word here.
    

    auto e =num.end();             //if i would've used int instead of auto then it should'nt have worked cus it's an ITERATOR
    auto b =num.begin();           //where these are used? in 'loops' you clueless fella
    auto a =num.find(4);           //it's an iterator that points to the element's ADDRESSS
    auto f =num.find(7);           //if the element is not in the set then it points at right next to the last element
    auto lb =num.lower_bound(4);   //returns an iterator to the first element which is either equal to or greater than the parameter
    auto ub =num.upper_bound(3);   //returns an iterator to the first element greater than entered parameter
    
    cout<<"\n";

    cout<<*(a);         //gives me just 4
    cout<<*(e);         //idk how but gives the last element i.e 6
    cout<<*(b);         //gives first element
    cout<<num.count(5); //if element is there, then set will give me 1(cuz sets always store unique values) else 0
    cout<<"\n";
    
    num.erase(3);       //this deletes that element and maintains the sorted order
    num.erase(f);       //i can either give element to be erased or simply can give the whole veriable(iterator/address) where that element will be stored

    set<int>::iterator from =num.find(4);         //this is what auto fully means 
    set<int>::iterator beforetill =num.find(6);   //here i am finding 2 points and in between them i can use clear
        num.erase(from,beforetill);               //so now from that point till last one(not included) everything will get cleared
}
void multiset_explain(){

multiset<int> mulset ={5,1,2,1,5,2,4,2,5,6,3,4};

    mulset.emplace(3);  //multiset stores in sorted order
    mulset.insert(2);   //multiset doesn't store unqiue values, it can store copy of the same element twice or more
    
        for(multiset<int>::iterator ml =mulset.begin(); ml !=mulset.end(); ml++){ cout<<*ml<<" ";}
    
    mulset.erase(2);    //it will erasea all occurance of '2' if i erase it.
cout<<"\n";
    mulset.erase(mulset.find(1));   //now, instead of erasing the element(that will pottentialy kill every element) i can delelte the iterator only(find() points to the iterator)

        for(auto a : mulset){ cout<<a<<" ";}    //now only the first occurence of 1 would be deleted. This is the Power of giving addresse of the perticular element(cuz iterator points to the address of an element so does our find)

cout<<"\n";    //rest of all functions are same as set  
    mulset.erase(mulset.find(5),mulset.find(6));    //specifing a range to delete between(end point not included)

        for(auto a : mulset){ cout<<a<<" ";}    //can see the result, before 6 everything is deleted including the starting value

}
void unorderedset_explain(){

unordered_set<int> unorder;

    unorder.emplace(5);    //stores in random order
    unorder.insert(3);     //values are unique
    unorder.emplace(5);
    unorder.insert(3);     //one in milliane it's complexity is big o of 1 i.e 'O(1)'
    unorder.emplace(7);    //upperbound and lowerbound doesn't work.. i mean but it does makes sence cuz it's unordered
    unorder.insert(1);     //it's same as set except there is random order here

    for(int i:unorder){cout<<i<<" ";}   //it doesn't change each time, but yeah it does randomizes
}
void map_explain(){

map<int,int> maap={{1,2},{2,4},{3,2},{4,4}};    //if i try to do 2 pairs of same key values and print it then it will not give me error but it will simply not recognize that
    maap[5]=1;             //way to add values in the key. also keys are stored in sorted order not the values.
    maap.insert({6,8});    //maap is {key,value} where key is unique for each value which could be same

    cout<<maap[5];    //it will print the value on this key which i just put
    cout<<maap[6];    //so map is data structure container that stores everything in key-value pair where key is unique and can be of any datatype(int,tup,pair) and value can be same 
    cout<<maap[9];    //if there is no key that i mentioned here as 9, then it will create a new key as 9 and set it's default value to 0.   

    auto it =maap.find(7);    //if 7 is not there, then it points after the last value of map

cout<<"\n";    //works in log(n) time complexity

    for(auto i : maap){cout<<i.first<<"-"<<i.second<<"  ";}    //see 9th one is there also i have to print as i am accesing a pair cuz {key,value} is essentially a pair


map< int,pair<int,int> > maaap;
    maaap[1]={2,4};    //it says on the key 1 can you store pair - {2,4}
    maaap[4]={1,3};
    maaap.insert( {2,{3,2}} );    //here, key is 2 and next to it is a value pair
    maaap.insert( { 3,{1,4} } );    
    
cout<<"\n";    

    for(map<int,pair<int,int>>::iterator mp=maaap.begin(); mp!=maaap.end(); mp++){
        cout<< mp->first;          //gives me the pair's key name
        cout<< mp->second.first;   //gives the value's first element of the pair
        cout<< mp->second.second;  //we are doing like this cuz there are 2 things and 2nd thing is stored as a pair
        cout<<" ";                 //in both the normal loop and forEach loop- i have to go to each key-value pair or both to hovour through them(think of pair_explain) 
    }


map< pair<int,int>,int > mmp;
    mmp[{2,2}]=8;               //now there are keys in a pair
    mmp.insert( {{1,1},5} );    //now the key is more deep 
    mmp.insert( {{2,1},7} );    //now one value of the key could be same cuz it's stored in a pair now
    mmp.insert( {{1,2},6} );

cout<<"\n";
    cout<<mmp[{1,2}];   //gives the value of this Key-Pair,also upper and lower bound works same as in map
    cout<<mmp[{2,2}];   //rest of the functions are same like erase,swap,size,empty and can check via 'maap.'
cout<<"\n";

    for(map<pair<int,int>,int>::iterator p =mmp.begin(); p!=mmp.end(); p++){ 
        cout<< p->first.first << p->first.second << p->second <<" ";}
}
void multimap_explain(){

multimap<int,int> mm;   //same as map but can store duplicate 'keys' weather it's pair or normal
    mm.insert({5,3});   //sorts by key
    mm.insert({5,2});   //can't use [] in multimaping for direct putting and printing
    mm.insert({5,2});
    mm.insert({4,2});
    mm.insert({7,1});
    mm.insert({2,9});   //rest are similar as map

    for(auto i : mm){cout<<i.first<<"->"<<i.second<<"  ";}   
}
void unorderedmap_explain(){

unordered_map<int,int> um;
    um.insert({42,55});   //will not store duplicates of keys that means it stores unique keys
    um.insert({323,26});   //order will be random
    um.insert({7252,364});   //have time complexity of constant, in worst case it goes bigO(1)  
    um.insert({623,1673});    //rn it will give me with lifo result but after it reaches it's limit it will give me random and also when i insert some shit then too it will mix them up
    um.insert({1734,152});
    for(unordered_map<int,int>::iterator itum=um.begin(); itum!=um.end(); itum++){
        cout<< itum->first << itum->second <<" ";}
}


bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;    //only i have to make comparison in-between 2 pairs
    if(p1.second>p2.second) return false;   //after these 2 condition, came our part where the order is same and we should make it in descending

    if(p1.first>p2.first) return true;    //i said here, if it's greater then it's okay. if not then swap!
    else return false;    //that was my comperitor that we use to build our own order
}

void extrastuff_explain(){

int a[5] ={1,5,3,2,7};  //i can sort any array easily like this
    sort(a,a+5);
    for(int all:a){cout<<all<<" ";}

    sort(a+2,a+5);cout<<"\n";   //if i want to sort only that much portion i can do this and same goes for vector
    
    sort(a,a+5,greater<int>());    //for decending order sorting, give (starting_value,ending_val,this greater symbol) it's called compariter and this one sorts automaticly in decending order
    for(int all:a){cout<<all<<" ";}

cout<<"\n";   //vectors,array and dequees can be sorted directly like this 


vector<int> v={70,59,61,25,23};    //sorting via vector kinda works too
    sort(v.begin(),v.end());    //this is what you gotta do
    for(auto ll : v){cout<<ll<<" ";}

cout<<"\n";


list<int> l={6,23,7,2,7,1,8,3,1,9,0};
    l.sort();   //list have inbuilt sort function in it
    for(auto s : l){cout<<s<<" ";}

cout<<"\n";


pair<int,int> p[]={{1,2},{2,1},{4,1}};    //now if i want to sort in my way as the question says..
//sort the pairs according to second element->It says that i have to keep smallest to largest order
//if second element is same then sort it according
//to the first element but in descending->It says if this then sort first element of those same as big to small order
//now go outside of the system

    sort(p,p+3,comp);   //always try to understand carefully and analyse in two pairs in case of 'comperator'.
    for(auto pp : p){cout<< pp.first << pp.second <<" ";}   //result will be as i wanted and i solved it using comperator

cout<<"\n";


int binary=__builtin_popcount(7);    //finds the binary digit of a number
    cout<<binary<<" ";  //counts the total of "1's" in them and givest the result

long long num=613463463;    //extra 'll' is used to do this when we have long number
    cout<<__builtin_popcountll(num);

cout<<"\n";


string s ="123";    //this permutation thing finds all the factorial of the string, including single element at the end(see output ><)

    do{cout<<s<<" ";}   // 3! = six elements
        while(  
            next_permutation(s.begin(),s.end()) //what it does it that, it takes you to the next element again and again until the last element is the end permutation
        );  //also permutation works correctly and whole when string or array is sorted cuz if it starts from the end element '321' then it is there at the n'th permutation so it will not give me any good result

    for(auto sm : s){cout<<sm<<" ";}

cout<<"\n";


int find[] ={1,5,6,8,9,3,2,7};

    int biggest=*max_element(find,find+8);    //gives the biggest element in that perticular section that i selected
    int smallest=*min_element(find+2,find+8);    //if i don't use '*' then i'll get the address of it
    
    cout<<biggest<<" "<<smallest;
}

int main(){
    //pair_explain(); 
    //vector_explain();
    //iterator_explain();
    //insert_function();
    //list_explain();
    //deque_explain();
    //stack_explain();
    //queue_explain();
    //pqueue_explain();
    //set_explain();
    //multiset_explain();
    //unorderedset_explain();
    //map_explain();
    //multimap_explain();
    //unorderedmap_explain();
    //extrastuff_explain();
} 










