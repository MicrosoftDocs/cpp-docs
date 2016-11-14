---
title: "slice Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "valarray/std::slice"
  - "std.slice"
  - "slice"
  - "std::slice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "slice class"
ms.assetid: 00f0b03d-d657-4b81-ba53-5a9034bb2bf2
caps.latest.revision: 23
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
# slice Class
A utility class to valarray that is used to define one-dimensional subsets of a parent valarray. If a valarray is regarded as a two-dimensional matrix with all elements in an array, then the slice extracts a vector in one dimension out of the two-dimensional array.  
  
## Remarks  
 The class stores the parameters that characterize an object of type [slice_array](../standard-library/slice-array-class.md) The subset of a valarray is indirectly constructed when an object of class slice appears as an argument for an object of class [valarray](../standard-library/valarray-class.md#valarray__operator_at)**\<Type>**. The stored values that specify the subset selected from the parent valarray include:  
  
-   A starting index in the valarray.  
  
-   A total length, or number of elements in the slice.  
  
-   A stride, or distance between subsequent indices of elements in the valarray.  
  
 If the set defined by a slice is the subset of a constant valarray, then the slice is a new valarray. If the set defined by a slice is the subset of a nonconstant valarray, then the slice has reference semantics to the original valarray. The evaluation mechanism for nonconstant valarrays saves time and memory.  
  
 Operations on valarrays are guaranteed only if the source and destination subsets defined by the slices are distinct and all indices are valid.  
  
### Constructors  
  
|||  
|-|-|  
|[slice](#slice__slice)|Defines a subset of a `valarray` that consists of a number of elements that are an equal distance apart and that start at a specified element.|  
  
### Member Functions  
  
|||  
|-|-|  
|[size](#slice__size)|Finds the number of elements in a slice of a `valarray`.|  
|[start](#slice__start)|Finds the starting index of a slice of a `valarray`.|  
|[stride](#slice__stride)|Finds the distance between elements in a slice of a `valarray`.|  
  
## Requirements  
 **Header:** \<valarray>  
  
 **Namespace:** std  
  
##  <a name="slice__size"></a>  slice::size  
 Finds the number of elements in a slice of a valarray.  
  
```  
size_t size() const;
```  
  
### Return Value  
 The number of elements in a slice of a valarray.  
  
### Example  
  
```cpp  
// slice_size.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
   size_t sizeVA, sizeVAR;  
  
   valarray<int> va ( 20 ), vaResult;  
   for ( i = 0 ; i < 20 ; i += 1 )  
      va [ i ] =  i+1;  
  
   cout << "The operand valarray va is:\n ( ";  
      for ( i = 0 ; i < 20 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   sizeVA = va.size ( );  
   cout << "The size of the valarray is: "  
        << sizeVA << "." << endl << endl;  
  
   slice vaSlice ( 3 , 6 , 3 );  
   vaResult = va [ vaSlice ];  
  
   cout << "The slice of valarray va is vaResult = "  
        << "va[slice( 3, 6, 3)] =\n ( ";  
      for ( i = 0 ; i < 6 ; i++ )  
         cout << vaResult [ i ] << " ";  
   cout << ")." << endl;  
  
   sizeVAR = vaSlice.size ( );  
   cout << "The size of slice vaSlice is: "  
        << sizeVAR << "." << endl;  
}  
```  
  
```Output  
The operand valarray va is:  
 ( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).  
The size of the valarray is: 20.  
  
The slice of valarray va is vaResult = va[slice( 3, 6, 3)] =  
 ( 4 7 10 13 16 19 ).  
The size of slice vaSlice is: 6.  
```  
  
##  <a name="slice__slice"></a>  slice::slice  
 Defines a subset of a valarray that consists of a number of elements that are an equal distance apart and that start at a specified element.  
  
```  
slice();

slice(
    size_t _StartIndex,  
    size_t _Len,   
    size_t stride);
```  
  
### Parameters  
 `_StartIndex`  
 The valarray index of the first element in the subset.  
  
 `_Len`  
 The number of elements in the subset.  
  
 ` stride`  
 The distance between elements in the subset.  
  
### Return Value  
 The default constructor stores zeros for the starting index, total length, and stride. The second constructor stores `_StartIndex` for the starting index, `_Len` for the total length, and ` stride` for the stride.  
  
### Remarks  
 The stride may be negative.  
  
### Example  
  
```cpp  
// slice_ctor.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   valarray<int> va ( 20 ), vaResult;  
   for ( i = 0 ; i < 20 ; i+=1 )  
      va [ i ] =  2 * (i + 1 );  
  
   cout << "The operand valarray va is:\n( ";  
      for ( i = 0 ; i < 20 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   slice vaSlice ( 1 , 7 , 3 );  
   vaResult = va [ vaSlice ];  
  
   cout << "\nThe slice of valarray va is vaResult:"  
        << "\nva[slice( 1, 7, 3)] = ( ";  
      for ( i = 0 ; i < 7 ; i++ )  
         cout << vaResult [ i ] << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The operand valarray va is:  
( 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 ).  
  
The slice of valarray va is vaResult:  
va[slice( 1, 7, 3)] = ( 4 10 16 22 28 34 40 ).  
```  
  
##  <a name="slice__start"></a>  slice::start  
 Finds the starting index of a slice of a valarray.  
  
```  
size_t start() const;
```  
  
### Return Value  
 The starting index of a slice of a valarray.  
  
### Example  
  
```cpp  
// slice_start.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
   size_t startVAR;  
  
   valarray<int> va ( 20 ), vaResult;  
   for ( i = 0 ; i < 20 ; i += 1 )  
      va [ i ] = i+1;  
  
   cout << "The operand valarray va is:\n ( ";  
      for ( i = 0 ; i < 20 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   slice vaSlice ( 3 , 6 , 3 );  
   vaResult = va [ vaSlice ];  
  
   cout << "The slice of valarray va is vaResult = "  
        << "va[slice( 3, 6, 3)] =\n ( ";  
      for ( i = 0 ; i < 6 ; i++ )  
         cout << vaResult [ i ] << " ";  
   cout << ")." << endl;  
  
   startVAR = vaSlice.start ( );  
   cout << "The start index of slice vaSlice is: "  
        << startVAR << "." << endl;  
}  
```  
  
```Output  
The operand valarray va is:  
 ( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).  
The slice of valarray va is vaResult = va[slice( 3, 6, 3)] =  
 ( 4 7 10 13 16 19 ).  
The start index of slice vaSlice is: 3.  
```  
  
##  <a name="slice__stride"></a>  slice::stride  
 Finds the distance between elements in a slice of a valarray.  
  
```  
size_t stride() const;
```  
  
### Return Value  
 The distance between elements in a slice of a valarray.  
  
### Example  
  
```cpp  
// slice_stride.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
   size_t strideVAR;  
  
   valarray<int> va ( 20 ), vaResult;  
   for ( i = 0 ; i < 20 ; i += 1 )  
      va [ i ] =  3 * ( i + 1 );  
  
   cout << "The operand valarray va is:\n ( ";  
      for ( i = 0 ; i < 20 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   slice vaSlice ( 4 , 5 , 3 );  
   vaResult = va [ vaSlice ];  
  
   cout << "The slice of valarray va is vaResult = "  
        << "va[slice( 4, 5, 3)] =\n ( ";  
      for ( i = 0 ; i < 5 ; i++ )  
         cout << vaResult [ i ] << " ";  
   cout << ")." << endl;  
  
   strideVAR = vaSlice.stride ( );  
   cout << "The stride of slice vaSlice is: "  
        << strideVAR << "." << endl;  
}  
```  
  
```Output  
The operand valarray va is:  
 ( 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 ).  
The slice of valarray va is vaResult = va[slice( 4, 5, 3)] =  
 ( 15 24 33 42 51 ).  
The stride of slice vaSlice is: 3.  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

