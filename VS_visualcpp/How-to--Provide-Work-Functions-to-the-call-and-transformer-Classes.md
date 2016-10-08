---
title: "How to: Provide Work Functions to the call and transformer Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
caps.latest.revision: 12
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
# How to: Provide Work Functions to the call and transformer Classes
This topic illustrates several ways to provide work functions to the [concurrency::call](../VS_visualcpp/call-Class.md) and [concurrency::transformer](../VS_visualcpp/transformer-Class.md) classes.  
  
 The first example shows how to pass a lambda expression to a `call` object. The second example shows how to pass a function object to a `call` object. The third example shows how to bind a class method to a `call` object.  
  
 For illustration, every example in this topic uses the `call` class. For an example that uses the `transformer` class, see [How to: Use transformer in a Data Pipeline](../VS_visualcpp/How-to--Use-transformer-in-a-Data-Pipeline.md).  
  
## Example  
 The following example shows a common way to use the `call` class. This example passes a lambda function to the `call` constructor.  
  
 [!CODE [concrt-call-lambda#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-call-lambda#1)]  
  
 This example produces the following output.  
  
 **13 squared is 169.**   
## Example  
 The following example resembles the previous one, except that it uses the `call` class together with a function object (functor).  
  
 [!CODE [concrt-call-functor#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-call-functor#1)]  
  
## Example  
 The following example resembles the previous one, except that it uses the [std::bind1st](../Topic/bind1st%20Function.md) and [std::mem_fun](../Topic/mem_fun%20Function.md) functions to bind a `call` object to a class method.  
  
 Use this technique if you have to bind a `call` or `transformer` object to a specific class method instead of the function call operator, `operator()`.  
  
 [!CODE [concrt-call-method#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-call-method#1)]  
  
 You can also assign the result of the `bind1st` function to a [std::function](../VS_visualcpp/function-Class.md) object or use the `auto` keyword, as shown in the following example.  
  
 [!CODE [concrt-call-method#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-call-method#2)]  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `call.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc call.cpp**  
  
## See Also  
 [Asynchronous Agents Library](../VS_visualcpp/Asynchronous-Agents-Library.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)   
 [How to: Use transformer in a Data Pipeline](../VS_visualcpp/How-to--Use-transformer-in-a-Data-Pipeline.md)   
 [call Class](../VS_visualcpp/call-Class.md)   
 [transformer Class](../VS_visualcpp/transformer-Class.md)