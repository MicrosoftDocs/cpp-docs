---
title: "ref new, gcnew  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "gcnew"
  - "ref new"
  - "gcnew_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ref new keyword (C++)"
  - "gcnew keyword [C++]"
ms.assetid: 388a62da-c2df-4a94-a9a2-205b53e577da
caps.latest.revision: 24
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
# ref new, gcnew  (C++ Component Extensions)
The `ref new` aggregate keyword allocates an instance of a type that is garbage collected when the object becomes inaccessible, and that returns a handle ([^](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)) to the allocated object.  
  
## All Runtimes  
 Memory for an instance of a type that is allocated by `ref new` is deallocated automatically.  
  
 A `ref new` operation throws `OutOfMemoryException` if it is unable to allocate memory.  
  
 For more information about how memory for native C++ types is allocated and deallocated, see [the new and delete operators](../cpp/new-and-delete-operators.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Use `ref new` to allocate memory for Windows Runtime objects whose lifetime you want to administer automatically. The object is automatically deallocated when its reference count goes to zero, which occurs after the last copy of the reference has gone out of scope. For more information, see [Ref classes and structs](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 Memory for a managed type (reference or value type) is allocated by `gcnew`, and deallocated by using garbage collection.  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following example uses `gcnew` to allocate a Message object.  
  
```  
// mcppv2_gcnew_1.cpp  
// compile with: /clr  
ref struct Message {  
   System::String^ sender;  
   System::String^ receiver;  
   System::String^ data;  
};  
  
int main() {  
   Message^ h_Message  = gcnew Message;  
  //...  
}  
```  
  
 **Example**  
  
 The following example uses `gcnew` to create a boxed value type for use like a reference type.  
  
```  
// example2.cpp : main project file.  
// compile with /clr  
using namespace System;  
value class Boxed {  
    public:  
        int i;  
};  
int main()  
{  
    Boxed^ y = gcnew Boxed;  
    y->i = 32;  
    Console::WriteLine(y->i);  
    return 0;  
}  
```  
  
 **Output**  
  
```Output  
32  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)