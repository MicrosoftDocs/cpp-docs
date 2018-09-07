---
title: "constexpr lambda expressions in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "07/19/2017"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["lambda expressions [C++], constexpr"]
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# constexpr lambda expressions in C++
**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): A lambda expression may be declared as **constexpr** or used in a contant expression when the initialization of each data member that it captures or introduces is allowed within a constant expression.  

```cpp
    int y = 32;
	auto answer = [y]() constexpr 
	{
		int x = 10;
		return y + x; 
	};

    constexpr int Increment(int n) 
    {
	    return [n] { return n + 1; }();
    }
``` 
A lambda is implicitly **constexpr** if its result satisfies the requirements of a **constexpr** function:
```cpp
	auto answer = [](int n) 
	{
		return 32 + n; 
	};

	constexpr int response = answer(10);
``` 
If a lambda is implicitly or explicitly **constexpr**, and you convert it to a function pointer, the resulting function is also **constexpr**:

```cpp
	auto Increment = [](int n)
	{
		return n + 1;
	};

	constexpr int(*inc)(int) = Increment;
```
  
## See also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [Function Objects in the C++ Standard Library](../standard-library/function-objects-in-the-stl.md)   
 [Function Call](../cpp/function-call-cpp.md)   
 [for_each](../standard-library/algorithm-functions.md#for_each)