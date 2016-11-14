---
title: "marshal_as | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "marshal_as"
  - "msclr.interop.marshal_as"
  - "msclr::interop::marshal_as"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_as template [C++]"
ms.assetid: 2ed717da-2b11-41e5-981d-47d251771989
caps.latest.revision: 17
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
# marshal_as
This method converts data between native and managed environments.  
  
## Syntax  
  
```  
To_Type marshal_as<To_Type>(  
   From_Type input   
);  
```  
  
#### Parameters  
 [in] `input`  
 The value that you want to marshal to a `To_Type` variable.  
  
## Return Value  
 A variable of type `To_Type` that is the converted value of `input`.  
  
## Remarks  
 This method is a simplified way to convert data between native and managed types. To determine what data types are supported, see [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md). Some data conversions require a context. You can convert those data types by using the [marshal_context Class](../dotnet/marshal-context-class.md).  
  
 If you try to marshal a pair of data types that are not supported, `marshal_as` will generate an error [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) at compile time. Read the message supplied with this error for more information. The `C4996` error can be generated for more than just deprecated functions. One example of this is trying to marshal a pair of data types that are not supported.  
  
 The marshaling library consists of several header files. Any conversion requires only one file, but you can include additional files if you need to for other conversions. To see which conversions are associated with which files, look in the table in `Marshaling Overview`. Regardless of what conversion you want to do, the namespace requirement is always in effect.  
  
## Example  
 This example marshals from a `const char*` to a `System::String` variable type.  
  
```  
// marshal_as_test.cpp  
// compile with: /clr  
#include <stdlib.h>  
#include <string.h>  
#include <msclr\marshal.h>  
  
using namespace System;  
using namespace msclr::interop;  
  
int main() {  
   const char* message = "Test String to Marshal";  
   String^ result;  
   result = marshal_as<String^>( message );  
   return 0;  
}  
```  
  
## Requirements  
 **Header file:** \<msclr\marshal.h>, \<msclr\marshal_windows.h>, \<msclr\marshal_cppstd.h>, or \<msclr\marshal_atl.h>  
  
 **Namespace:** msclr::interop  
  
## See Also  
 [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_context Class](../dotnet/marshal-context-class.md)