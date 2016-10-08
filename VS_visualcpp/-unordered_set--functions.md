---
title: "&lt;unordered_set&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 66b35671-4023-4411-ad50-83786580d8ee
caps.latest.revision: 6
---
# &lt;unordered_set&gt; functions
|||  
|-|-|  
|[swap Function](#swap_function)|[swap Function](#swap_function_2)|  
  
##  <a name="swap_function"></a>  swap Function  
 Swaps the contents of two containers.  
  
```  
  
template<class Key, class Hash, class Pred, class Alloc>  
void swap(  
unordered_set <Key, Hash, Pred, Alloc>& left,  
unordered_set <Key, Hash, Pred, Alloc>& right);  
  
```  
  
### Parameters  
 `Key`  
 The key type.  
  
 `Hash`  
 The hash function object type.  
  
 `Pred`  
 The equality comparison function object type.  
  
 `Alloc`  
 The allocator class.  
  
 `left`  
 The first container to swap.  
  
 `right`  
 The second container to swap.  
  
### Remarks  
 The template function executes `left.`[swap](../VS_visualcpp/unordered_set-Class.md#unordered_set__swap)`(right)`.  
  
### Example  
  
```  
  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
Myset c2;  
  
c2.insert('d');  
c2.insert('e');  
c2.insert('f');  
  
c1.swap(c2);  
  
// display contents " [f] [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
swap(c1, c2);  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
   **[c] [b] [a]**  
 **[f] [e] [d]**  
 **[c] [b] [a]**    
##  <a name="swap_function_2"></a>  swap Function  
 Swaps the contents of two containers.  
  
```  
  
template<class Key, class Hash, class Pred, class Alloc>  
void swap(  
unordered_multiset <Key, Hash, Pred, Alloc>& left,  
unordered_multiset <Key, Hash, Pred, Alloc>& right);  
  
```  
  
### Parameters  
 `Key`  
 The key type.  
  
 `Hash`  
 The hash function object type.  
  
 `Pred`  
 The equality comparison function object type.  
  
 `Alloc`  
 The allocator class.  
  
 `left`  
 The first container to swap.  
  
 `right`  
 The second container to swap.  
  
### Remarks  
 The template function executes `left.`[unordered_multiset::swap](../VS_visualcpp/unordered_multiset-Class.md#unordered_multiset__swap)`(right)`.  
  
### Example  
  
```  
  
// std_tr1__unordered_set__u_ms_swap.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_multiset<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
Myset c2;  
  
c2.insert('d');  
c2.insert('e');  
c2.insert('f');  
  
c1.swap(c2);  
  
// display contents " [f] [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
swap(c1, c2);  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
   **[c] [b] [a]**  
 **[f] [e] [d]**  
 **[c] [b] [a]**    
## See Also  
 [<unordered_set>](../VS_visualcpp/-unordered_set-.md)