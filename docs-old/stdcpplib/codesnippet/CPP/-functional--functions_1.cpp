// functional_ptr_fun.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <iostream>

int main( )
{
    using namespace std;
    vector <char*> v1;
    vector <char*>::iterator Iter1, RIter;

    v1.push_back ( "Open" );
    v1.push_back ( "up" );
    v1.push_back ( "the" );
    v1.push_back ( "opalescent" );
    v1.push_back ( "gates" );

    cout << "Original sequence contains: " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; ++Iter1 )
        cout << *Iter1 << " ";
    cout << endl;

    // To search the sequence for "opalescent"
    // use a pointer_to_function conversion
    RIter = find_if( v1.begin( ), v1.end( ),
        not1 ( bind2nd (ptr_fun ( strcmp ), "opalescent" ) ) );

    if ( RIter != v1.end( ) )  
    {
        cout << "Found a match: " 
            << *RIter << endl;
    }
}