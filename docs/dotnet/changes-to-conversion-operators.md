---
title: "Changes to Conversion Operators | Microsoft Docs"
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
  - "conversion operators"
  - "operators [C++], explicit type conversion"
  - "type conversion, explicit conversions"
  - "conversions, explicit"
  - "explicit keyword [C++]"
ms.assetid: 9b83925c-71b7-4bd3-ac2e-843dd7c7f184
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
# Changes to Conversion Operators
The syntax for conversion operators has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 One example is to write `op_Implicit` to specify a conversion. Here is a definition of `MyDouble` taken from the language specification:  
  
```  
__gc struct MyDouble {  
   static MyDouble* op_Implicit( int i );   
   static int op_Explicit( MyDouble* val );  
   static String* op_Explicit( MyDouble* val );   
};  
```  
  
 This says that, given an integer, the algorithm for converting that integer into a `MyDouble` is provided by the `op_Implicit` operator. Moreover, that conversion will be performed implicitly by the compiler. Similarly, given a `MyDouble` object, the two `op_Explicit` operators provide the respective algorithms for converting that object into either an integer or a managed `String` entity. However, the compiler will not perform the conversion unless explicitly requested by the user.  
  
 In C#, this looks as follows:  
  
```  
class MyDouble {  
   public static implicit operator MyDouble( int i );   
   public static explicit operator int( MyDouble val );  
   public static explicit operator string( MyDouble val );   
};  
```  
  
 The C# code looks more like C++ than Managed Extensions for C++ does. That is not the case in the new syntax.  
  
 The ISO-C++ committee introduced a keyword, `explicit`, to mitigate unintended consequences – for example, an `Array` class which takes a single integer argument as a dimension will implicitly convert any integer into an `Array` object which is not what you want. One way to prevent this is a design idiom of a dummy second argument to a constructor  
  
 On the other hand, you should not provide a conversion pair when designing a class type within C++. The best example for that is the standard string class. The implicit conversion is the single-argument constructor taking a C-style string. However, it does not provide the corresponding implicit conversion operator – that of converting a string object to a C-style string, but rather requires the user to explicitly invoke a named function – in this case, `c_str()`.  
  
 So, associating an implicit/explicit behavior on a conversion operator (and as encapsulating the set of conversions to a single form of declaration) appears to be an improvement on the original C++ support for conversion operators, which eventually led to the `explicit` keyword. The [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] language support for conversion operators looks as follows, which is slightly less verbose than that of C# because of the default behavior of the operator supporting an implicit application of the conversion algorithm:  
  
```  
ref struct MyDouble {  
public:  
   static operator MyDouble^ ( int i );  
   static explicit operator int ( MyDouble^ val );  
   static explicit operator String^ ( MyDouble^ val );  
};  
```  
  
 Another change is that a single argument constructor is treated as if it is declared as `explicit`. This means that in order to trigger its invocations, an explicit cast is required. Note, however, that if an explicit conversion operator is defined, it and not the single-argument constructor, is invoked.  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)