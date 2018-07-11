---
title: "__if_not_exists Statement | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["__if_not_exists_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__if_not_exists keyword [C++]"]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# __if_not_exists Statement
The **__if_not_exists** statement tests whether the specified identifier exists. If the identifier does not exist, the specified statement block is executed.  
  
## Syntax  
  
```  
__if_not_exists ( identifier ) {   
statements  
};  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`identifier`|The identifier whose existence you want to test.|  
|`statements`|One or more statements to execute if `identifier` does not exist.|  
  
## Remarks  
  
> [!CAUTION]
>  To achieve the most reliable results, use the **__if_not_exists** statement under the following constraints.  
  
-   Apply the **__if_not_exists** statement to only simple types, not templates.  
  
-   Apply the **__if_not_exists** statement to identifiers both inside or outside a class. Do not apply the **__if_not_exists** statement to local variables.  
  
-   Use the **__if_not_exists** statement only in the body of a function. Outside of the body of a function, the **__if_not_exists** statement can test only fully defined types.  
  
-   When you test for overloaded functions, you cannot test for a specific form of the overload.  
  
 The complement to the **__if_not_exists** statement is the [__if_exists](../cpp/if-exists-statement.md) statement.  
  
## Example  
 For an example about how to use **__if_not_exists**, see [__if_exists Statement](../cpp/if-exists-statement.md).  
  
## See Also  
 [Selection Statements](../cpp/selection-statements-cpp.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [__if_exists Statement](../cpp/if-exists-statement.md)