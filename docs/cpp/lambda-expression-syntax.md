---
title: "Lambda Expression Syntax | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCF1 Lambda_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lambda expressions [C++], syntax"
ms.assetid: 5d6154a4-f34d-4a15-970d-7e7de45f54e9
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Lambda Expression Syntax
This article demonstrates the syntax and structural elements of lambda expressions. For a description of lambda expressions, see [Lambda Expressions](../cpp/lambda-expressions-in-cpp.md).  
  
## Function Objects vs. Lambdas  
 When you write code, you probably use function pointers and function objects to solve problems and perform calculations, especially when you use [STL algorithms](../cpp/algorithms-modern-cpp.md). Function pointers and function objects each have advantages and disadvantages—for example, function pointers have minimal syntactic overhead but do not retain state within a scope, and function objects can maintain state but require the syntactic overhead of a class definition.  
  
 A lambda combines the benefits of function pointers and function objects and avoids their disadvantages. Like a function objects, a lambda is flexible and can maintain state, but unlike a function object, its compact syntax doesn't require an explicit class definition. By using lambdas, you can write code that's less cumbersome and less prone to errors than the code for an equivalent function object.  
  
 The following examples compare the use of a lambda to the use of a function object. The first example uses a lambda to print to the console whether each element in a `vector` object is even or odd. The second example uses a function object to accomplish the same task.  
  
## Example 1: Using a Lambda  
 This example passes a lambda to the `for_each` function. The lambda prints a result that states whether each element in a `vector` object is even or odd.  
  
### Code  
  
```cpp  
// even_lambda.cpp  
// compile with: cl /EHsc /nologo /W4 /MTd  
#include <algorithm>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
int main()   
{  
   // Create a vector object that contains 10 elements.  
   vector<int> v;  
   for (int i = 1; i < 10; ++i) {  
      v.push_back(i);  
   }  
  
   // Count the number of even numbers in the vector by   
   // using the for_each function and a lambda.  
   int evenCount = 0;  
   for_each(v.begin(), v.end(), [&evenCount] (int n) {  
      cout << n;  
      if (n % 2 == 0) {  
         cout << " is even " << endl;  
         ++evenCount;  
      } else {  
         cout << " is odd " << endl;  
      }  
   });  
  
   // Print the count of even numbers to the console.  
   cout << "There are " << evenCount   
        << " even numbers in the vector." << endl;  
}  
```  
  
### Output  
  
```Output  
1 is odd  
2 is even  
3 is odd  
4 is even  
5 is odd  
6 is even  
7 is odd  
8 is even  
9 is odd  
There are 4 even numbers in the vector.  
  
```  
  
### Comments  
 In the example, the third argument to the `for_each` function is a lambda. The `[&evenCount]` part specifies the capture clause of the expression, `(int n)` specifies the parameter list, and remaining part specifies the body of the expression.  
  
## Example 2: Using a Function Object  
 Sometimes a lambda would be too unwieldy to extend much further than the previous example. The next example uses a function object instead of a lambda, together with the `for_each` function, to produce the same results as Example 1. Both examples store the count of even numbers in a `vector` object. To maintain the state of the operation, the `FunctorClass` class stores the `m_evenCount` variable by reference as a member variable. To perform the operation, `FunctorClass` implements the function-call operator, `operator()`. The Visual C++ compiler generates code that is comparable in size and performance to the lambda code in Example 1. For a basic problem like the one in this article, the simpler lambda design is probably better than the function-object design. However, if you think that the functionality might require significant expansion in the future, then use a function object design so that code maintenance will be easier.  
  
 For more information about the `operator()`, see [Function Call](../cpp/function-call-cpp.md). For more information about the `for_each` function, see [for_each](http://msdn.microsoft.com/Library/8cb2ae72-bef6-488b-b011-0475c0787e33).  
  
### Code  
  
```cpp  
// even_functor.cpp  
// compile with: /EHsc  
#include <algorithm>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
class FunctorClass  
{  
public:  
    // The required constructor for this example.  
    explicit FunctorClass(int& evenCount)  
        : m_evenCount(evenCount) { }  
  
    // The function-call operator prints whether the number is  
    // even or odd. If the number is even, this method updates  
    // the counter.  
    void operator()(int n) const {  
        cout << n;  
  
        if (n % 2 == 0) {  
            cout << " is even " << endl;  
            ++m_evenCount;  
        } else {  
            cout << " is odd " << endl;  
        }  
    }  
  
private:  
    // Default assignment operator to silence warning C4512.  
    FunctorClass& operator=(const FunctorClass&);  
  
    int& m_evenCount; // the number of even variables in the vector.  
};  
  
int main()  
{  
    // Create a vector object that contains 10 elements.  
    vector<int> v;  
    for (int i = 1; i < 10; ++i) {  
        v.push_back(i);  
    }  
  
    // Count the number of even numbers in the vector by   
    // using the for_each function and a function object.  
    int evenCount = 0;  
    for_each(v.begin(), v.end(), FunctorClass(evenCount));  
  
    // Print the count of even numbers to the console.  
    cout << "There are " << evenCount  
        << " even numbers in the vector." << endl;  
}  
  
```  
  
## Output  
  
```Output  
1 is odd  
2 is even  
3 is odd  
4 is even  
5 is odd  
6 is even  
7 is odd  
8 is even  
9 is odd  
There are 4 even numbers in the vector.  
  
```  
  
## See Also  
 [Lambda Expressions](../cpp/lambda-expressions-in-cpp.md)   
 [Examples of Lambda Expressions](../cpp/examples-of-lambda-expressions.md)   
 [generate](http://msdn.microsoft.com/Library/0353f358-9651-4e00-b0c9-5bca720539a3)   
 [generate_n](http://msdn.microsoft.com/Library/377e5b0f-1bb8-4b77-9449-fbebf57f6e5e)   
 [for_each](http://msdn.microsoft.com/Library/8cb2ae72-bef6-488b-b011-0475c0787e33)   
 [Exception Specifications (throw)](../cpp/exception-specifications-throw-cpp.md)   
 [Compiler Warning (level 1) C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md)   
 [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md)