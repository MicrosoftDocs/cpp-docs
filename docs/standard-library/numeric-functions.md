---
title: "<numeric> functions"
description: "Describes the function templates provided by the <numeric>header in the C++ Standard library."
ms.date: "10/30/2019"
f1_keywords: ["numeric/std::accumulate", "numeric/std::adjacent_difference", "numeric/std::exclusive_scan", "numeric/std::gcd", "numeric/std::inclusive_scan", "numeric/std::inner_product", "numeric/std::iota", "numeric/std::lcm", "numeric/std::partial_sum", "numeric/std::reduce", "numeric/std::transform_exclusive_scan", "numeric/std::transform_inclusive_scan", "numeric/std::transform_reduce"]
ms.assetid: a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b
helpviewer_keywords: ["std::accumulate [C++]", "std::adjacent_difference [C++]", "std::exclusive_scan [C++]", "std::gcd [C++]", "std::inclusive_scan [C++]", "std::inner_product [C++]", "std::iota [C++]", "std::lcm [C++]", "std::partial_sum [C++]", "std::reduce [C++]", "std::transform_exclusive_scan [C++]", "std::transform_inclusive_scan [C++]", "std::transform_reduce [C++]"]
---
# `<numeric>` functions

## <a name="accumulate"></a> accumulate

Computes the sum of all the elements in a specified range, including some initial value, by computing successive partial sums. Or, computes the result of successive partial results of a specified binary operation.

```cpp
template <class InputIterator, class Type>
Type accumulate(
    InputIterator first,
    InputIterator last,
    Type init);

template <class InputIterator, class Type, class BinaryOperation>
Type accumulate(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op);
```

### Parameters

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

### Return value

The sum of *init* and all the elements in the specified range for the first template function, or, for the second template function, the result of applying the binary operation *binary_op* instead of the sum operation, to (*PartialResult, *in_iter*), where *PartialResult* is the result of previous applications of the operation and *in_iter* is an iterator pointing to the next element in the range.

### Remarks

The initial value ensures that there's a well-defined result when the range is empty, in which case *init* is returned. The binary operation doesn't need to be associative or commutative. The result is initialized to the initial value *init* and then *result* = *binary_op*(*result*, *in_iter*) is calculated iteratively through the range, where *in_iter* is an iterator pointing to each successive element in the range. The range must be valid, and the complexity is linear with the size of the range. The return type of the binary operator must be convertible to **Type** to ensure closure during the iteration.

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

## <a name="adjacent_difference"></a> adjacent_difference

Computes the successive differences between each element and its predecessor in an input range. Outputs the results to a destination range. Or, computes the result of a generalized procedure where the difference operation is replaced by another, specified binary operation.

```cpp
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

template <class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 adjacent_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);

template <class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation>
ForwardIterator2 adjacent_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.

*last*\
An input iterator addressing the last element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.

*result*\
An output iterator addressing the first element a destination range where the series of differences or the results of the specified operation is to be stored.

*binary_op*\
The binary operation to apply in the generalized operation, replacing the operation of subtraction in the differencing procedure.

### Return value

An output iterator addressing the end of the destination range: `result` + (`last` - `first`).

### Remarks

The output iterator *result* is allowed to be the same iterator as the input iterator *first*, so that `adjacent_difference` values may be computed in place.

For a sequence of values *a*1, *a*2, *a*3, in an input range, the first template function stores successive `adjacent_difference` values *a*1, *a*2 - *a*1, a3 - *a*2, in the destination range.

For a sequence of values *a*1, *a*2, *a*3, in an input range, the second template function stores successive `adjacent_difference` values *a*1, *a*2 *binary_op* *a*1, *a*3 *binary_op* *a*2, in the destination range.

The binary operation *binary_op* isn't required to be either associative or commutative, because the order of operations applied is specified.

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

## <a name="exclusive_scan"></a> exclusive_scan

Computes an exclusive prefix sum operation by using either `std::plus<>()` or a specified binary operator over a range, given an initial value. Writes the results to the range beginning at the specified destination. An *exclusive prefix* sum means the *n*th input element isn't included in the *n*th sum. Overloads that include an execution policy argument execute according to the specified policy.

```cpp
template<class InputIterator, class OutputIterator, class Type>
OutputIterator exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init);

template<class InputIterator, class OutputIterator, class Type, class BinaryOperation>
OutputIterator exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
ForwardIterator2 exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation>
ForwardIterator2 exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init,
    BinaryOperation binary_op);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

### Return value

An output iterator addressing the end of the destination range: *result* + (*last* - *first*).

## <a name="gcd"></a> gcd

Computes the greatest common divisor of the integers m and n.

