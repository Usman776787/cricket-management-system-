#include<iostream>
#define size 10
using namespace std;
class queue{
	public:
		int front,rear;
		int arr[size];
	queue(){
		front=rear=-1;
	}
	bool isEmpty(){
		if(front==-1){
			return true;}
			else{
			
			return false;
		}}
		bool isFull(){
			if(front==size-1){
				return true;}
				else{
					return false;
				}
			}
	
	void enqueue(int a){
		if(isFull()){
			cout<<"Overflow occurred.\n";
			return;
		}
		else{
			if(isEmpty()){
				front=rear=1;
				arr[front]=a;
			}
			else{
				front++;
				arr[front]=a;
			}
		//	cout<<arr[front]<<" enqueued\n";
		}
	}
	void dequeue(){
		if(isEmpty()){
			cout<<"Underflow occurred.\n";
			return;
		}
		else{
			int temp=arr[rear];
			if(rear==front){
				rear=front=-1;
			}
			else{
				rear++;
			}
		//	cout<<temp<<" dequeued.\n";
		}
	}
	void display(){
		for (int i=rear;i<=front;i++){
			cout<<arr[i]<<"-";
		}
	}
	int displayfront(){
		return arr[front];
	}
	int displayrear(){
		return arr[rear];
	}
};

