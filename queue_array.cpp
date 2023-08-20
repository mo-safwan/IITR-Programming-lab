#include <iostream> 
#include "array.h" 
using namespace std ; 

template < typename T > 
class queue {
	private : 
		int front ; 
		int rear ;  
	public : 
		queue( int val ) {
			this->front = -1 ; 
			this->rear = -1 ; 
			array<T> queue_array( val ) ; 
		}
		void insert( T val ){
			rear++ ; 
			queue_array.insert( rear , val ) ; 
			if ( front == -1 ){
				front++ ; 
			} 
		}
}; 

int main() {
	queue<int> q(5) ; 
	return 0 ; 
}
