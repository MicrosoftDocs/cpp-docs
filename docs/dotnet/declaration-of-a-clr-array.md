---
title: "Declaration of a CLR Array | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array keyword [C++]"
ms.assetid: 36a8883c-2663-43f0-a90c-28f27035e036
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
# Declaration of a CLR Array
The syntax for declaring, instantiating, and initializing a managed array has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 The declaration of a CLR array object in Managed Extensions was an extension of the standard array declaration in which a `__gc` keyword was placed between the name of the array object and its possibly comma-filled dimension, as in the following pair of examples:  
  
```  
void PrintValues( Object* myArr __gc[]);  
void PrintValues( int myArr __gc[,,]);  
```  
  
 This has been simplified in the new syntax, in which we use a template-like declaration similar to the STL `vector` declaration. The first parameter indicates the element type. The second parameter specifies the array dimension (with a default value of 1, so only multiple dimensions require a second argument). The array object itself is a tracking handle, and so must be given a hat. If the element type is also a reference type, it also requires a hat. For example, the above example, when expressed in the new syntax, looks as follows:  
  
```  
void PrintValues( array<Object^>^ myArr );  
void PrintValues( array<int,3>^ myArr );  
```  
  
 Because a reference type is a tracking handle rather than an object, it is possible to specify a CLR array as the return type of a function. (In contrast, it is not possible to specify the native array as the return type of a function.) The syntax for doing this in Managed Extensions was somewhat non-intuitive. For example:  
  
```  
Int32 f() [];  
int GetArray() __gc[];  
```  
  
 In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], the declaration is much simpler. For example,  
  
```  
array<Int32>^ f();  
array<int>^ GetArray();  
```  
  
 The shorthand initialization of a local managed array is supported in both versions of the language. For example:  
  
```  
int GetArray() __gc[] {  
   int a1 __gc[] = { 1, 2, 3, 4, 5 };  
   Object* myObjArray __gc[] = {   
      __box(26), __box(27), __box(28), __box(29), __box(30)  
   };  
   return a1;  
}  
```  
  
 is considerably simplified in the new syntax (note that because boxing is implicit in the new syntax, the `__box` operator has been eliminated – see [Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md) for a discussion):  
  
```  
array<int>^ GetArray() {  
   array<int>^ a1 = {1,2,3,4,5};  
   array<Object^>^ myObjArray = {26,27,28,29,30};  
   return a1;  
}  
```  
  
 Because an array is a CLR reference type, the declaration of each array object is a tracking handle. Therefore, array objects must be allocated on the CLR heap. (The shorthand notation hides the managed heap allocation.) Here is the explicit form of an array object initialization under Managed Extensions:  
  
```  
Object* myArray[] = new Object*[2];  
String* myMat[,] = new String*[4,4];  
```  
  
 Under the new syntax, the `new` expression is replaced with `gcnew`. The dimension sizes are passed as parameters to the `gcnew` expression, as follows:  
  
```  
array<Object^>^ myArray = gcnew array<Object^>(2);  
array<String^,2>^ myMat = gcnew array<String^,2>(4,4);  
```  
  
 In the new syntax, an explicit initialization list can follow the `gcnew` expression; this was not supported in Managed Extensions. For example:  
  
```  
// explicit initialization list following gcnew   
// was not supported in Managed Extensions  
array<Object^>^ myArray =   
   gcnew array<Object^>(4){ 1, 1, 2, 3 };  
```  
  
## See Also  
 [Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)   
 [Arrays](../windows/arrays-cpp-component-extensions.md)