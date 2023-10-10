#include<iostream>
#define MAX_SIZE 10
using namespace std;
int item[MAX_SIZE],rear,front;
init(){
rear = -1;
front = 0;
}
isEmpty(){
if(front>rear){
return true;
}else{
return false;
}
}
enqueue(int data){
item[++rear] = data;
}
dequeue(){
return item[front++];
}
display(){
if(!isEmpty()){
for(int i=front; i<=rear; i++)
cout<<item[i]<<endl;
}else{
cout<<"Queue is Empty"<<endl;
}
}
size(){
return (rear - front + 1);
}
isFull(){
if(size()>=MAX_SIZE){
return true;
}else{
return false;
}
}
int main(){



int choice, data;
init();
while(1){
cout<<"\n1. Enqueue\n2. Dequeue\n3. Size\n4. Display all element\n5. Quit";

cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice){
case 1:
if(!isFull()){
cout<<"\nEnter data: ";

cin>>data;
enqueue(data);

}else{
cout<<"Queue is Full"<<endl;
}
break;
case 2:
if(!isEmpty()){
cout<<"The data dequeued is :"<<dequeue();
}else{
cout<<"Queue is Emtpy"<<endl;
}
break;
case 3:
cout<<"Size of Queue is "<<size();
break;
case 4:
display();
break;
case 5:
exit(0);
break;
}
}
return 0;
}
