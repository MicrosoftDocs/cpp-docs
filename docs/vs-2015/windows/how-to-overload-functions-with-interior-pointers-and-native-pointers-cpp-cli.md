---
title: "How to: Overload Functions with Interior Pointers and Native Pointers (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Functions with interior and native pointers, overloading"
ms.assetid: d70df625-4aad-457c-84f5-70a0a290cc1f
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)](https://docs.microsoft.com/cpp/windows/how-to-overload-functions-with-interior-pointers-and-native-pointers-cpp-cli).  
  
Functions can be overloaded depending on whether the parameter type is an interior pointer or a native pointer.  
  
> [!IMPORTANT]
>  This language feature is supported by the **/clr** compiler option, but not by the **/ZW** compiler option.  
  
## Example  
  
### Code  
  
```  
// interior_ptr_overload.cpp  
// compile with: /clr  
using namespace System;  
  
// C++ class  
struct S {  
   int i;  
};  
  
// managed class  
ref struct G {  
   int i;  
};  
  
// can update unmanaged storage  
void f( int* pi ) {  
   *pi = 10;  
   Console::WriteLine("in f( int* pi )");  
}  
  
// can update managed storage  
void f( interior_ptr<int> pi ) {  
   *pi = 10;   
   Console::WriteLine("in f( interior_ptr<int> pi )");  
}  
  
int main() {  
   S *pS = new S;   // C++ heap  
   G ^pG = gcnew G;   // common language runtime heap  
   f( &pS->i );  
   f( &pG->i );  
};  
```  
  
### Output  
  
```  
in f( int* pi )  
in f( interior_ptr<int> pi )  
```  
  
## See Also  
 [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)



