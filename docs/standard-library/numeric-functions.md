---
title: "&lt;numeric&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b
caps.latest.revision: 13
manager: "ghogen"
---
# &lt;numeric&gt; functions
||||  
|-|-|-|  
|[accumulate](#accumulate)|[adjacent_difference](#adjacent_difference)|[inner_product](#inner_product)|  
|[iota](#iota)|[partial_sum](#partial_sum)|  
  
##  <a name="accumulate"></a>  accumulate  
 Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.  
  
```  
template <class InputIterator, class Type>  
Type accumulate(InputIterator first, InputIterator last, Type val);

template <class InputIterator, class Type, class BinaryOperation>  
Type accumulate(
    InputIterator first, 
    InputIterator last, 
    Type val, 
    BinaryOperation binary_op);
```  
  
### Parameters   
 ` first`  
 An input iterator addressing the first element in the range to be summed or combined according to a specified binary operation.  
  
 ` last`  
 An input iterator addressing the last element in the range to be summed or combined according to a specified binary operation that is one position beyond the final element actually included in the iterated accumulation.  
  
 ` val`  
 An initial value to which each element is in turn added or combined with according to a specified binary operation.  
  
 `binary_op`  
 The binary operation that is to be applied to the each element in the specified range and the result of its previous applications.  
  
### Return Value  
 The sum of ` val` and all the elements in the specified range for the first template function, or, for the second template function, the result of applying the binary operation specified, instead of the sum operation, to ( *PartialResult, \*Iter*), where *PartialResult* is the result of previous applications of the operation and `Iter` is an iterator pointing to an element in the range.  
  
### Remarks  
 The initial value insures that there will be a well-defined result when the range is empty, in which case ` val` is returned. The binary operation does not need to be associative or commutative. The result is initialized to the initial value ` val` and then *result* = `binary_op` ( *result*, **\***`Iter`) is calculated iteratively through the range, where `Iter` is an iterator pointing to successive element in the range. The range must be valid and the complexity is linear with the size of the range. The return type of the binary operator must be convertible to **Type** to ensure closure during the iteration.  
  
### Example  
  
```cpp  
// numeric_accum.cpp  
// compile with: /EHsc  
#include <vector>  
#include <numeric>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   vector <int> v1, v2(20);  
   vector <int>::iterator iter1, iter2;  
  
   int i;  
   for (i = 1; i < 21; i++)  
   {  
      v1.push_back(i);  
   }  
  
   cout << "The original vector v1 is:\n ( " ;  
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)  
      cout << *iter1 << " ";  
   cout << ")." << endl;  
  
   // The first member function for the accumulated sum  
   int total;  
   total = accumulate(v1.begin(), v1.end(), 0);  
  
   cout << "The sum of the integers from 1 to 20 is: "  
        << total << "." << endl;  
  
   // Constructing a vector of partial sums  
   int j = 0, partotal;  
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)  
   {  
      partotal = accumulate(v1.begin(), iter1 + 1, 0);  
      v2[j] = partotal;  
      j++;  
   }  
  
   cout << "The vector of partial sums is:\n ( " ;  
   for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)  
      cout << *iter2 << " ";  
   cout << ")." << endl << endl;  
  
   // The second member function for the accumulated product  
   vector <int> v3, v4(10);  
   vector <int>::iterator iter3, iter4;  
  
   int s;  
   for (s = 1; s < 11; s++)  
   {  
      v3.push_back(s);  
   }  
  
   cout << "The original vector v3 is:\n ( " ;  
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++)  
      cout << *iter3 << " ";  
   cout << ")." << endl;  
  
   int ptotal;  
   ptotal = accumulate(v3.begin(), v3.end(), 1, multiplies<int>());  
  
   cout << "The product of the integers from 1 to 10 is: "  
        << ptotal << "." << endl;  
  
   // Constructing a vector of partial products  
   int k = 0, ppartotal;  
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++) {  
      ppartotal = accumulate(v3.begin(), iter3 + 1, 1, multiplies<int>());  
      v4[k] = ppartotal;  
      k++;  
   }  
  
   cout << "The vector of partial products is:\n ( " ;  
   for (iter4 = v4.begin(); iter4 != v4.end(); iter4++)  
      cout << *iter4 << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The original vector v1 is:  
 ( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).  
The sum of the integers from 1 to 20 is: 210.  
The vector of partial sums is:  
 ( 1 3 6 10 15 21 28 36 45 55 66 78 91 105 120 136 153 171 190 210 ).  
  
The original vector v3 is:  
 ( 1 2 3 4 5 6 7 8 9 10 ).  
The product of the integers from 1 to 10 is: 3628800.  
The vector of partial products is:  
 ( 1 2 6 24 120 720 5040 40320 362880 3628800 ).  
```  
  
##  <a name="adjacent_difference"></a>  adjacent_difference  
 Computes the successive differences between each element and its predecessor in an input range and outputs the results to a destination range or computes the result of a generalized procedure where the difference operation is replaced by another, specified binary operation.  
  
```  
template <class InputIterator, class OutIterator>  
OutputIterator adjacent_difference(
    InputIterator first, 
    InputIterator last, 
    OutputIterator result);

template <class InputIterator, class OutIterator, class BinaryOperation>  
OutputIterator adjacent_difference(
    InputIterator first, 
    InputIterator last, 
    OutputIterator result, 
    BinaryOperation binary_op);
```  
  
### Parameters  
 ` first`  
 An input iterator addressing the first element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.  
  
 ` last`  
 An input iterator addressing the last element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.  
  
 `result`  
 An output iterator addressing the first element a destination range where the series of differences or the results of the specified operation is to be stored.  
  
 `binary_op`  
 The binary operation that is to be applied in the generalized operation replacing the operation of subtraction in the differencing procedure.  
  
### Return Value  
 An output iterator addressing the end of the destination range: `result` + ( ` last` - ` first`).  
  
### Remarks  
 The output iterator _ *result* is allowed to be the same iterator as the input iterator * first,* so that `adjacent_difference`s may be computed in place.  
  
 For a sequence of values *a*1, *a*2, *a*3, in an input range, the first template function stores successive **partial_difference**s *a*1, *a*2 - *a*1, a3 – *a*2, in the destination range.  
  
 For a sequence of values *a*1, *a*2, *a*3, in an input range, the second template function stores successive **partial_difference**s *a*1, *a*2 `binary_op` *a*1, *a*3 `binary_op` *a*2, in the destination range.  
  
 The binary operation `binary_op` is not required to be either associative or commutative, because the order of operations applies is completely specified.  
  
### Example  
  
```cpp  
// numeric_adj_diff.cpp  
// compile with: /EHsc  
#include <vector>  
#include <list>  
#include <numeric>  
#include <functional>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
  
   vector<int> V1( 10 ), V2( 10 );  
   vector<int>::iterator VIter1, VIter2, VIterend, VIterend2;  
  
   list <int> L1;  
   list <int>::iterator LIter1, LIterend, LIterend2;  
  
   int t;  
   for ( t = 1 ; t <= 10 ; t++ )  
   {  
      L1.push_back( t * t );  
   }  
  
   cout << "The input list L1 is:\n ( " ;  
   for ( LIter1 = L1.begin( ) ; LIter1 != L1.end( ) ; LIter1++ )  
      cout << *LIter1 << " ";  
   cout << ")." << endl;  
  
   // The first member function for the adjacent_differences of  
   // elements in a list output to a vector  
   VIterend = adjacent_difference ( L1.begin ( ) , L1.end ( ) ,   
      V1.begin ( ) );  
  
   cout << "Output vector containing adjacent_differences is:\n ( " ;  
   for ( VIter1 = V1.begin( ) ; VIter1 != VIterend ; VIter1++ )  
      cout << *VIter1 << " ";  
   cout << ")." << endl;  
  
   // The second member function used to compute  
   // the adjacent products of the elements in a list  
   VIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , V2.begin ( ) ,   
      multiplies<int>( ) );  
  
   cout << "The output vector with the adjacent products is:\n ( " ;  
   for ( VIter2 = V2.begin( ) ; VIter2 != VIterend2 ; VIter2++ )  
      cout << *VIter2 << " ";  
   cout << ")." << endl;  
  
   // Computation of adjacent_differences in place  
   LIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , L1.begin ( ) );  
   cout << "In place output adjacent_differences in list L1 is:\n ( " ;  
   for ( LIter1 = L1.begin( ) ; LIter1 != LIterend2 ; LIter1++ )  
      cout << *LIter1 << " ";  
   cout << ")." << endl;  
}  
```  
  
##  <a name="inner_product"></a>  inner_product  
 Computes the sum of the element-wise product of two ranges and adds it to a specified initial value or computes the result of a generalized procedure where the sum and product binary operations are replaced by other specified binary operations.  
  
```  
template <class InputIterator1, class InputIterator2, class Type>  
Type inner_product(
    InputIterator1   first1, 
    InputIterator1   last1, 
    InputIterator2   first2, 
    Type             val);

template <class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>  
Type inner_product(
    InputIterator1   first1, 
    InputIterator1   last1, 
    InputIterator2   first2, 
    Type             val, 
    BinaryOperation1  binary_op1, 
    BinaryOperation2  binary_op2);
```  
  
### Parameters  
 ` first1`  
 An input iterator addressing the first element in the first range whose inner product or generalized inner product with the second range is to be computed.  
  
 ` last1`  
 An input iterator addressing the last element in the first range whose inner product or generalized inner product with the second range is to be computed.  
  
 ` first2`  
 An input iterator addressing the first element in the second range whose inner product or generalized inner product with the first range is to be computed.  
  
 ` val`  
 An initial value to which the inner product or generalized inner product between the ranges is to be added.  
  
 *binary_op1*  
 The binary operation that replaces the inner product operation of sum applied to the element-wise products in the generalization of the inner product.  
  
 *binary_op2*  
 The binary operation that replaces the inner product element-wise operation of multiply in the generalization of the inner product.  
  
### Return Value  
 The first member function returns the sum of the element-wise products and adds to it the specified initial value. So for ranges of values *a*i and *b*i, it returns:  
  
 ` val` + ( *a*1 \* *b*1 ) + ( *a*2 \* *b*2 ) +  
  
 by iteratively replacing ` val` with ` val` + (\* *a*i \* \* *b*i ).  
  
 The second member function returns:  
  
 ` val` _ *Binary_op1* ( *a*1 \_ *Binary_op2* *b*1 ) \_ *Binary_op1* ( *a*2 \_ *Binary_op2* *b*2 ) \_ *Binary_op1*  
  
 by iteratively replacing ` val` with ` val` _ *Binary_op1* (\* *a*i \_ *Binary_op2* \* *b*i ).  
  
### Remarks  
 The initial value ensures that there will be a well-defined result when the range is empty, in which case ` val` is returned. The binary operations do not need to be associative or commutative. The range must be valid and the complexity is linear with the size of the range. The return type of the binary operator must be convertible to **Type** to ensure closure during the iteration.  
  
### Example  
  
```cpp  
// numeric_inner_prod.cpp  
// compile with: /EHsc  
#include <vector>  
#include <list>  
#include <numeric>  
#include <functional>  
#include <iostream>  
  
int main()  
{  
   using namespace std;  
  
   vector <int> v1, v2(7), v3(7);  
   vector <int>::iterator iter1, iter2, iter3;  
  
   int i;  
   for (i = 1; i <= 7; i++)  
   {  
      v1.push_back(i);  
   }  
  
   cout << "The original vector v1 is:\n ( " ;  
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)  
      cout << *iter1 << " ";  
   cout << ")." << endl;  
  
   list <int> l1, l2(7);  
   list <int>::iterator lIter1, lIter2;  
  
   int t;  
   for (t = 1; t <= 7; t++)  
   {  
      l1.push_back(t);  
   }  
  
   cout << "The original list l1 is:\n ( " ;  
   for (lIter1 = l1.begin(); lIter1 != l1.end(); lIter1++)  
      cout << *lIter1 << " ";  
   cout << ")." << endl;  
  
   // The first member function for the inner product  
   int inprod;  
   inprod = inner_product(v1.begin(), v1.end(), l1.begin(), 0);  
  
   cout << "The inner_product of the vector v1 and the list l1 is: "  
        << inprod << "." << endl;  
  
   // Constructing a vector of partial inner_products between v1 & l1  
   int j = 0, parinprod;  
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++) {  
      parinprod = inner_product(v1.begin(), iter1 + 1, l1.begin(), 0);  
      v2[j] = parinprod;  
      j++;  
   }  
  
   cout << "Vector of partial inner_products between v1 & l1 is:\n ( " ;  
   for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)  
      cout << *iter2 << " ";  
   cout << ")." << endl << endl;  
  
   // The second member function used to compute  
   // the product of the element-wise sums  
   int inprod2;  
   inprod2 = inner_product (v1.begin(), v1.end(),  
      l1.begin(), 1, multiplies<int>(), plus<int>());  
  
   cout << "The sum of the element-wise products of v1 and l1 is: "  
        << inprod2 << "." << endl;  
  
   // Constructing a vector of partial sums of element-wise products  
   int k = 0, parinprod2;  
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)  
   {  
      parinprod2 =  
         inner_product(v1.begin(), iter1 + 1, l1.begin(), 1,  
         multiplies<int>(), plus<int>());  
      v3[k] = parinprod2;  
      k++;  
   }  
  
   cout << "Vector of partial sums of element-wise products is:\n ( " ;  
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++)  
      cout << *iter3 << " ";  
   cout << ")." << endl << endl;  
}  
```  
  
##  <a name="iota"></a>  iota  
 Stores a starting value, beginning with the first element and filling with successive increments of that value ( ` value++`) in each of the elements in the interval `[ first,  last)`.  
  
```  
template <class ForwardIterator, class Type>  
void iota(ForwardIterator first, ForwardIterator last, Type value);
```  
  
### Parameters  
 ` first`  
 An input iterator that addresses the first element in the range to be filled.  
  
 ` last`  
 An input iterator that addresses the last element in the range to be filled.  
  
 ` value`  
 The starting value to store in the first element and to successively increment for subsequent elements.  
  
### Remarks  
  
### Example  
  The following example demonstrates some uses for the `iota` function by filling a [list](../standard-library/list.md) of integers and then filling a [vector](../standard-library/vector.md) with the `list` so that the [random_shuffle](../standard-library/algorithm-functions.md#random_shuffle) function can be used.  
  
```cpp  
// compile by using: cl /EHsc /nologo /W4 /MTd  
#include <algorithm>  
#include <numeric>  
#include <list>  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
int main(void)  
{  
    list <int> intList(10);  
    vector <list<int>::iterator> intVec(intList.size());  
  
    // Fill the list  
    iota(intList.begin(), intList.end(), 0);  
  
    // Fill the vector with the list so we can shuffle it  
    iota(intVec.begin(), intVec.end(), intList.begin());  
  
    random_shuffle(intVec.begin(), intVec.end());  
  
    // Output results  
    cout << "Contents of the integer list: " << endl;  
    for (auto i: intList) {  
        cout << i << ' ';  
    }  
    cout << endl << endl;  
  
    cout << "Contents of the integer list, shuffled by using a vector: " << endl;  
    for (auto i: intVec) {  
        cout << *i << ' ';  
    }  
    cout << endl;  
}  
```  
  
##  <a name="partial_sum"></a>  partial_sum  
 Computes a series of sums in an input range from the first element through the *i*th element and stores the result of each such sum in the *i*th element of a destination range or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.  
  
```  
template <class InputIterator, class OutIt>  
OutputIterator partial_sum(
    InputIterator first, 
    InputIterator last, 
    OutputIterator result);

template <class InputIterator, class OutIt, class Fn2>  
OutputIterator partial_sum(
    InputIterator first, 
    InputIterator last, 
    OutputIterator result, 
    BinaryOperation binary_op);
```  
  
### Parameters  
 ` first`  
 An input iterator addressing the first element in the range to be partially summed or combined according to a specified binary operation.  
  
 ` last`  
 An input iterator addressing the last element in the range to be partially summed or combined according to a specified binary operation that is one position beyond the final element actually included in the iterated accumulation.  
  
 `result`  
 An output iterator addressing the first element a destination range where the series of partial sums or the results of the specified operation is to be stored.  
  
 `binary_op`  
 The binary operation that is to be applied in the generalized operation replacing the operation of sum in the partial sum procedure.    
  
### Return Value  
 An output iterator addressing the end of the destination range: `result` + ( ` last` - ` first`),  
  
### Remarks  
 The output iterator `result` is allowed to be the same iterator as the input iterator ` first`, so that partial sums may be computed in place.  
  
 For a sequence of values *a*1, *a*2, *a*3,  in an input range, the first template function stores successive partial sums in the destination range, where the *i*th element is given by (  ( ( *a*1 + *a*2) + *a*3) *a*i).  
  
 For a sequence of values *a*1, *a*2, *a*3,  in an input range, the second template function stores successive partial sums in the destination range, where the ith element is given by (  ( ( *a*1`binary_op` *a*2 ) `binary_op` *a*3 ) *a*i).  
  
 The binary operation `binary_op` is not required to be either associative or commutative, because the order of operations applies is completely specified.  
  
### Example  
  
```cpp  
// numeric_partial_sum.cpp  
// compile with: /EHsc  
#include <vector>  
#include <list>  
#include <numeric>  
#include <functional>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;     
   vector<int> V1( 10 ), V2( 10 );  
   vector<int>::iterator VIter1, VIter2, VIterend, VIterend2;  
  
   list <int> L1;  
   list <int>::iterator LIter1, LIterend;  
  
   int t;  
   for ( t = 1 ; t <= 10 ; t++ )  
   {  
      L1.push_back( t );  
   }  
  
   cout << "The input list L1 is:\n ( " ;  
   for ( LIter1 = L1.begin( ) ; LIter1 != L1.end( ) ; LIter1++ )  
      cout << *LIter1 << " ";  
   cout << ")." << endl;  
  
   // The first member function for the partial sums of  
   // elements in a list output to a vector  
   VIterend = partial_sum ( L1.begin ( ) , L1.end ( ) ,   
      V1.begin ( ) );  
  
   cout << "The output vector containing the partial sums is:\n ( " ;  
   for ( VIter1 = V1.begin( ) ; VIter1 != VIterend ; VIter1++ )  
      cout << *VIter1 << " ";  
   cout << ")." << endl;  
  
   // The second member function used to compute  
   // the partial product of the elements in a list  
   VIterend2 = partial_sum ( L1.begin ( ) , L1.end ( ) , V2.begin ( ) ,   
      multiplies<int>( ) );  
  
   cout << "The output vector with the partial products is:\n ( " ;  
   for ( VIter2 = V2.begin( ) ; VIter2 != VIterend2 ; VIter2++ )  
      cout << *VIter2 << " ";  
   cout << ")." << endl;  
  
   // Computation of partial sums in place  
   LIterend = partial_sum ( L1.begin ( ) , L1.end ( ) , L1.begin ( ) );  
   cout << "The in place output partial_sum list L1 is:\n ( " ;  
   for ( LIter1 = L1.begin( ) ; LIter1 != LIterend ; LIter1++ )  
      cout << *LIter1 << " ";  
   cout << ")." << endl;  
}  
```  
  
## See Also  
 [\<numeric>](../standard-library/numeric.md)

