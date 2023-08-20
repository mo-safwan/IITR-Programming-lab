#include <iostream> 
#include "array.h" 
using namespace std ; 

template < typename T >
class stack{
        private :
		int top ; 
		array<T> stk(int size) ;  
                                    
	public :
		stack( int val ) {
			this->top = -1 ;
			this->size = val ; 	
		}

                void push( T val ) {
			top++ ; 
                        int flag = stk.insert( top , val ) ;
			if ( flag == -1 ) {
				top-- ; 
			} 
                }

                void pop() {
                        if ( top == -1 ) {
                                cout << "Stack Underflow!\n" ;
                        }
                        else {
                                stk.deletion( stk[top] ) ;
				top-- ; 
                        }
                }

                void display() {
                        if ( top == -1  ){
                                cout << "Stack is empty!\n" ;
				return ; 
			}
			else {
				stk.display() ; 
			}

                }
};

int main() {
        stack<int> st(4) ;
        st.push(10) ;
        st.push(20) ;
        st.push(30) ;
        cout << "Pushed 10 , 20 , 30 \n" ;
        st.display() ;
        cout << "pushed 40 \n" ;
        st.push(40) ;
        st.display() ;
        st.pop() ;
        cout << "Popped 40 \n" ;
        st.display() ;
        st.pop() ;
        cout << "Popped 30 \n"  ;
        st.display() ;
}

