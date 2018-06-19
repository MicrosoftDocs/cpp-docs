---
title: "Member Access | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["member-selection operators [C++]", "pointers, smart", "member access, overloaded operators", "operator overloading [C++], member access operators", "smart pointers, definition", "smart pointers"]
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Member Access
Class member access can be controlled by overloading the member access operator (**->**). This operator is considered a unary operator in this usage, and the overloaded operator function must be a class member function. Therefore, the declaration for such a function is:  
  
## Syntax  
  
```cpp  
class-type *operator->()  
```  

## Example
The following sample code describes how SmartPointer allows us to create an object that contains a pointer to a dynamic object, saving us the need to take care of a delete at the end of the method.

```cpp
class SmartPointer
{
  private:
	class RealObject
	{
	  public:
		void RealMethod() {}
	};
	RealObject *_object = new RealObject();

  public:
	RealObject *operator->()
	{
		return _object;
	}
	~SmartPointer()
	{
		delete _object;
	}
};

int main()
{
	SmartPointer smart;
	smart->RealMethod();
} // The RealObject deleted here
```
## Remarks  
 where *class-type* is the name of the class to which this operator belongs. The member access operator function must be a nonstatic member function.  
  
 This operator is used (often in conjunction with the pointer-dereference operator) to implement "smart pointers" that validate pointers prior to dereference or count usage.  
  
 The **.** member access operator cannot be overloaded.  
  
## See Also  
 [Operator Overloading](../cpp/operator-overloading.md)