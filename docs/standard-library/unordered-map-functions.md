---
title: "&lt;unordered_map&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: cf2e4115-f205-4a0e-90be-a143ffcc1f44
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;unordered_map&gt; functions
|||  
|-|-|  
|[swap (unordered_map)](#swap_function)|[swap (unordered_multimap)](#swap_function_multimap)|  
  
##  <a name="swap_function"></a>  swap (unordered_map)  
 Swaps the contents of two containers.  
  
```  
template <class Key, class Ty, class Hash, class Pred, class Alloc>  
void swap(
    unordered_map <Key, Ty, Hash, Pred, Alloc>& left,  
    unordered_map <Key, Ty, Hash, Pred, Alloc>& right);
```  
  
### Parameters  
 `Key`  
 The key type.  
  
 `Ty`  
 The mapped type.  
  
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
 The template function executes `left.`[unordered_map::swap](../standard-library/unordered-map-class.md#unordered_map__swap)`(right)`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__u_m_swap.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
int main()   
    {   
    Mymap c1;   
  
    c1.insert(Mymap::value_type('a', 1));   
    c1.insert(Mymap::value_type('b', 2));   
    c1.insert(Mymap::value_type('c', 3));   
  
// display contents " [c 3] [b 2] [a 1]"   
    for (Mymap::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << it->first << ", " << it->second << "]";   
    std::cout << std::endl;   
  
    Mymap c2;   
  
    c2.insert(Mymap::value_type('d', 4));   
    c2.insert(Mymap::value_type('e', 5));   
    c2.insert(Mymap::value_type('f', 6));   
  
    c1.swap(c2);   
  
// display contents " [f 6] [e 5] [d 4]"   
    for (Mymap::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << it->first << ", " << it->second << "]";   
    std::cout << std::endl;   
  
    swap(c1, c2);   
  
// display contents " [c 3] [b 2] [a 1]"   
    for (Mymap::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << it->first << ", " << it->second << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c, 3] [b, 2] [a, 1]  
[f, 6] [e, 5] [d, 4]  
[c, 3] [b, 2] [a, 1]  
```  
  
##  <a name="swap_function_multimap"></a>  swap (unordered_multimap)  
 Swaps the contents of two containers.  
  
```  
template <class Key, class Ty, class Hash, class Pred, class Alloc>  
void swap(
    unordered_multimap <Key, Ty, Hash, Pred, Alloc>& left,  
    unordered_multimap <Key, Ty, Hash, Pred, Alloc>& right);
```  
  
### Parameters  
 `Key`  
 The key type.  
  
 `Ty`  
 The mapped type.  
  
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
 The template function executes `left.`[unordered_multimap::swap](../standard-library/unordered-multimap-class.md#unordered_multimap__swap)`(right)`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__u_mm_swap.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_multimap<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"   
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    Mymap c2;

    c2.insert(Mymap::value_type('d', 4));
    c2.insert(Mymap::value_type('e', 5));
    c2.insert(Mymap::value_type('f', 6));

    c1.swap(c2);

    // display contents " [f 6] [e 5] [d 4]"   
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    swap(c1, c2);

    // display contents " [c 3] [b 2] [a 1]"   
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
}
  
```  
  
```Output  
[c, 3] [b, 2] [a, 1]  
[f, 6] [e, 5] [d, 4]  
[c, 3] [b, 2] [a, 1]  
```  
  
## See Also  
 [<unordered_map>](../standard-library/unordered-map.md)

