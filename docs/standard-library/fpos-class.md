---
title: "fpos Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.fpos"
  - "std::fpos"
  - "iosfwd/std::fpos"
  - "fpos"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fpos class, about fpos class"
  - "fpos class"
ms.assetid: ffd0827c-fa34-47f4-b10e-5cb707fcde47
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# fpos Class
The template class describes an object that can store all the information needed to restore an arbitrary file-position indicator within any stream. An object of class fpos\< **St**> effectively stores at least two member objects:  
  
-   A byte offset, of type [streamoff](../standard-library/ios-typedefs.md#streamoff).  
  
-   A conversion state, for use by an object of class basic_filebuf, of type **St**, typically `mbstate_t`.  
  
 It can also store an arbitrary file position, for use by an object of class [basic_filebuf](../standard-library/basic-filebuf-class.md), of type `fpos_t`. For an environment with limited file size, however, `streamoff` and `fpos_t` may sometimes be used interchangeably. For an environment with no streams that have a state-dependent encoding, `mbstate_t` may actually be unused. Therefore, the number of member objects stored may vary.  
  
## Syntax  
  
```  
template <class Statetype>  
class fpos  
```  
  
#### Parameters  
 *Statetype*  
 State information.  
  
### Constructors  
  
|||  
|-|-|  
|[fpos](#fpos__fpos)|Create an object that contains information about a position (offset) in a stream.|  
  
### Member Functions  
  
|||  
|-|-|  
|[seekpos](#fpos__seekpos)|Used internally by the Standard C++ Library only. Do not call this method from your code.|  
|[state](#fpos__state)|Sets or returns the conversion state.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](#fpos__operator_neq)|Tests file-position indicators for inequality.|  
|[operator+](#fpos__operator_add)|Increments a file-position indicator.|  
|[operator+=](#fpos__operator_add_eq)|Increments a file-position indicator.|  
|[operator-](#fpos__operator-)|Decrements a file-position indicator.|  
|[operator-=](#fpos__operator-_eq)|Decrements a file-position indicator.|  
|[operator==](#fpos__operator_eq_eq)|Tests file-position indicators for equality.|  
|[operator streamoff](#fpos__operator_streamoff)|Casts object of type `fpos` to object of type `streamoff`.|  
  
## Requirements  
 **Header:** \<ios>  
  
 **Namespace:** std  
  
##  <a name="fpos__fpos"></a>  fpos::fpos  
 Create an object that contains information about a position (offset) in a stream.  
  
```  
fpos(streamoff _Off =0);

fpos(Statetype _State, fpos_t _Filepos);
```  
  
### Parameters  
 `_Off`  
 The offset into the stream.  
  
 `_State`  
 The starting state of the `fpos` object.  
  
 *_Filepos*  
 The offset into the stream.  
  
### Remarks  
 The first constructor stores the offset `_Off`, relative to the beginning of file and in the initial conversion state (if that matters). If `_Off` is -1, the resulting object represents an invalid stream position.  
  
 The second constructor stores a zero offset and the object `_State`.  
  
##  <a name="fpos__operator_neq"></a>  fpos::operator!=  
 Tests file-position indicators for inequality.  
  
```  
bool operator!=(const fpos<Statetype>& right) const;
```  
  
### Parameters  
 ` right`  
 The file-position indicator against which to compare.  
  
### Return Value  
 **true** if the file-position indicators are not equal, otherwise **false**.  
  
### Remarks  
 The member function returns **!**( **\*this ==** ` right`).  
  
### Example  
  
```cpp  
// fpos_op_neq.cpp  
// compile with: /EHsc  
#include <fstream>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   fpos<int> pos1, pos2;  
   ifstream file;  
   char c;  
  
   // Compare two fpos object  
   if ( pos1 != pos2 )  
      cout << "File position pos1 and pos2 are not equal" << endl;  
   else  
      cout << "File position pos1 and pos2 are equal" << endl;  
  
   file.open( "fpos_op_neq.txt" );  
   file.seekg( 0 );   // Goes to a zero-based position in the file  
   pos1 = file.tellg( );  
   file.get( c);  
   cout << c << endl;  
  
   // Increment pos1  
   pos1 += 1;  
   file.get( c );  
   cout << c << endl;  
  
   pos1 = file.tellg( ) - fpos<int>( 2);  
   file.seekg( pos1 );  
   file.get( c );  
   cout << c << endl;  
  
   // Increment pos1  
   pos1 = pos1 + fpos<int>( 1 );  
   file.get(c);  
   cout << c << endl;  
  
   pos1 -= fpos<int>( 2 );  
   file.seekg( pos1 );  
   file.get( c );  
   cout << c << endl;  
  
   file.close( );  
}  
```  
  
##  <a name="fpos__operator_add"></a>  fpos::operator+  
 Increments a file-position indicator.  
  
```  
fpos<Statetype> operator+(streamoff _Off) const;
```  
  
### Parameters  
 `_Off`  
 The offset by which you want to increment the file-position indicator.  
  
### Return Value  
 The position in the file.  
  
### Remarks  
 The member function returns **fpos(\*this) +=** `_Off`.  
  
### Example  
  See [operator!=](#fpos__operator_neq) for a sample of using `operator+`.  
  
##  <a name="fpos__operator_add_eq"></a>  fpos::operator+=  
 Increments a file-position indicator.  
  
```  
fpos<Statetype>& operator+=(streamoff _Off);
```  
  
### Parameters  
 `_Off`  
 The offset by which you want to increment the file-position indicator.  
  
### Return Value  
 The position in the file.  
  
### Remarks  
 The member function adds `_Off` to the stored offset member object and then returns **\*this**. For positioning within a file, the result is generally valid only for binary streams that do not have a state-dependent encoding.  
  
### Example  
  See [operator!=](#fpos__operator_neq) for a sample of using `operator+=`.  
  
##  <a name="fpos__operator-"></a>  fpos::operator-  
 Decrements a file-position indicator.  
  
```  
streamoff operator-(const fpos<Statetype>& right) const;

 
fpos<Statetype> operator-(streamoff _Off) const;
```  
  
### Parameters  
 ` right`  
 File position.  
  
 `_Off`  
 Stream offset.  
  
### Return Value  
 The first member function returns **(streamoff)\*this - (streamoff)**` right`. The second member function returns **fpos(\*this) -=** `_Off`.  
  
### Example  
  See [operator!=](#fpos__operator_neq) for a sample of using `operator-`.  
  
##  <a name="fpos__operator-_eq"></a>  fpos::operator-=  
 Decrements a file-position indicator.  
  
```  
fpos<Statetype>& operator-=(streamoff _Off);
```  
  
### Parameters  
 `_Off`  
 Stream offset.  
  
### Return Value  
 The member function returns **fpos(\*this) -=** `_Off`.  
  
### Remarks  
 For positioning within a file, the result is generally valid only for binary streams that do not have a state-dependent encoding.  
  
### Example  
  See [operator!=](#fpos__operator_neq) for a sample of using `operator-=`.  
  
##  <a name="fpos__operator_eq_eq"></a>  fpos::operator==  
 Tests file-position indicators for equality.  
  
```  
bool operator==(const fpos<Statetype>& right) const;
```  
  
### Parameters  
 ` right`  
 The file-position indicator against which to compare.  
  
### Return Value  
 **true** if the file-position indicators are equal; otherwise **false**.  
  
### Remarks  
 The member function returns **(streamoff)\*this == (streamoff)**` right`.  
  
### Example  
  See [operator!=](#fpos__operator_neq) for a sample of using `operator+=`.  
  
##  <a name="fpos__operator_streamoff"></a>  fpos::operator streamoff  
 Cast object of type `fpos` to object of type `streamoff`.  
  
```  operator streamoff() const;
```  
  
### Remarks  
 The member function returns the stored offset member object and any additional offset stored as part of the `fpos_t` member object.  
  
### Example  
  
```cpp  
// fpos_op_streampos.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
   streamoff s;  
   ofstream file( "rdbuf.txt");  
  
   fpos<mbstate_t> f = file.tellp( );  
   // Is equivalent to ..  
   // streampos f = file.tellp( );  
   s = f;  
   cout << s << endl;  
}  
```  
  
```Output  
0  
```  
  
##  <a name="fpos__seekpos"></a>  fpos::seekpos  
 This method is used internally by the Standard C++ Library only. Do not call this method from your code.  
  
```  
fpos_t seekpos() const;
```  
  
##  <a name="fpos__state"></a>  fpos::state  
 Sets or returns the conversion state.  
  
```  
Statetype state() const;

void state(Statetype _State);
```  
  
### Parameters  
 `_State`  
 The new conversion state.  
  
### Return Value  
 The conversion state.  
  
### Remarks  
 The first member function returns the value stored in the **St** member object. The second member function stores `_State` in the **St** member object.  
  
### Example  
  
```cpp  
// fpos_state.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <fstream>  
  
int main() {  
   using namespace std;  
   streamoff s;  
   ifstream file( "fpos_state.txt" );  
  
   fpos<mbstate_t> f = file.tellg( );  
   char ch;  
   while ( !file.eof( ) )  
      file.get( ch );  
   s = f;  
   cout << f.state( ) << endl;  
   f.state( 9 );  
   cout << f.state( ) << endl;  
}  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

