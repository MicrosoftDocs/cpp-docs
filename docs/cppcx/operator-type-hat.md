---
title: "operator Type^ | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
ms.assetid: b24ffc83-0780-4f9a-8ee0-f5725db339d1
author: "ghogen"
ms.author: "ghogen"
ms.workload: ["cplusplus"]
---
# operator Type^
Enables conversion from [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) to `Platform::Type`.  
  
## Syntax  
  
```cpp  
Operator Type^(Windows::UI::Xaml::Interop::TypeName typeName)  
```  
  
### Return Value  
 Returns a `Platform::Type` when given a [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
### Remarks  
 `TypeName` is the language-neutral Windows Runtime struct for representing type information. [Platform::Type](../cppcx/platform-type-class.md) is specific to C++ and can’t be passed across the application binary interface (ABI). Here's one use of `TypeName`, in the [Navigate](http://msdn.microsoft.com/library/windows/apps/hh702394.aspx) function:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
### Example  
 The next example shows how to convert between `TypeName` and `Type`.  
  
```  
  
// Convert from Type to TypeName  
TypeName tn = TypeName(MainPage::typeid);  
  
// Convert back from TypeName to Type  
Type^ tx2 = (Type^)(tn);  
  
```  
  
## .NET Framework Equivalent  
 .NET Framework programs project `TypeName` as [System.Type](assetId:///System.Type?qualifyHint=False&autoUpgrade=True).  
  
### Requirements  
  
## See Also  
 [operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)   
 [Platform::Type Class](../cppcx/platform-type-class.md)