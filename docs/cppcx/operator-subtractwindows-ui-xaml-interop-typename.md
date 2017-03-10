---
title: "operator Windows::UI::Xaml::Interop::TypeName | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# operator Windows::UI::Xaml::Interop::TypeName
Enables conversion from `Platform::Type` to [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
## Syntax  
  
```cpp  
Operator TypeName(Platform::Type^ type)  
```  
  
### Return Value  
 Returns a [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) when given a `Platform::Type^`.  
  
### Remarks  
 `TypeName` is the language-neutral Windows Runtime struct for representing type information. [Platform::Type](../cppcx/platform-type-class.md) is specific to C++ and can’t be passed across the application binary interface (ABI). Here's one use of `TypeName`, in the [Navigate](http://msdn.microsoft.com/library/windows/apps/hh702394.aspx) function:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
### Example  
 The next example shows how to convert between `TypeName` and `Type`.  
  
```  
  
// Convert from Type to TypeName  
Windows::UI::Xaml::Interop::TypeName tn = TypeName(MainPage::typeid);  
  
// Convert back from TypeName to Type  
Type^ tx2 = (Type^)(tn);  
  
```  
  
## .NET Framework Equivalent  
 .NET Framework programs project `TypeName` as [System.Type](assetId:///System.Type?qualifyHint=False&autoUpgrade=True).  
  
### Requirements  
  
## See Also  
 [operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)   
 [Platform::Type Class](../cppcx/platform-type-class.md)