---
title: "binder2nd Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std.binder2nd"
  - "binder2nd"
  - "xfunctional/std::binder2nd"
  - "std::binder2nd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binder2nd class"
ms.assetid: b2a9c1d1-dfc4-4ca9-a10e-ae84e195a62d
caps.latest.revision: 21
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
# binder2nd Class
A template class providing a constructor that converts a binary function object into a unary function object by binding the second argument of the binary function to a specified value.  
  
## Syntax  
  
```
template<class Operation>
class binder2nd
 : public unary_function <typename Operation::first_argument_type,
    typename Operation::result_type>
 {
    public:
 typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder2nd(
 const Operation& _Func,
    const typename Operation::second_argument_type& right);

    result_type operator()(
    const argument_type& left) const;

    result_type operator()(
    argument_type& left) const;

    protected:
 Operation op;
    typename Operation::second_argument_type value;
 };
```  
  
#### Parameters  
 `_Func`  
 The binary function object to be converted to a unary function object.  
  
 `right`  
 The value to which the second argument of the binary function object is to be bound.  
  
 `left`  
 The value of the argument that the adapted binary object compares to the fixed value of the second argument.  
  
## Return Value  
 The unary function object that results from binding the second argument of the binary function object to the value `right.`  
  
## Remarks  
 The template class stores a copy of a binary function object _ *Func* in **op**, and a copy of `right` in **value**. It defines its member function `operator()` as returning **op**( `left`, **value**).  
  
 If `_Func` is an object of type **Operation** and c is a constant, then [bind2nd](../stdcpplib/-functional--functions.md#bind2nd_function) ( `_Func`, `c` ) is equivalent to the `binder2nd` class constructor `binder2nd`\< **Operation**> ( `_Func`, `c` ) and more convenient.  
  
## Example  
  
```  
// functional_binder2nd.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 5; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( ";  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    // Count the number of integers > 10 in the vector  
    vector<int>::iterator::difference_type result1;  
    result1 = count_if(v1.begin(), v1.end(),  
        binder2nd<greater<int> >(greater<int>(), 10));  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1 << "." << endl;  
  
    // Compare using binder1st fixing 1st argument:  
    // count the number of integers < 10 in the vector  
    vector<int>::iterator::difference_type result2;  
    result2 = count_if(v1.begin(), v1.end(),  
        binder1st<greater<int> >(greater<int>(), 10));  
    cout << "The number of elements in v1 less than 10 is: "  
         << result2 << "." << endl;  
}  
/* Output:  
The vector v1 = ( 0 5 10 15 20 25 )  
The number of elements in v1 greater than 10 is: 3.  
The number of elements in v1 less than 10 is: 2.  
*/  
```  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

