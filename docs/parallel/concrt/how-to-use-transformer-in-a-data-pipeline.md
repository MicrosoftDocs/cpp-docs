---
title: "How to: Use transformer in a Data Pipeline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "transformer class, example"
  - "data pipelines, using transformer [Concurrency Runtime]"
  - "using transformer in data pipelines [Concurrency Runtime]"
ms.assetid: ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Use transformer in a Data Pipeline
This topic contains a basic example that shows how to use the [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) class in a data pipeline. For a more complete example that uses a data pipeline to perform image processing, see [Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 *Data pipelining* is a common pattern in concurrent programming. A data pipeline consists of a series of stages, where each stage performs work and then passes the result of that work to the next stage. The `transformer` class a key component in data pipelines because it receives an input value, performs work on that value, and then produces a result for another component to use.  
  
## Example  
 This example uses the following data pipeline to perform a series of transformations given an initial input value:  
  
1.  The first stage calculates the absolute value of its input.  
  
2.  The second stage calculates the square root of its input.  
  
3.  The third stage computes the square of its input.  
  
4.  The forth stage negates its input.  
  
5.  The fifth stage writes the final result to a message buffer.  
  
 Finally, the example prints the result of the pipeline to the console.  
  
 [!code-cpp[concrt-data-pipeline#1](../../parallel/concrt/codesnippet/cpp/how-to-use-transformer-in-a-data-pipeline_1.cpp)]  
  
 This example produces the following output:  
  
```Output  
The result is -42.  
```  
  
 It is common for a stage in a data pipeline to output a value whose type differs from its input value. In this example, the second stage takes a value of type `int` as its input and produces the square root of that value (a `double`) as its output.  
  
> [!NOTE]
>  The data pipeline in this example is for illustration. Because each transformation operation performs little work, the overhead that is required to perform message-passing can outweigh the benefits of using a data pipeline.  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `data-pipeline.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc data-pipeline.cpp**  
  
## See Also  
 [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)   
 [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)

