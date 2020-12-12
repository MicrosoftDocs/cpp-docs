---
description: "Learn more about: bad_alloc Class"
title: "bad_alloc Class"
ms.date: "11/04/2016"
f1_keywords: ["new/std::bad_alloc"]
helpviewer_keywords: ["bad_alloc class"]
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
---
# bad_alloc Class

The class describes an exception thrown to indicate that an allocation request did not succeed.

## Syntax

```cpp
class bad_alloc : public exception {
    bad_alloc();
    virtual ~bad_alloc();
    bad_alloc(const bad_alloc&);
    bad_alloc& operator=(const bad_alloc&);
    const char* what() const override;
};
```

## Remarks

The value returned by `what` is an implementation-defined C string. None of the member functions throw any exceptions.

## Example

```cpp
// bad_alloc.cpp
// compile with: /EHsc
#include<new>
#include<iostream>
using namespace std;

int main() {
   char* ptr;
   try {
      ptr = new char[(~unsigned int((int)0)/2) - 1];
      delete[] ptr;
   }
   catch( bad_alloc &ba) {
      cout << ba.what( ) << endl;
   }
}
```

```Output
bad allocation
```
