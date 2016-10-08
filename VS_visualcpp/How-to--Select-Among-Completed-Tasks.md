---
title: "How to: Select Among Completed Tasks"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
caps.latest.revision: 14
manager: ghogen
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
# How to: Select Among Completed Tasks
This example shows how to use the [concurrency::choice](../VS_visualcpp/choice-Class.md) and [concurrency::join](../VS_visualcpp/join-Class.md) classes to select the first task to complete a search algorithm.  
  
## Example  
 The following example performs two search algorithms in parallel and selects the first algorithm to complete. This example defines the `employee` type, which holds a numeric identifier and a salary for an employee. The `find_employee` function finds the first employee that has the provided identifier or the provided salary. The `find_employee` function also handles the case where no employee has the provided identifier or salary. The `wmain` function creates an array of `employee` objects and searches for several identifier and salary values.  
  
 The example uses a `choice` object to select among the following cases:  
  
1.  An employee who has the provided identifier exists.  
  
2.  An employee who has the provided salary exists.  
  
3.  No employee who has the provided identifier or salary exists.  
  
 For the first two cases, the example uses a [concurrency::single_assignment](../VS_visualcpp/single_assignment-Class.md) object to hold the identifier and another `single_assignment` object to hold the salary. The example uses a `join` object for the third case. The `join` object is composed of two additional `single_assignment` objects, one for the case where no employee who has the provided identifier exists, and one for the case where no employee who has the provided salary exists. The `join` object sends a message when each of its members receives a message. In this example, the `join` object sends a message when no employee who has the provided identifier or salary exists.  
  
 The example uses a [concurrency::structured_task_group](../VS_visualcpp/structured_task_group-Class.md) object to run both search algorithms in parallel. Each search task writes to one of the `single_assignment` objects to indicate whether the given employee exists. The example uses the [concurrency::receive](../Topic/receive%20Function.md) function to obtain the index of the first buffer that contains a message and a `switch` block to print the result.  
  
 [!CODE [concrt-find-employee#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-find-employee#1)]  
  
 This example produces the following output.  
  
 **Employee with id 14758 has salary 27780.00.**  
**Employee with salary 29150.00 has id 84345.**  
**Employee with id 61935 has salary 29905.00.**  
**No employee has id 899 or salary 31223.00.** This example uses the [concurrency::make_choice](../Topic/make_choice%20Function.md) helper function to create `choice` objects and the [concurrency::make_join](../Topic/make_join%20Function.md) helper function to create `join` objects.  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `find-employee.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc find-employee.cpp**  
  
## See Also  
 [Asynchronous Agents Library](../VS_visualcpp/Asynchronous-Agents-Library.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)   
 [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)   
 [choice Class](../VS_visualcpp/choice-Class.md)   
 [join Class](../VS_visualcpp/join-Class.md)