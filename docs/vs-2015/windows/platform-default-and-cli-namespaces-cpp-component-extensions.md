---
title: "Platform, default, and cli Namespaces  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "lang"
  - "cli"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lang namespace"
  - "cli namespace"
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Platform, default, and cli Namespaces  (C++ Component Extensions)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Platform, default, and cli Namespaces  (C++ Component Extensions)](https://docs.microsoft.com/cpp/windows/platform-default-and-cli-namespaces-cpp-component-extensions).  
  
A namespace qualifies the names of language elements so the names do not conflict with otherwise identical names elsewhere in the source code. For example, a name collision might prevent the compiler from recognizing [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md). Namespaces are used by the compiler but are not preserved in the compiled assembly.  
  
## All Runtimes  
 Visual C++ provides a default namespace for your project when you create the project. You can manually rename the namespace, although in [!INCLUDE[wrt](../includes/wrt-md.md)] the name of the .winmd file must match the name of the root namespace.  
  
## [!INCLUDE[wrt](../includes/wrt-md.md)]  
 For more information, see [Namespaces and type visibility (C++/CX)](http://msdn.microsoft.com/library/windows/apps/hh969551.aspx).  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../includes/clr-for-headings-md.md)]  
 **Syntax**  
  
```  
using namespace cli;  
```  
  
 **Remarks**  
  
 The [!INCLUDE[cppcli](../includes/cppcli-md.md)] supports the `cli` namespace. When compiling with **/clr**, the `using` statement in the Syntax section is implied.  
  
 The following language features are in the `cli` namespace:  
  
-   [Arrays](../windows/arrays-cpp-component-extensions.md)  
  
-   [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)  
  
-   [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md)  
  
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
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)



