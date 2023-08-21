#include<iostream>
using namespace std ;

template < typename T >
class dynamic_array {
        public :
                int size  ;
		int pointer ; 
                T* new_array ;

                array() {
                        this->size = 1 ;
			this->pointer = -1 ; 
                        this->new_array = new T[size] ;
                }

		void resize( int n ){
			resized_array = new T[n] ; 
			for ( int i = 0 ; i < size ; i++ ) {
				resized_array[i] = new_array[i] ; 
			}
			this->new_array = resized_array ; 
			this->size = n ; 
		}

                int push_back( T val ){
                	if ( size == ( pointer + 1 ) ) {
				resize( 2*size ) ;
				pointer++ ; 
				new_array[pointer] = val ; 
			}
			else{	
				pointer++ ; 
				new_array[pointer] = val ;
			}
                }

                void delete_end ( T val ) {
                        pointer-- ; 
			if ( ( pointer + 1 ) == ( size / 4 ) ) {
				resize( n/2 ) ; 
			} 
                }

                void search( T val ) {
                        for ( int i = 0 ; i < size ; i++ ) {
                                if ( new_array[i] == val ) {
                                        cout << val <<" found at index " << i << "\n" ;
                                        return ;
                                }
                        }
                        cout << val << " not found in the array!\n" ;
                }

                void display() {
                        for ( int i = 0 ; i <= pointer ; i++ ) {
                                cout << new_array[i] << " " ;
                        }
                        cout << endl ;
                }

} ;

int main() {
	
}
