---
title: "Compiler Error C3270"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 70e6e76b-7415-48f5-a61e-2ed50caf08e4
caps.latest.revision: 8
manager: douge
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
# Compiler Error C3270
'field': the FieldOffset attribute can only be used in the context of StructLayout(Explicit), in which case it is required  
  
 A field was marked with [FieldOffset](frlrfSystemRuntimeInteropServicesFieldOffsetAttributeClassTopic), which is only allowed when [StructLayout](frlrfSystemRuntimeInteropServicesStructLayoutAttributeClassTopic) Explicit is in effect.  
  
 The following sample generates C3270:  
  
```  
// C3270_2.cpp  
// compile with: /clr /c  
using namespace System::Runtime::InteropServices;  
  
[ StructLayout(LayoutKind::Sequential) ]  
// try the following line instead  
// [ StructLayout(LayoutKind::Explicit) ]  
public value struct MYUNION  
{  
   [FieldOffset(0)] int a;   // C3270  
   // ...  
};  
```  
  
 The following sample generates C3270:  
  
```  
// C3270.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
using namespace System::Runtime::InteropServices;  
  
[ StructLayout(LayoutKind::Sequential) ]  
// try the following line instead  
// [ StructLayout(LayoutKind::Explicit) ]  
public __value struct MYUNION  
{  
   [FieldOffset(0)] int a;   // C3270  
   // ...  
};  
```