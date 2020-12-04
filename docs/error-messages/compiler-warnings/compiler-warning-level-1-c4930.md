---
description: "Learn more about: Compiler Warning (level 1) C4930"
title: "Compiler Warning (level 1) C4930"
ms.date: "11/04/2016"
f1_keywords: ["C4930"]
helpviewer_keywords: ["C4930"]
ms.assetid: 89a206c9-c536-4186-8e81-1cde3e7f4f5b
---
# Compiler Warning (level 1) C4930

'prototype': prototyped function not called (was a variable definition intended?)

The compiler detected an unused function prototype. If the prototype was intended as a variable declaration, remove the open/close parentheses.

The following sample generates C4930:

```cpp
// C4930.cpp
// compile with: /W1
class Lock {
public:
   int i;
};

void f() {
   Lock theLock();   // C4930
   // try the following line instead
   // Lock theLock;
}

int main() {
}
```

C4930 can also occur when the compiler cannot distinguish between a function prototype declaration and a function call.

The following sample generates C4930:

```cpp
// C4930b.cpp
// compile with: /EHsc /W1

class BooleanException
{
   bool _result;

public:
   BooleanException(bool result)
      : _result(result)
   {
   }

   bool GetResult() const
   {
      return _result;
   }
};

template<class T = BooleanException>
class IfFailedThrow
{
public:
   IfFailedThrow(bool result)
   {
      if (!result)
      {
         throw T(result);
      }
   }
};

class MyClass
{
public:
   bool MyFunc()
   {
      try
      {
         IfFailedThrow<>(MyMethod()); // C4930

         // try one of the following lines instead
         // IfFailedThrow<> ift(MyMethod());
         // IfFailedThrow<>(this->MyMethod());
         // IfFailedThrow<>((*this).MyMethod());

         return true;
      }
      catch (BooleanException e)
      {
         return e.GetResult();
      }
   }

private:
   bool MyMethod()
   {
      return true;
   }
};

int main()
{
   MyClass myClass;
   myClass.MyFunc();
}
```

In the above sample, the result of a method that takes zero arguments is passed as an argument to the constructor of an unnamed local class variable. The call can be disambiguated by either naming the local variable or prefixing the method call with an object instance along with the appropriate pointer-to-member operator.
