---
title: "length_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["stdexcept/std::length_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["length_error class"]
ms.assetid: d53c46c5-4626-400d-bd76-bf3e1e0f64ae
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# length_error Class

The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.

## Syntax

```cpp
class length_error : public logic_error {
public:
    explicit length_error(const string& message);

    explicit length_error(const char *message);

};
```

## Remarks

The value returned by [what](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#data).

## Example

```cpp
// length_error.cpp
// compile with: /EHsc /GR /MDd
#include <vector>
#include <iostream>

using namespace std;

template<class  T>
class stingyallocator : public allocator< T>
{
public:
   template <class U>
      struct rebind { typedef stingyallocator<U> other; };
   _SIZT max_size( ) const
   {
         return 10;
   };

};

int main( )
{
   try
   {
      vector<int, stingyallocator< int > > myv;
      for ( int i = 0; i < 11; i++ ) myv.push_back( i );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
\* Output:
Caught vector<T> too long
Type class std::length_error
*\
```

## Requirements

**Header:** \<stdexcept>

**Namespace:** std

## See also

[logic_error Class](../standard-library/logic-error-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