```cpp
template <class M, class N>
constexpr common_type_t<M,N> gcd(M m, N n);
```

### Parameters

*m*, *n*\
Values of integral type.

### Return value

Returns the greatest common divisor of the absolute values of *m* and *n*, or zero if both *m* and *n* are zero. The results are undefined if the absolute values of *m* or *n* aren't representable as values of type `common_type_t<M,N>`.

## <a name="inclusive_scan"></a> inclusive_scan

Computes an inclusive prefix sum operation by using either `std::plus<>()` or a specified binary operator over a range, given an initial value. Writes the results to the range beginning at the specified destination. An *inclusive prefix* sum means the *n*th input element is included in the *n*th sum. Overloads that include an execution policy argument execute according to the specified policy.

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result);

template<class InputIterator, class OutputIterator, class BinaryOperation>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op);

template<class InputIterator, class OutputIterator, class BinaryOperation, class Type>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation, class Type>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    Type init);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

### Return value

An output iterator addressing the end of the destination range: *result* + (*last* - *first*).

## <a name="inner_product"></a> inner_product

Computes the sum of the element-wise product of two ranges and adds it to a specified initial value or computes the result of a generalized procedure where the sum and product binary operations are replaced by other specified binary operations.

```cpp
template <class InputIterator1, class InputIterator2, class Type>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             init);

template <class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);
```

### Parameters

*first1*\
An input iterator addressing the first element in the first range whose inner product or generalized inner product with the second range is to be computed.

*last1*\
An input iterator addressing the last element in the first range whose inner product or generalized inner product with the second range is to be computed.

*first2*\
An input iterator addressing the first element in the second range whose inner product or generalized inner product with the first range is to be computed.

*init*\
An initial value to which the inner product or generalized inner product between the ranges is to be added.

*binary_op1*\
The binary operation that replaces the inner product operation of sum applied to the element-wise products in the generalization of the inner product.

*binary_op2*\
The binary operation that replaces the inner product element-wise operation of multiply in the generalization of the inner product.

### Return value

The first member function returns the sum of the element-wise products and adds to it the specified initial value. So for ranges of values *a*i and *b*i, it returns:

*init* + (*a*1 \* *b*1) + (*a*2 \* *b*2) + ... + (*a*n \* *b*n)

by iteratively replacing *init* with *init* + (*a*i \* *b*i).

The second member function returns:

*init* *binary_op1* (*a*1 *binary_op2* *b*1) *binary_op1* (*a*2 *binary_op2* *b*2) *binary_op1* ... *binary_op1* (*a*n *binary_op2* *b*n)

by iteratively replacing *init* with *init* *binary_op1* (*a*i *binary_op2* *b*i).

### Remarks

The initial value ensures that there's a well-defined result when the range is empty. In that case, *init* is returned. The binary operations don't need to be associative or commutative. The range must be valid, and the complexity is linear with the size of the range. The return type of the binary operator must be convertible to **Type** to ensure closure during the iteration.

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

## <a name="iota"></a> iota

Stores a starting value, beginning with the first element and filling with successive increments of that value (`value++`) in each of the elements in the interval `[first,  last)`.

```cpp
template <class ForwardIterator, class Type>
void iota(ForwardIterator first, ForwardIterator last, Type value);
```

### Parameters

*first*\
An input iterator that addresses the first element in the range to be filled.

*last*\
An input iterator that addresses the last element in the range to be filled.

*value*\
The starting value to store in the first element and to successively increment for later elements.

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

## <a name="lcm"></a> lcm

```cpp
template <class M, class N>
constexpr common_type_t<M,N> lcm(M m, N n);
```

## <a name="partial_sum"></a> partial_sum

Computes a series of sums in an input range from the first element through the *n*th element and stores the result of each such sum in the *n*th element of a destination range. Or, computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.

```cpp
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

*first*\
An input iterator addressing the first element in the range to be partially summed or combined according to a specified binary operation.

*last*\
An input iterator addressing the last element in the range to be partially summed or combined according to a specified binary operation that is one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element of a destination range to store the series of partial sums, or the successive results of the specified binary operation.

*binary_op*\
The binary operation to apply in the generalized operation, replacing the operation of sum in the partial sum procedure.

### Return value

An output iterator addressing the end of the destination range: *result* + (*last* - *first*).

### Remarks

The output iterator *result* is allowed to be the same iterator as the input iterator *first*, so that partial sums may be computed in place.

For a sequence of values *a*1, *a*2, ... *a*x, in an input range, the first template function stores successive partial sums in the destination range. The *n*th element is given by (*a*1 + *a*2 + *a*3 + ... + *a*n).

For a sequence of values *a*1, *a*2, *a*3, in an input range, the second template function stores successive partial results in the destination range. The *n*th element is given by ((...((*a*1 *binary_op* *a*2) *binary_op* *a*3) *binary_op* ... ) *binary_op* *a*n).

The binary operation *binary_op* isn't required to be either associative or commutative, because the order of operations applied is specified.

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

## <a name="reduce"></a> reduce

Reduces all the elements in a specified range, possibly including some initial value, by computing sums in an arbitrary and possibly permuted order. Or, reduces by computing the results of a specified binary operation. Overloads that include an execution policy argument execute according to the specified policy.

```cpp
template<class InputIterator>
typename iterator_traits<InputIterator>::value_type reduce(
    InputIterator first,
    InputIterator last);

