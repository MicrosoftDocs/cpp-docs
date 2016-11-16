---
title: "&lt;ostream&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: 15
manager: "ghogen"
---
# &lt;ostream&gt; functions
||||  
|-|-|-|  
|[swap](#swap)|[endl](#endl)|[ends](#ends)|  
|[flush](#flush)|  
  
##  <a name="endl"></a>  endl  
 Terminates a line and flushes the buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& endl(basic_ostream<Elem, Tr>& Ostr);
```  
  
### Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `Ostr`**.**[put](../standard-library/basic-ostream-class.md#basic_ostream__put)( `Ostr`**.** [widen](../standard-library/basic-ios-class.md#basic_ios__widen)( **'\n'**)), and then calls `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#basic_ostream__flush). It returns `Ostr`.  
  
### Example  
  
```cpp  
// ostream_endl.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << endl;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="ends"></a>  ends  
 Terminates a string.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& ends(basic_ostream<Elem, Tr>& Ostr);
```  
  
### Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `Ostr`**.**[put](../standard-library/basic-ostream-class.md#basic_ostream__put)( `Elem`( **'\0'**)). It returns `Ostr.`  
  
### Example  
  
```cpp  
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
  
```Output  
ab c  
```  
  
##  <a name="flush"></a>  flush  
 Flushes the buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& flush(basic_ostream<Elem, Tr>& Ostr);
```  
  
### Parameters  
 `Elem`  
 The element type.  
  
 `Ostr`  
 An object of type `basic_ostream`.  
  
 `Tr`  
 Character traits.  
  
### Return Value  
 An object of type `basic_ostream`.  
  
### Remarks  
 The manipulator calls `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#basic_ostream__flush). It returns `Ostr`.  
  
### Example  
  
```cpp  
// ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << flush;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="swap"></a>  swap  
 Exchanges the values of two `basic_ostream` objects.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_ostream<Elem, Tr>& left,  
    basic_ostream<Elem, Tr>& right);
```  
  
### Parameters  
 ` left`  
 An lvalue reference to a `basic_ostream` object.  
  
 ` right`  
 An lvalue reference to a `basic_ostream` object.  
  
### Remarks  
 The template function `swap` executes ` left.swap(`` right``)`.  
  
## See Also  
 [\<ostream>](../standard-library/ostream.md)

