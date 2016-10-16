---
title: "&lt;ostream&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: 12
---
# &lt;ostream&gt; functions
||||  
|-|-|-|  
|[swap](#swap)|[endl](#endl)|[ends](#ends)|  
|[flush](#flush)|  
  
##  <a name="endl"></a>  endl  
 Terminates a line and flushes the buffer.  
  
```
template class<_Elem,  _Tr>    basic_ostream<_Elem,  _Tr>& endl(basic_ostream<_Elem,  _Tr>& _Ostr);
```  
  
### Parameters  
 `_Elem`  
 The element type.  
  
 `_Ostr`  
 An object of type `basic_ostream`.  
  
 `_Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `_Ostr`**.**[put](../stdcpplib/basic_ostream-class.md#basic_ostream__put)( `_Ostr`**.** [widen](../stdcpplib/basic_ios-class.md#basic_ios__widen)( **'\n'**)), and then calls `_Ostr`**.**[flush](../stdcpplib/basic_ostream-class.md#basic_ostream__flush). It returns `_Ostr`.  
  
### Example  
  
```  
// ostream_endl.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << endl;  
}  
```  
  
 **testing**    
##  <a name="ends"></a>  ends  
 Terminates a string.  
  
```
    template class<_Elem,  _Tr>    basic_ostream<_Elem,  _Tr>& ends(basic_ostream<_Elem,  _Tr>& _Ostr);
```  
  
### Parameters  
 `_Elem`  
 The element type.  
  
 `_Ostr`  
 An object of type `basic_ostream`.  
  
 `_Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `_Ostr`**.**[put](../stdcpplib/basic_ostream-class.md#basic_ostream__put)( `_Elem`( **'\0'**)). It returns `_Ostr.`  
  
### Example  
  
```  
// ostream_ends.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "a";  
   cout << "b" << ends;  
   cout << "c" << endl;  
}  
```  
  
 **ab c**    
##  <a name="flush"></a>  flush  
 Flushes the buffer.  
  
```
template class<_Elem,  _Tr>    basic_ostream<_Elem,  _Tr>& flush(basic_ostream<_Elem,  _Tr>& _Ostr);
```  
  
### Parameters  
 `_Elem`  
 The element type.  
  
 `_Ostr`  
 An object of type `basic_ostream`.  
  
 `_Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `_Ostr`**.**[flush](../stdcpplib/basic_ostream-class.md#basic_ostream__flush). It returns `_Ostr`.  
  
### Example  
  
```  
// ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << flush;  
}  
```  
  
 **testing**    
##  <a name="swap"></a>  swap  
 Exchanges the values of two `basic_ostream` objects.  
  
```
template<class Elem, class Tr>
void swap(
    basic_ostream<Elem, Tr>& left,
    basic_ostream<Elem, Tr>& right);
```  
  
### Parameters  
 `left`  
 An lvalue reference to a `basic_ostream` object.  
  
 `right`  
 An lvalue reference to a `basic_ostream` object.  
  
### Remarks  
 The template function `swap` executes `left.swap(``right``)`.  
  
## See Also  
 [\<ostream>](../stdcpplib/-ostream-.md)

