---
title: "&lt;set&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b4256ebc-c449-4688-95db-fced42d20d4d
caps.latest.revision: 8
manager: "ghogen"
---
# &lt;set&gt; operators
||||  
|-|-|-|  
|[operator!= (set)](#operator_neq)|[operator&gt; (set)](#operator_gt_)|[operator&gt;= (set)](#operator_gt__eq)|  
|[operator&lt; (set)](#operator_lt_)|[operator&lt;= (set)](#operator_lt__eq)|[operator== (set)](#operator_eq_eq)|  
|[operator!= (multiset)](#operator_neq_multiset)|[operator&gt; (multiset)](#operator_gt_multiset)|[operator&gt;= (multiset)](#operator_gt__eq_multiset)|  
|[operator&lt; (multiset)](#operator_lt_multiset)|[operator&lt;= (multiset)](#operator_lt__eq_multiset)|[operator== (multiset)](#operator_eq_eq_multiset)|  
  
##  <a name="operator_neq"></a>  operator!= (set)  
 Tests if the set object on the left side of the operator is not equal to the set object on the right side.  
  
```
bool operator!=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the sets are not equal; **false** if sets are equal.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison between their elements. Two sets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
### Example  
  
```cpp  
// set_op_ne.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 != s2 )  
      cout << "The sets s1 and s2 are not equal." << endl;  
   else  
      cout << "The sets s1 and s2 are equal." << endl;  
  
   if ( s1 != s3 )  
      cout << "The sets s1 and s3 are not equal." << endl;  
   else  
      cout << "The sets s1 and s3 are equal." << endl;  
}  
\* Output:   
The sets s1 and s2 are not equal.  
The sets s1 and s3 are equal.  
*\  
```  
  
##  <a name="operator_lt_"></a>  operator&lt; (set)  
 Tests if the set object on the left side of the operator is less than the set object on the right side.  
  
```
bool operator<(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the set on the left side of the operator is strictly less than the set on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison of their elements. The less-than relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// set_op_lt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 < s2 )  
      cout << "The set s1 is less than the set s2." << endl;  
   else  
      cout << "The set s1 is not less than the set s2." << endl;  
  
   if ( s1 < s3 )  
      cout << "The set s1 is less than the set s3." << endl;  
   else  
      cout << "The set s1 is not less than the set s3." << endl;  
}  
\* Output:   
The set s1 is less than the set s2.  
The set s1 is not less than the set s3.  
*\  
```  
  
##  <a name="operator_lt__eq"></a>  operator&lt;= (set)  
 Tests if the set object on the left side of the operator is less than or equal to the set object on the right side.  
  
```
bool operator!<=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the set on the left side of the operator is less than or equal to the set on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// set_op_le.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 <= s2 )  
      cout << "Set s1 is less than or equal to the set s2." << endl;  
   else  
      cout << "The set s1 is greater than the set s2." << endl;  
  
   if ( s1 <= s3 )  
      cout << "Set s1 is less than or equal to the set s3." << endl;  
   else  
      cout << "The set s1 is greater than the set s3." << endl;  
  
   if ( s1 <= s4 )  
      cout << "Set s1 is less than or equal to the set s4." << endl;  
   else  
      cout << "The set s1 is greater than the set s4." << endl;  
}  
\* Output:   
Set s1 is less than or equal to the set s2.  
The set s1 is greater than the set s3.  
Set s1 is less than or equal to the set s4.  
*\  
```  
  
##  <a name="operator_eq_eq"></a>  operator== (set)  
 Tests if the set object on the left side of the operator is equal to the set object on the right side.  
  
```
bool operator!==(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the set on the left side of the operator is equal to the set on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison of their elements. Two sets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
### Example  
  
```cpp  
// set_op_eq.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 == s2 )  
      cout << "The sets s1 and s2 are equal." << endl;  
   else  
      cout << "The sets s1 and s2 are not equal." << endl;  
  
   if ( s1 == s3 )  
      cout << "The sets s1 and s3 are equal." << endl;  
   else  
      cout << "The sets s1 and s3 are not equal." << endl;  
}  
\* Output:   
The sets s1 and s2 are not equal.  
The sets s1 and s3 are equal.  
*\  
```  
  
##  <a name="operator_gt_"></a>  operator&gt; (set)  
 Tests if the set object on the left side of the operator is greater than the set object on the right side.  
  
```
bool operator>(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the set on the left side of the operator is greater than the set on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison of their elements. The greater-than relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// set_op_gt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 > s2 )  
      cout << "The set s1 is greater than the set s2." << endl;  
   else  
      cout << "The set s1 is not greater than the set s2." << endl;  
  
   if ( s1 > s3 )  
      cout << "The set s1 is greater than the set s3." << endl;  
   else  
      cout << "The set s1 is not greater than the set s3." << endl;  
}  
\* Output:   
The set s1 is not greater than the set s2.  
The set s1 is greater than the set s3.  
*\  
```  
  
##  <a name="operator_gt__eq"></a>  operator&gt;= (set)  
 Tests if the set object on the left side of the operator is greater than or equal to the set object on the right side.  
  
```
bool operator!>=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type **set**.  
  
 `right`  
 An object of type **set**.  
  
### Return Value  
 **true** if the set on the left side of the operator is greater than or equal to the set on the right side of the list; otherwise **false**.  
  
### Remarks  
 The comparison between set objects is based on a pairwise comparison of their elements. The greater than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// set_op_ge.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 >= s2 )  
      cout << "Set s1 is greater than or equal to set s2." << endl;  
   else  
      cout << "The set s1 is less than the set s2." << endl;  
  
   if ( s1 >= s3 )  
      cout << "Set s1 is greater than or equal to set s3." << endl;  
   else  
      cout << "The set s1 is less than the set s3." << endl;  
  
   if ( s1 >= s4 )  
      cout << "Set s1 is greater than or equal to set s4." << endl;  
   else  
      cout << "The set s1 is less than the set s4." << endl;  
}  
\* Output:   
The set s1 is less than the set s2.  
Set s1 is greater than or equal to set s3.  
Set s1 is greater than or equal to set s4.  
*\  
```  
  
##  <a name="operator_neq_multiset"></a>  operator!= (multiset)  
 Tests if the multiset object on the left side of the operator is not equal to the multiset object on the right side.  
  
```
bool operator!=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the sets or multisets are not equal; **false** if sets or multisets are equal.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison between their elements. Two sets or multisets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
### Example  
  
```cpp  
// multiset_op_ne.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 != s2 )  
      cout << "The multisets s1 and s2 are not equal." << endl;  
   else  
      cout << "The multisets s1 and s2 are equal." << endl;  
  
   if ( s1 != s3 )  
      cout << "The multisets s1 and s3 are not equal." << endl;  
   else  
      cout << "The multisets s1 and s3 are equal." << endl;  
}  
\* Output:   
The multisets s1 and s2 are not equal.  
The multisets s1 and s3 are equal.  
*\  
```  
  
##  <a name="operator_lt_multiset"></a>  operator&lt; (multiset)  
 Tests if the multiset object on the left side of the operator is less than the multiset object on the right side.  
  
```
bool operator<(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the multiset on the left side of the operator is strictly less than the multiset on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison of their elements. The less-than relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// multiset_op_lt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 < s2 )  
      cout << "The multiset s1 is less than "  
           << "the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is not less than "  
           << "the multiset s2." << endl;  
  
   if ( s1 < s3 )  
      cout << "The multiset s1 is less than "  
           << "the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is not less than "  
           << "the multiset s3." << endl;  
}  
\* Output:   
The multiset s1 is less than the multiset s2.  
The multiset s1 is not less than the multiset s3.  
*\  
```  
  
##  <a name="operator_lt__eq_multiset"></a>  operator&lt;= (multiset)  
 Tests if the multiset object on the left side of the operator is less than or equal to the multiset object on the right side.  
  
```
bool operator!<=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the multiset on the left side of the operator is less than or equal to the multiset on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// multiset_op_le.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 <= s2 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s2." << endl;  
  
   if ( s1 <= s3 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s3." << endl;  
  
   if ( s1 <= s4 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s4." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s4." << endl;  
}  
\* Output:   
The multiset s1 is less than or equal to the multiset s2.  
The multiset s1 is greater than the multiset s3.  
The multiset s1 is less than or equal to the multiset s4.  
*\  
```  
  
##  <a name="operator_eq_eq_multiset"></a>  operator== (multiset)  
 Tests if the multiset object on the left side of the operator is equal to the multiset object on the right side.  
  
```
bool operator!==(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the multiset on the left side of the operator is equal to the multiset on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison of their elements. Two sets or multisets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
### Example  
  
```cpp  
// multiset_op_eq.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 == s2 )  
      cout << "The multisets s1 and s2 are equal." << endl;  
   else  
      cout << "The multisets s1 and s2 are not equal." << endl;  
  
   if ( s1 == s3 )  
      cout << "The multisets s1 and s3 are equal." << endl;  
   else  
      cout << "The multisets s1 and s3 are not equal." << endl;  
}  
\* Output:   
The multisets s1 and s2 are not equal.  
The multisets s1 and s3 are equal.  
*\  
```  
  
##  <a name="operator_gt_multiset"></a>  operator&gt; (multiset)  
 Tests if the multiset object on the left side of the operator is greater than the multiset object on the right side.  
  
```
bool operator>(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the multiset on the left side of the operator is greater than the multiset on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison of their elements. The greater-than relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// multiset_op_gt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 > s2 )  
      cout << "The multiset s1 is greater than "  
           << "the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is not greater "  
           << "than the multiset s2." << endl;  
  
   if ( s1 > s3 )  
      cout << "The multiset s1 is greater than "  
           << "the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is not greater than "  
           << "the multiset s3." << endl;  
}  
\* Output:   
The multiset s1 is not greater than the multiset s2.  
The multiset s1 is greater than the multiset s3.  
*\  
```  
  
##  <a name="operator_gt__eq_multiset"></a>  operator&gt;= (multiset)  
 Tests if the multiset object on the left side of the operator is greater than or equal to the multiset object on the right side.  
  
```
bool operator!>=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `left`  
 An object of type `multiset`.  
  
 `right`  
 An object of type `multiset`.  
  
### Return Value  
 **true** if the multiset on the left side of the operator is greater than or equal to the multiset on the right side of the list; otherwise **false**.  
  
### Remarks  
 The comparison between multiset objects is based on a pairwise comparison of their elements. The greater than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.  
  
### Example  
  
```cpp  
// multiset_op_ge.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 >= s2 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s2." << endl;  
  
   if ( s1 >= s3 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s3." << endl;  
  
   if ( s1 >= s4 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s4." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s4." << endl;  
}  
\* Output:   
The multiset s1 is less than the multiset s2.  
The multiset s1 is greater than or equal to the multiset s3.  
The multiset s1 is greater than or equal to the multiset s4.  
*\  
```  
  
## See Also  
 [\<set>](../standard-library/set.md)



