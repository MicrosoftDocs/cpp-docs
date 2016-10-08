---
title: "Platform, default, and cli Namespaces  (C++ Component Extensions)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Platform, default, and cli Namespaces  (C++ Component Extensions)
A namespace qualifies the names of language elements so the names do not conflict with otherwise identical names elsewhere in the source code. For example, a name collision might prevent the compiler from recognizing [Context-Sensitive Keywords](../VS_visualcpp/Context-Sensitive-Keywords---C---Component-Extensions-.md). Namespaces are used by the compiler but are not preserved in the compiled assembly.  
  
## All Runtimes  
 Visual C++ provides a default namespace for your project when you create the project. You can manually rename the namespace, although in Windows Runtime the name of the .winmd file must match the name of the root namespace.  
  
## Windows Runtime  
 For more information, see [Namespaces and type visibility (C++/CX)](http://msdn.microsoft.com/library/windows/apps/hh969551.aspx).  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
 **Syntax**  
  
```  
using namespace cli;  
```  
  
 **Remarks**  
  
 The C++/CLI supports the `cli` namespace. When compiling with **/clr**, the `using` statement in the Syntax section is implied.  
  
 The following language features are in the `cli` namespace:  
  
-   [Arrays](../VS_visualcpp/Arrays--C---Component-Extensions-.md)  
  
-   [interior_ptr (C++/CLI)](../VS_visualcpp/interior_ptr--C---CLI-.md)  
  
-   [pin_ptr (C++/CLI)](../VS_visualcpp/pin_ptr--C---CLI-.md)  
  
-   [safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md)  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following code example demonstrates that it is possible to use a symbol in the `cli` namespace as a user-defined symbol in your code.  However, once you have done so, you will have to explicitly or implicitly qualify your references to the `cli` language element of the same name.  
  
```  
// cli_namespace.cpp  
// compile with: /clr  
using namespace cli;  
int main() {  
   array<int> ^ MyArray = gcnew array<int>(100);  
   int array = 0;  
  
   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062  
  
   // OK  
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);  
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);  
}  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)