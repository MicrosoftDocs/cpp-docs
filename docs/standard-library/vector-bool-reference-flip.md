---
title: "vector&lt;bool&gt;::reference::flip | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["vector/std::vector<bool>::reference::flip"]
dev_langs: ["C++"]
helpviewer_keywords: ["reference::flip method"]
ms.assetid: ef940365-cbe4-4a87-a3e2-1f3cfa357e29
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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

[vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
