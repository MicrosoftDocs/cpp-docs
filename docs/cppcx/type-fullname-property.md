---
title: "Type::FullName Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Type::get_FullName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Type::get_FullName Property"
ms.assetid: b5a12d8f-4404-4659-b4af-e7d23a1e44b7
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Type::FullName Property
Retrieves the fully-qualified name of the current type in the form “Namespace.Type”.  
  
## Syntax  
  
```cpp  
String^ FullName();  
```  
  
## Return Value  
 The name of the type.  
  
## Example  
  
```  
  
//  namespace is TestApp  
MainPage::MainPage()  
{  
    InitializeComponent();  
    Type^ t = this->GetType();  
    auto s = t->FullName; // returns “TestApp.MainPage”  
    auto s2 = t->ToString(); //also returns “TestApp.MainPage”  
}  
```  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::ValueType Class](../cppcx/platform-valuetype-class.md)