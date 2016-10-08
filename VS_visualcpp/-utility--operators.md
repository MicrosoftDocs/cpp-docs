---
title: "&lt;utility&gt; operators"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a6617109-2cec-4a69-948f-6c87116eda5f
caps.latest.revision: 9
---
# &lt;utility&gt; operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests if the pair object on the left side of the operator is not equal to the pair object on the right side.  
  
```  
template<Class Type>    constexpr bool operator!=(       const Type&  _Left ,       const Type&  _Right ); template<class Type1, class Type2>    constexpr bool operator!=(       const pair<Type1, Type2>&  _Left ,       const pair<Type1, Type2>&  _Right    );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type **pair.**  
  
 `_Right`  
 An object of type `pair`.  
  
### Return Value  
 **true** if the pairs are not equal; **false** if the pairs are equal.  
  
### Remarks  
 One pair is equal to another pair if each of their respective elements is equal. Two pairs are unequal if either the first or the second element of one is not equal to the corresponding element of the other pair.  
  
### Example  
  
```  
// utility_op_ne.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3;  
  
   p1 = make_pair ( 10, 1.11e-1 );  
   p2 = make_pair ( 1000, 1.11e-3 );  
   p3 = make_pair ( 10, 1.11e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl << endl;  
  
   if ( p1 != p2 )  
      cout << "The pairs p1 and p2 are not equal." << endl;  
   else  
      cout << "The pairs p1 and p2 are equal." << endl;  
  
   if ( p1 != p3 )  
      cout << "The pairs p1 and p3 are not equal." << endl;  
   else  
      cout << "The pairs p1 and p3 are equal." << endl;  
}  
```  
  
  **The pair p1 is: ( 10, 0.111 ).**  
**The pair p2 is: ( 1000, 0.00111 ).**  
**The pair p3 is: ( 10, 0.111 ).**  
**The pairs p1 and p2 are not equal.**  
**The pairs p1 and p3 are equal.**    
##  <a name="operator_eq_eq"></a>  operator==  
 Tests if the pair object on the left side of the operator is equal to the pair object on the right side.  
  
```  
template<class Type1, class Type2>    constexpr bool operator==(       const pair<Type1, Type2>&  _Left ,       const pair<Type1, Type2>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type **pair.**  
  
 `_Right`  
 An object of type `pair`.  
  
### Return Value  
 **true** if the pairs are equal; **false** if the `pair`s are not equal.  
  
### Remarks  
 One pair is equal to another pair if each of their respective elements is equal. The function returns `_Left`. **first** == `_Right`. **first** && `_Left`. **second** == `_Right`. **second**. Two pairs are unequal if either the first or the second element of one is not equal to the corresponding element of the other pair.  
  
### Example  
  
```  
// utility_op_eq.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3;  
  
   p1 = make_pair ( 10, 1.11e-1 );  
   p2 = make_pair ( 1000, 1.11e-3 );  
   p3 = make_pair ( 10, 1.11e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl << endl;  
  
   if ( p1 == p2 )  
      cout << "The pairs p1 and p2 are equal." << endl;  
   else  
      cout << "The pairs p1 and p2 are not equal." << endl;  
  
   if ( p1 == p3 )  
      cout << "The pairs p1 and p3 are equal." << endl;  
   else  
      cout << "The pairs p1 and p3 are not equal." << endl;  
}  
```  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Tests if the pair object on the left side of the operator is less than the pair object on the right side.  
  
```  
template<class Type1, class Type2>    constexpr bool operator<(       const pair<Type1, Type2>&  _Left ,       const pair<Type1, Type2>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `pair` on the left side of the operator.  
  
 `_Right`  
 An object of type `pair` on the right side of the operator.  
  
### Return Value  
 **true** if the `pair` on the left side of the operator is strictly less than the `pair` on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The `_Left``pair` object is said to be strictly less than the `_Right``pair` object if `_Left` is less than and not equal `_Right.`  
  
 In a comparison of pairs, the values' first elements of the two pairs have the highest priority. If they differ, then the result of their comparison is taken as the result of the comparison of the pair. If the values of the first elements are not different, then the values of the second elements are compared and the result of their comparison is taken as the result of the comparison of the pair.  
  
### Example  
  
```  
// utility_op_lt.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3;  
  
   p1 = make_pair ( 10, 2.22e-1 );  
   p2 = make_pair ( 100, 1.11e-1 );  
   p3 = make_pair ( 10, 1.11e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl << endl;  
  
   if ( p1 < p2 )  
      cout << "The pair p1 is less than the pair p2." << endl;  
   else  
      cout << "The pair p1 is not less than the pair p2." << endl;  
  
   if ( p1 < p3 )  
      cout << "The pair p1 is less than the pair p3." << endl;  
   else  
      cout << "The pair p1 is not less than the pair p3." << endl;  
}  
```  
  
  **The pair p1 is: ( 10, 0.222 ).**  
**The pair p2 is: ( 100, 0.111 ).**  
**The pair p3 is: ( 10, 0.111 ).**  
**The pair p1 is less than the pair p2.**  
**The pair p1 is not less than the pair p3.**    
##  <a name="operator_lt__eq"></a>  operator&lt;=  
 Tests if the pair object on the left side of the operator is less than or equal to the pair object on the right side.  
  
```  
template<Class Type>    constexpr bool operator<=(       const Type&  _Left,       const Type&  _Right ); template<class Type1, class Type2>    constexpr bool operator<=(       const pair<Type1, Type2>&  _Left,       const pair<Type1, Type2>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `pair` on the left side of the operator.  
  
 `_Right`  
 An object of type `pair` on the right side of the operator.  
  
### Return Value  
 **true** if the `pair` on the left side of the operator is less than or equal to the `pair` on the right side of the operator; otherwise **false**.  
  
### Remarks  
 In a comparison of pairs, the values' first elements of the two pairs have the highest priority. If they differ, then the result of their comparison is taken as the result of the comparison of the pair. If the values of the first elements are not different, then the values of the second elements are compared and the result of their comparison is taken as the result of the comparison of the pair.  
  
### Example  
  
```  
// utility_op_le.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3, p4;  
  
   p1 = make_pair ( 10, 2.22e-1 );  
   p2 = make_pair ( 100, 1.11e-1 );  
   p3 = make_pair ( 10, 1.11e-1 );  
   p4 = make_pair ( 10, 2.22e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl;  
   cout << "The pair p4 is: ( " << p4.first << ", "   
        << p4.second << " )." << endl << endl;  
  
   if ( p1 <= p2 )  
      cout << "The pair p1 is less than or equal to the pair p2." << endl;  
   else  
      cout << "The pair p1 is greater than the pair p2." << endl;  
  
   if ( p1 <= p3 )  
      cout << "The pair p1 is less than or equal to the pair p3." << endl;  
   else  
      cout << "The pair p1 is greater than the pair p3." << endl;  
  
   if ( p1 <= p4 )  
      cout << "The pair p1 is less than or equal to the pair p4." << endl;  
   else  
      cout << "The pair p1 is greater than the pair p4." << endl;  
}  
```  
  
  **The pair p1 is: ( 10, 0.222 ).**  
**The pair p2 is: ( 100, 0.111 ).**  
**The pair p3 is: ( 10, 0.111 ).**  
**The pair p4 is: ( 10, 0.222 ).**  
**The pair p1 is less than or equal to the pair p2.**  
**The pair p1 is greater than the pair p3.**  
**The pair p1 is less than or equal to the pair p4.**    
##  <a name="operator_gt_"></a>  operator&gt;  
 Tests if the pair object on the left side of the operator is greater than the pair object on the right side.  
  
```  
template<Class Type>    constexpr bool operator>(       const Type&  _Left,       const Type&  _Right ); template<class Type1, class Type2>    constexpr bool operator>(       const pair<Type1, Type2>&  _Left,       const pair<Type1, Type2>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `pair` on the left side of the operator.  
  
 `_Right`  
 An object of type `pair` on the right side of the operator.  
  
### Return Value  
 **true** if the `pair` on the left side of the operator is strictly greater than the `pair` on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The `_Left``pair` object is said to be strictly greater than the `_Right``pair` object if `_Left` is greater than and not equal `_Right.`  
  
 In a comparison of pairs, the values' first elements of the two pairs have the highest priority. If they differ, then the result of their comparison is taken as the result of the comparison of the pair. If the values of the first elements are not different, then the values of the second elements are compared and the result of their comparison is taken as the result of the comparison of the pair.  
  
### Example  
  
```  
// utility_op_gt.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3, p4;  
  
   p1 = make_pair ( 10, 2.22e-1 );  
   p2 = make_pair ( 100, 1.11e-1 );  
   p3 = make_pair ( 10, 1.11e-1 );  
   p4 = make_pair ( 10, 2.22e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl;  
   cout << "The pair p4 is: ( " << p4.first << ", "   
        << p4.second << " )." << endl << endl;  
  
   if ( p1 > p2 )  
      cout << "The pair p1 is greater than the pair p2." << endl;  
   else  
      cout << "The pair p1 is not greater than the pair p2." << endl;  
  
   if ( p1 > p3 )  
      cout << "The pair p1 is greater than the pair p3." << endl;  
   else  
      cout << "The pair p1 is not greater than the pair p3." << endl;  
  
   if ( p1 > p4 )  
      cout << "The pair p1 is greater than the pair p4." << endl;  
   else  
      cout << "The pair p1 is not greater than the pair p4." << endl;  
}  
```  
  
  **The pair p1 is: ( 10, 0.222 ).**  
**The pair p2 is: ( 100, 0.111 ).**  
**The pair p3 is: ( 10, 0.111 ).**  
**The pair p4 is: ( 10, 0.222 ).**  
**The pair p1 is not greater than the pair p2.**  
**The pair p1 is greater than the pair p3.**  
**The pair p1 is not greater than the pair p4.**    
##  <a name="operator_gt__eq"></a>  operator&gt;=  
 Tests if the pair object on the left side of the operator is greater than or equal to the pair object on the right side.  
  
```  
template<Class Type>    constexpr bool operator>=(       const Type&  _Left,       const Type&  _Right ); template<class Type1, class Type2>    constexpr bool operator>=(       const pair<Type1, Type2>&  _Left,       const pair<Type1, Type2>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `pair` on the left side of the operator.  
  
 `_Right`  
 An object of type `pair` on the right side of the operator.  
  
### Return Value  
 **true** if the `pair` on the left side of the operator is greater than or equal to the `pair` on the right side of the operator; otherwise **false**.  
  
### Remarks  
 In a comparison of pairs, the values' first elements of the two pairs have the highest priority. If they differ, then the result of their comparison is taken as the result of the comparison of the pair. If the values of the first elements are not different, then the values of the second elements are compared and the result of their comparison is taken as the result of the comparison of the pair.  
  
### Example  
  
```  
// utility_op_ge.cpp  
// compile with: /EHsc  
#include <utility>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   pair <int, double> p1, p2, p3, p4;  
  
   p1 = make_pair ( 10, 2.22e-1 );  
   p2 = make_pair ( 100, 1.11e-1 );  
   p3 = make_pair ( 10, 1.11e-1 );  
   p4 = make_pair ( 10, 2.22e-1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl;  
   cout << "The pair p4 is: ( " << p4.first << ", "   
        << p4.second << " )." << endl << endl;  
  
   if ( p1 >= p2 )  
      cout << "Pair p1 is greater than or equal to pair p2." << endl;  
   else  
      cout << "The pair p1 is less than the pair p2." << endl;  
  
   if ( p1 >= p3 )  
      cout << "Pair p1 is greater than or equal to pair p3." << endl;  
   else  
      cout << "The pair p1 is less than the pair p3." << endl;  
  
   if ( p1 >= p4 )  
      cout << "Pair p1 is greater than or equal to pair p4." << endl;  
   else  
      cout << "The pair p1 is less than the pair p4." << endl;  
}  
```  
  
  **The pair p1 is: ( 10, 0.222 ).**  
**The pair p2 is: ( 100, 0.111 ).**  
**The pair p3 is: ( 10, 0.111 ).**  
**The pair p4 is: ( 10, 0.222 ).**  
**The pair p1 is less than the pair p2.**  
**Pair p1 is greater than or equal to pair p3.**  
**Pair p1 is greater than or equal to pair p4.**    
## See Also  
 [<utility\>](../VS_visualcpp/-utility-.md)