---
title: "bad_typeid Exception | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["bad_typeid", "bad_typeid_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["bad_typeid exception", "exceptions [C++], bad_typeid"]
ms.assetid: 5963ed58-4ede-4597-957d-f7bbd06299c2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# bad_typeid Exception
The **bad_typeid** exception is thrown by the [typeid operator](../cpp/typeid-operator.md) when the operand for **typeid** is a NULL pointer.  
  
## Syntax  
  
```  
catch (bad_typeid)  
   statement  
```  
  
## Remarks  
 The interface for **bad_typeid** is:  
  
```cpp 
class bad_typeid : public exception  
{  
public:  
   bad_typeid(const char * _Message = "bad typeid");  
   bad_typeid(const bad_typeid &);  
   virtual ~bad_typeid();  
};  
```  
  
 The following example shows the **typeid** operator throwing a **bad_typeid** exception.  
  
```cpp 
// expre_bad_typeid.cpp  
// compile with: /EHsc /GR  
#include <typeinfo.h>  
#include <iostream>  
  
class A{  
public:  
   // object for class needs vtable  
   // for RTTI  
   virtual ~A();  
};  
  
using namespace std;  
int main() {  
A* a = NULL;  
  
try {  
   cout << typeid(*a).name() << endl;  // Error condition  
   }  
catch (bad_typeid){  
   cout << "Object is NULL" << endl;  
   }  
}  
```  
  
## Output  
  
```Output 
Object is NULL  
```  
  
## See also  
 [Run-Time Type Information](../cpp/run-time-type-information.md)   
 [Keywords](../cpp/keywords-cpp.md)