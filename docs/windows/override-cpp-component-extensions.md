---
title: "override  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["overriding, override keyword [C++]", "override keyword [C++]"]
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# override  (C++ Component Extensions)
The **override** context-sensitive keyword indicates that a member of a type overrides a base class or a base interface member.  
  
## Remarks  
 The **override** keyword is valid when compiling for native targets (default compiler option), Windows Runtime targets (`/ZW` compiler option), or common language runtime targets (`/clr` compiler option).  
  
 For more information about override specifiers, see [override Specifier](../cpp/override-specifier.md) and [Override Specifiers and Native Compilations](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 For more information about context-sensitive keywords, see [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## Examples  
  
 The following code example shows that **override** can also be used in native compilations.  
  
```cpp  
// override_keyword_1.cpp  
// compile with: /c  
struct I1 {  
   virtual void f();  
};  
  
struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
### Example

 The following code example shows that **override** can be used in Windows Runtime compilations.  
  
```cpp 
// override_keyword_2.cpp  
// compile with: /ZW /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
#### Requirements  
  
 Compiler option: `/ZW`  
    
### Example

 The following code example shows that **override** can be used in common language runtime compilations.  
  
```cpp  
// override_keyword_3.cpp  
// compile with: /clr /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
#### Requirements  
  
 Compiler option: `/clr`  
  
## See Also  
 [override Specifier](../cpp/override-specifier.md)   
 [Override Specifiers](../windows/override-specifiers-cpp-component-extensions.md)