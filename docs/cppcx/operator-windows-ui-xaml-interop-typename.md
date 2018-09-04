---
title: "operator Windows::UI::Xaml::Interop::TypeName | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# operator Windows::UI::Xaml::Interop::TypeName
Enables conversion from `Platform::Type` to [Windows::UI::Xaml::Interop::TypeName](https://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx).  
  
## Syntax  
  
```cpp  
Operator TypeName(Platform::Type^ type)  
```  
  
### Return Value  
 Returns a [Windows::UI::Xaml::Interop::TypeName](https://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) when given a `Platform::Type^`.  
  
### Remarks  
 `TypeName` is the language-neutral Windows Runtime struct for representing type information. [Platform::Type](../cppcx/platform-type-class.md) is specific to C++ and can’t be passed across the application binary interface (ABI). Here's one use of `TypeName`, in the [Navigate](https://msdn.microsoft.com/library/windows/apps/hh702394.aspx) function:  
  
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
 [operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)   
 [Platform::Type Class](../cppcx/platform-type-class.md)