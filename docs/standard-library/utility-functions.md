---
title: "&lt;utility&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b1df38cd-3a59-4098-9c81-83342eb719a4
caps.latest.revision: 7
manager: "ghogen"
---
# &lt;utility&gt; functions
||||  
|-|-|-|  
|[exchange](#exchange)|[forward](#forward)|[get Function &lt;utility&gt;](#get)|  
|[make_pair](#make_pair)|[move](#move)|[swap](#swap)|  
  
##  <a name="exchange"></a>  exchange  
 **(C++14)** Assigns a new value to an object and returns its old value.  
  
```cpp
template <class T, class Other = T>
T exchange(T& val, Other&& new_val)
```  
  
### Parameters  
 `val`  
 The object that will receive the value of new_val.  
  
 `new_val`  
 The object whose value is copied or moved into val.  
  
### Remarks  
 For complex types, `exchange` avoids copying the old value when a move constructor is available, avoids copying the new value if it’s a temporary object or is moved, and accepts any type as the new value, using any available converting assignment operator. The exchange function is different from [std::swap](../standard-library/algorithm-functions.md#swap) in that the left argument is not moved or copied to the right argument.  
  
### Example  
  The following example shows how to use `exchange`. In the real world, `exchange` is most useful with large objects that are expensive to copy:  
  
```  
#include <utility>  
#include <iostream>  
  
using namespace std;  
  
struct C  
{  
int i;  
//...  
};  
int main()  
{     
// Use brace initialization   
C c1{ 1 };  
C c2{ 2 };  
C result = exchange(c1, c2);  
cout << "The old value of c1 is: " << result.i << endl;  
cout << "The new value of c1 after exchange is: " << c1.i << endl;  
  
return 0;  
}  
/* Output:  
The old value of c1 is: 1  
The new value of c1 after exchange is: 2  
*/  
```  
  
##  <a name="forward"></a>  forward  
 Conditionally casts its argument to an rvalue reference if the argument is an rvalue or rvalue reference. This restores the rvalue-ness of an argument to the forwarding function in support of perfect forwarding.  
  
```
template <class Type>    // accepts lvalues
constexpr Type&& forward(typename remove_reference<Type>::type& Arg) noexcept

template <class Type>    // accepts everything else
constexpr Type&& forward(typename remove_reference<Type>::type&& Arg) noexcept
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of the value passed in `Arg`, which might be different than the type of `Arg`. Typically determined by a template argument of the forwarding function.|  
|`Arg`|The argument to cast.|  
  
### Return Value  
 Returns an rvalue reference to `Arg` if the value passed in `Arg` was originally an rvalue or a reference to an rvalue; otherwise, returns `Arg` without modifying its type.  
  
### Remarks  
 You must specify an explicit template argument to call `forward`.  
  
 `forward` does not forward its argument. Instead, by conditionally casting its argument to an rvalue reference if it was originally an rvalue or rvalue reference, `forward` enables the compiler to perform overload resolution with knowledge of the forwarded argument's original type. The apparent type of an argument to a forwarding function might be different than its original type—for example, when an rvalue is used as an argument to a function and is bound to a parameter name; having a name makes it an lvalue, regardless of whether the value actually exists as an rvalue— `forward` restores the rvalue-ness of the argument.  
  
 Restoring the rvalue-ness of an argument's original value in order to perform overload resolution is known as *perfect forwarding*. Perfect forwarding enables a template function to accept an argument of either reference type and to restore its rvalue-ness when it's necessary for correct overload resolution. By using perfect forwarding, you can preserve move semantics for rvalues and avoid having to provide overloads for functions that vary only by the reference type of their arguments.  
  
##  <a name="get"></a>  get  
 Gets an element from a `pair` object by index position, or by type.  
  
```
// get reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr tuple_element_t<Index, pair<T1, T2>>&
get(pair<T1, T2>& Pr) noexcept;

// get reference to element T1 in pair Pr
template <class T1, class T2>
constexpr T1& get(pair<T1, T2>& Pr) noexcept;

// get reference to element T2 in pair Pr
template <class T2, class T1>
constexpr T2& get(pair<T1, T2>& Pr) noexcept;

// get const reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr const tuple_element_t<Index, pair<T1, T2>>&
get(const pair<T1, T2>& Pr) noexcept;

// get const reference to element T1 in pair Pr
template <class T1, class T2>
constexpr const T1& get(const pair<T1, T2>& Pr) noexcept;

// get const reference to element T2 in pair Pr
template <class T2, class T1>
constexpr const T2& get(const pair<T1, T2>& Pr) noexcept;

// get rvalue reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr tuple_element_t<Index, pair<T1, T2>>&&
get(pair<T1, T2>&& Pr) noexcept;

// get rvalue reference to element T1 in pair Pr
template <class T1, class T2>
constexpr T1&& get(pair<T1, T2>&& Pr) noexcept;

// get rvalue reference to element T2 in pair Pr
template <class T2, class T1>
constexpr T2&& get(pair<T1, T2>&& Pr) noexcept;
```  
  
### Parameters  
 `Index`  
 The 0-based index of the designated element.  
  
 `T1`  
 The type of the first pair element.  
  
 `T2`  
 The type of the second pair element.  
  
 `pr`  
 The pair to select from.  
  
### Remarks  
 The template functions each return a reference to an element of its `pair` argument.  
  
 For the indexed overloads, if the value of `Index` is 0 the functions return `pr.first` and if the value of `Index` is 1 the functions return `pr.second`. The type `RI` is the type of the returned element.  
  
 For the overloads that do not have an Index parameter, the element to return is deduced by the type argument. Calling `get<T>(Tuple)` will produce a compiler error if `pr` contains more or less than one element of type T.  
  
### Example  
  
```cpp  
#include <utility>  
#include <iostream>   
using namespace std;  
int main()
{

    typedef pair<int, double> MyPair;

    MyPair c0(9, 3.14);

    // get elements by index  
    cout << " " << get<0>(c0);
    cout << " " << get<1>(c0) << endl;

    // get elements by type (C++14)  
    MyPair c1(1, 0.27);
    cout << " " << get<int>(c1);
    cout << " " << get<double>(c1) << endl;

    /*
    Output:
    9 3.14
    1 0.27
    */

}
```  
  
##  <a name="make_pair"></a>  make_pair  
 A template function that you can use to construct objects of type `pair`, where the component types are automatically chosen based on the data types that are passed as parameters.  
  
```
template <class T, class U>
pair<T, U> make_pair(T& Val1, U& Val2);

template <class T, class U>
pair<T, U> make_pair(T& Val1, U&& Val2);

template <class T, class U>
pair<T, U> make_pair(T&& Val1, U& Val2);

template <class T, class U>
pair<T, U> make_pair(T&& Val1, U&& Val2);
```  
  
### Parameters  
 `Val1`  
 Value that initializes the first element of `pair`.  
  
 `Val2`  
 Value that initializes the second element of `pair`.  
  
### Return Value  
 The pair object that's constructed: `pair`< `T`, `U`>( `Val1`, `Val2`).  
  
### Remarks  
 `make_pair` converts object of type [reference_wrapper Class](../standard-library/reference-wrapper-class.md) to reference types and converts decaying arrays and functions to pointers.  
  
 In the returned `pair` object, `T` is determined as follows:  
  
-   If the input type `T` is `reference_wrapper<X>`, the returned type `T` is `X&`.  
  
-   Otherwise, the returned type `T` is `decay<T>::type`. If [decay Class](../standard-library/decay-class.md) is not supported, the returned type `T` is the same as the input type `T`.  
  
 The returned type `U` is similarly determined from the input type `U`.  
  
 One advantage of `make_pair` is that the types of objects that are being stored are determined automatically by the compiler and do not have to be explicitly specified. Don't use explicit template arguments such as `make_pair<int, int>(1, 2)` when you use `make_pair` because it is unnecessarily verbose and adds complex rvalue reference problems that might cause compilation failure. For this example, the correct syntax would be `make_pair(1, 2)`  
  
 The `make_pair` helper function also makes it possible to pass two values to a function that requires a pair as an input parameter.  
  
### Example  
  For an example about how to use the helper function `make_pair` to declare and initialize a pair, see [pair Structure](../standard-library/pair-structure.md).  
  
##  <a name="move"></a>  move  
 Unconditionally casts its argument to an rvalue reference, and thereby signals that it can be moved if its type is move-enabled.  
  
```
template <class Type>
constexpr typename remove_reference<Type>::type&& move(Type&& Arg) noexcept;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|A type deduced from the type of the argument passed in `Arg`, together with the reference collapsing rules.|  
|`Arg`|The argument to cast. Although the type of `Arg` appears to be specified as an rvalue reference, `move` also accepts lvalue arguments because lvalue references can bind to rvalue references.|  
  
### Return Value  
 `Arg` as an rvalue reference, whether or not its type is a reference type.  
  
### Remarks  
 The template argument `Type` is not intended to be specified explicitly, but to be deduced from the type of the value passed in `Arg`. The type of `Type` is further adjusted according to the reference collapsing rules.  
  
 `move` does not move its argument. Instead, by unconditionally casting its argument—which might be an lvalue—to an rvalue reference, it enables the compiler to subsequently move, rather than copy, the value passed in `Arg` if its type is move-enabled. If its type is not move-enabled, it is copied instead.  
  
 If the value passed in `Arg` is an lvalue—that is, it has a name or its address can be taken—it's invalidated when the move occurs. Do not refer to the value passed in `Arg` by its name or address after it's been moved.  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two [pair Structure](../standard-library/pair-structure.md) objects.  
  
```
template <class T, class U>  
void swap(pair<T, U>& left, pair<T, U>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `pair`.|  
|`right`|An object of type `pair`.|  
  
### Remarks  
 One advantage of `swap` is that the types of objects that are being stored are determined automatically by the compiler and do not have to be explicitly specified. Don't use explicit template arguments such as `swap<int, int>(1, 2)` when you use `swap` because it is unnecessarily verbose and adds complex rvalue reference problems that might cause compilation failure.  
  
## See Also  
 [\<utility>](../standard-library/utility.md)



