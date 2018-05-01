---
title: "How to: Provide Work Functions to the call and transformer Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "call class, example"
  - "using the transformer class [Concurrency Runtime]"
  - "using the call class [Concurrency Runtime]"
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Provide Work Functions to the call and transformer Classes
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This topic illustrates several ways to provide work functions to the [concurrency::call](../../parallel/concrt/reference/call-class.md) and [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) classes.  
  
 The first example shows how to pass a lambda expression to a `call` object. The second example shows how to pass a function object to a `call` object. The third example shows how to bind a class method to a `call` object.  
  
 For illustration, every example in this topic uses the `call` class. For an example that uses the `transformer` class, see [How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).  
  
## Example  
 The following example shows a common way to use the `call` class. This example passes a lambda function to the `call` constructor.  
  
 [!code-cpp[concrt-call-lambda#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-call-lambda/cpp/concrt-call-lambda.cpp#1)]  
  
 This example produces the following output.  
  
```Output  
13 squared is 169.  
```  
  
## Example  
 The following example resembles the previous one, except that it uses the `call` class together with a function object (functor).  
  
 [!code-cpp[concrt-call-functor#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-call-functor/cpp/concrt-call-functor.cpp#1)]  
  
## Example  
 The following example resembles the previous one, except that it uses the [std::bind1st](http://msdn.microsoft.com/library/4fd982e2-3588-47e9-b5a9-84ba4fff1923) and [std::mem_fun](http://msdn.microsoft.com/library/a4c82726-ab74-4265-845b-229004e63e9d) functions to bind a `call` object to a class method.  
  
 Use this technique if you have to bind a `call` or `transformer` object to a specific class method instead of the function call operator, `operator()`.  
  
 [!code-cpp[concrt-call-method#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-call-method/cpp/concrt-call-method.cpp#1)]  
  
 You can also assign the result of the `bind1st` function to a [std::function](../../standard-library/function-class.md) object or use the `auto` keyword, as shown in the following example.  
  
 [!code-cpp[concrt-call-method#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-call-method/cpp/concrt-call-method.cpp#2)]  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `call.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc call.cpp**  
  
## See Also  
 [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)   
 [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)   
 [How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)   
 [call Class](../../parallel/concrt/reference/call-class.md)   
 [transformer Class](../../parallel/concrt/reference/transformer-class.md)
