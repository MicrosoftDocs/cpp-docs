---
description: "Learn more about: vector&lt;bool&gt;::reference::flip"
title: "vector&lt;bool&gt;::reference::flip"
ms.date: "11/04/2016"
f1_keywords: ["vector/std::vector<bool>::reference::flip"]
helpviewer_keywords: ["reference::flip method"]
ms.assetid: ef940365-cbe4-4a87-a3e2-1f3cfa357e29
---
# vector&lt;bool&gt;::reference::flip

Inverts the Boolean value of a referenced [vector\<bool>](../standard-library/vector-bool-class.md) element.

## Syntax

```cpp
void flip();
```

## Example

```cpp
// vector_bool_ref_flip.cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha;

    vector<bool> vb = { true, false, false, true, true };

    cout << "The vector is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;

    vector<bool>::reference vbref = vb.front();
    vbref.flip();

    cout << "The vector with first element flipped is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;
}
```

## Output

```Output
The vector is:
    true false false true true
The vector with first element flipped is:
    false false false true true
```

## Requirements

**Header:** \<vector>

**Namespace:** std

## See also

[vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
