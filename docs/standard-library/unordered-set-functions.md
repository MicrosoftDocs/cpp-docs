---
description: "Learn more about: &lt;unordered_set&gt; functions"
title: "&lt;unordered_set&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["unordered_set/std::swap (set)", "unordered_set/std::swap (unordered_multiset)"]
ms.assetid: 66b35671-4023-4411-ad50-83786580d8ee
---
# &lt;unordered_set&gt; functions

## <a name="swap"></a> swap (unordered_set)

Swaps the contents of two containers.

```cpp
template <class Key, class Hash, class Pred, class Alloc>
void swap(
   unordered_set <Key, Hash, Pred, Alloc>& left,
   unordered_set <Key, Hash, Pred, Alloc>& right);
```

### Parameters

*Key*\
The key type.

*Hash*\
The hash function object type.

*Pred*\
The equality comparison function object type.

*Alloc*\
The allocator class.

*left*\
The first container to swap.

*right*\
The second container to swap.

### Remarks

The template function executes `left.`[unordered_set::swap](../standard-library/unordered-set-class.md#swap)`(right)`.

### Example

```cpp
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

```Output
[c] [b] [a]
[f] [e] [d]
[c] [b] [a]
```

## <a name="swap_unordered_multiset"></a> swap (unordered_multiset)

Swaps the contents of two containers.

```cpp
template <class Key, class Hash, class Pred, class Alloc>
void swap(
   unordered_multiset <Key, Hash, Pred, Alloc>& left,
   unordered_multiset <Key, Hash, Pred, Alloc>& right);
```

### Parameters

*Key*\
The key type.

*Hash*\
The hash function object type.

*Pred*\
The equality comparison function object type.

*Alloc*\
The allocator class.

*left*\
The first container to swap.

*right*\
The second container to swap.

### Remarks

The template function executes `left.`[unordered_multiset::swap](../standard-library/unordered-multiset-class.md#swap)`(right)`.

### Example

```cpp
// std__unordered_set__u_ms_swap.cpp
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

```Output
[c] [b] [a]
[f] [e] [d]
[c] [b] [a]
```
