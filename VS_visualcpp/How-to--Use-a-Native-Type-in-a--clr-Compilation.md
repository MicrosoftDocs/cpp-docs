---
title: "How to: Use a Native Type in a -clr Compilation"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: get-started-article
H1: How to: Use a Native Type in a /clr Compilation
ms.assetid: 3a505c90-4adb-4942-9cf9-7d1fdcbc01e7
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# How to: Use a Native Type in a -clr Compilation
You can define a native type in a **/clr** compilation and any use of that native type from within the assembly is valid. However, native types will not be available for use from referenced metadata.  
  
 Each assembly must contain the definition of every native type it will use.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
## Example  
 This sample creates a component that defines and uses a native type.  
  
```  
// use_native_type_in_clr.cpp  
// compile with: /clr /LD  
public struct NativeClass {  
   static int Test() { return 98; }  
};  
  
public ref struct ManagedClass {  
   static int i = NativeClass::Test();  
   void Test() {  
      System::Console::WriteLine(i);  
   }  
};  
```  
  
## Example  
 This sample defines a client that consumes the component. Notice that it is an error to access the native type, unless it is defined in the compiland.  
  
```  
// use_native_type_in_clr_2.cpp  
// compile with: /clr  
#using "use_native_type_in_clr.dll"  
// Uncomment the following 3 lines to resolve.  
// public struct NativeClass {  
//    static int Test() { return 98; }  
// };  
  
int main() {  
   ManagedClass x;  
   x.Test();  
  
   System::Console::WriteLine(NativeClass::Test());   // C2653  
}  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../VS_visualcpp/Using-C---Interop--Implicit-PInvoke-.md)