template<class InputIterator, class Type>
Type reduce(
    InputIterator first,
    InputIterator last,
    Type init);

template<class InputIterator, class Type, class BinaryOperation>
Type reduce(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator>
typename iterator_traits<ForwardIterator>::value_type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Type>
Type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init);

template<class ExecutionPolicy, class ForwardIterator, class Type, class BinaryOperation>
Type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init,
    BinaryOperation binary_op);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

### Return value

The result of applying *binary_op* or `std::plus<>()` to *init* and all the elements in the specified range to (*PartialResult, *in_iter*), where *PartialResult* is the result of previous applications of the operation, and *in_iter* is an iterator pointing to some element in the range. In overloads that don't specify *init*, the *init* value used is equivalent to `typename iterator_traits<InputIterator>::value_type{}`.

### Remarks

`reduce` behavior is non-deterministic unless *binary_op* is associative and commutative. The behavior is undefined if *binary_op* modifies any element, or invalidates any iterator in the interval \[*first*, *last*], inclusive.

## <a name="transform_exclusive_scan"></a> transform_exclusive_scan

Transforms the elements of a range with a specified unary operator, then computes an exclusive prefix sum operation by using either `std::plus<>()` or a specified binary operator over the range, given an initial value. Writes the results to the range beginning at the specified destination. An *exclusive prefix* sum means the *n*th input element isn't included in the *n*th sum. Overloads that include an execution policy argument execute according to the specified policy. The summation may be performed in an arbitrary order.

```cpp
template<class InputIterator, class OutputIterator, class Type, class BinaryOperation, class UnaryOperation>
OutputIterator transform_exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

*unary_op*\
The unary operation to apply to each element in the specified range.

## <a name="transform_inclusive_scan"></a> transform_inclusive_scan

Transforms the elements of a range with a specified unary operator, then computes an inclusive prefix sum operation by using either `std::plus<>()` or a specified binary operator over the range, given an initial value. Writes the results to the range beginning at the specified destination. An *inclusive prefix* sum means the *n*th input element is included in the *n*th sum. Overloads that include an execution policy argument execute according to the specified policy. The summation may be performed in an arbitrary order.

```cpp
template<class InputIterator, class OutputIterator, class BinaryOperation, class UnaryOperation>
OutputIterator transform_inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class InputIterator, class OutputIterator, class BinaryOperation, class UnaryOperation, class Type>
OutputIterator transform_inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    UnaryOperation unary_op,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryOperation, class UnaryOperation, class Type>
ForwardIterator2 transform_inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    UnaryOperation unary_op,
    Type init);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

*unary_op*\
The unary operation to apply to each element in the specified range.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

## <a name="transform_reduce"></a> transform_reduce

Transforms a range of elements, then applies a functor that reduces the transformed elements in arbitrary order. Effectively, a `transform` followed by a `reduce`.

```cpp
template<class InputIterator1, class InputIterator2, class Type>
Type transform_reduce(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    Type init);

template<class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type transform_reduce(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    Type init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);

template<class InputIterator, class Type, class BinaryOperation, class UnaryOperation>
Type transform_reduce(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    Type init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);

template<class ExecutionPolicy, class ForwardIterator, class Type, class BinaryOperation, class UnaryOperation>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);
```

### Parameters

*exec*\
An execution policy.

*first*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op*.

*first1*\
An input iterator addressing the first element in the range to either sum or combine by using *binary_op1*.

*last*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op*, that's one position beyond the final element actually included in the iterated accumulation.

*last1*\
An input iterator addressing the last element in the range to either sum or combine by using *binary_op1*, that's one position beyond the final element actually included in the iterated accumulation.

*result*\
An output iterator addressing the first element a destination range where the series of sums or the results of the specified operation is to be stored.

*init*\
An initial value to which each element is in turn added or combined by using *binary_op*.

*binary_op*\
The binary operation to apply to each element in the specified range and the result of its previous applications.

*unary_op*\
The unary operation to apply to each element in the specified range.

### Return value

The transformed then reduced result.
