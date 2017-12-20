---
title: "Boxing (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: edfb12fa-2a9b-42f6-bdac-d4d76cb8274e
caps.latest.revision: 12
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Boxing (C++/CX)
*Boxing* is wrapping a value type variable such as [Windows::Foundation::DateTime](http://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx)—or a fundamental scalar type such as `int`—in a ref class when the variable is passed to a method that takes [Platform::Object^](../cppcx/platform-object-class.md) as its input type.  
  
## Passing a value type to an Object^ parameter  
 Although you don't have to explicitly box a variable to pass it to a method parameter of type [Platform::Object^](../cppcx/platform-object-class.md), you do have to explicitly cast back to the original type when you retrieve values that have been previously boxed.  
  
 [!code-cpp[cx_boxing#01](../cppcx/codesnippet/CPP/cx_boxing/class1.cpp#01)]  
  
### Using Platform::IBox\<T> to support nullable value types  
 C# and Visual Basic support the concept of nullable value types. In C++/CX, you can use the `Platform::IBox<T>` type to expose public methods that support nullable value type parameters. The following example shows a C++/CX public method that returns null when a C# caller passes null for one of the arguments.  
  
 [!code-cpp[cx_boxing#02](../cppcx/codesnippet/CPP/cx_boxing/class1.h#02)]  
  
 In a C# XAML client, you can consume it like this:  
  
```  
  
// C# client code  
    BoxingDemo.Class1 obj = new BoxingDemo.Class1();  
    int? a = null;  
    int? b = 5;  
    var result = obj.Multiply(a,b); //result = null  
  
```  
  
## See Also  
 [Type System (C++/CX)](../cppcx/type-system-c-cx.md)   
 [Casting (C++/CX)](../cppcx/casting-c-cx.md)   
 [Visual C++ Language Reference](../cppcx/visual-c-language-reference-c-cx.md)   
 [Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)