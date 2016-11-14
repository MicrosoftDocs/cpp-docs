---
title: "bad_cast Exception | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "bad_cast"
  - "bad_cast_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exceptions, bad_cast"
  - "bad_cast keyword [C++]"
ms.assetid: 31eae1e7-d8d5-40a0-9fef-64a6a4fc9021
caps.latest.revision: 9
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
# bad_cast Exception
The `bad_cast` exception is thrown by the `dynamic_cast` operator as the result of a failed cast to a reference type.  
  
## Syntax  
  
```  
catch (bad_cast)  
   statement  
```  
  
## Remarks  
 The interface for `bad_cast` is:  
  
```  
class bad_cast : public exception {  
public:  
   bad_cast(const char * _Message = "bad cast");  
   bad_cast(const bad_cast &);  
   virtual ~bad_cast();  
};  
```  
  
 The following code contains an example of a failed `dynamic_cast` that throws the `bad_cast` exception.  
  
```  
// expre_bad_cast_Exception.cpp  
// compile with: /EHsc /GR  
#include <typeinfo.h>  
#include <iostream>  
  
class Shape {  
public:  
   virtual void virtualfunc() const {}  
};  
  
class Circle: public Shape {  
public:  
   virtual void virtualfunc() const {}  
};  
  
using namespace std;  
int main() {  
   Shape shape_instance;  
   Shape& ref_shape = shape_instance;  
   try {  
      Circle& ref_circle = dynamic_cast<Circle&>(ref_shape);   
   }  
   catch (bad_cast b) {  
      cout << "Caught: " << b.what();  
   }  
}  
```  
  
 The exception is thrown because the object being cast (a Shape) is not derived from the specified cast type (Circle). To avoid the exception, add these declarations to `main`:  
  
```  
Circle circle_instance;  
Circle& ref_circle = circle_instance;  
```  
  
 Then reverse the sense of the cast in the `try` block as follows:  
  
```  
Shape& ref_shape = dynamic_cast<Shape&>(ref_circle);  
```  
  
## See Also  
 [dynamic_cast Operator](../cpp/dynamic-cast-operator.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [C++ Exception Handling](../cpp/cpp-exception-handling.md)