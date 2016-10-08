---
title: "Walkthrough: Using join to Prevent Deadlock"
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
ms.assetid: d791f697-bb93-463e-84bd-5df1651b7446
caps.latest.revision: 13
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
# Walkthrough: Using join to Prevent Deadlock
This topic uses the dining philosophers problem to illustrate how to use the [concurrency::join](../VS_visualcpp/join-Class.md) class to prevent deadlock in your application. In a software application, *deadlock* occurs when two or more processes each hold a resource and mutually wait for another process to release some other resource.  
  
 The dining philosophers problem is a specific example of the general set of problems that may occur when a set of resources is shared among multiple concurrent processes.  
  
## Prerequisites  
 Read the following topics before you start this walkthrough:  
  
-   [Asynchronous Agents](../VS_visualcpp/Asynchronous-Agents.md)  
  
-   [Walkthrough: Creating an Agent-Based Application](../VS_visualcpp/Walkthrough--Creating-an-Agent-Based-Application.md)  
  
-   [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)  
  
-   [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)  
  
-   [Synchronization Data Structures](../VS_visualcpp/Synchronization-Data-Structures.md)  
  
##  <a name="top"></a> Sections  
 This walkthrough contains the following sections:  
  
-   [The Dining Philosophers Problem](#problem)  
  
-   [A Naïve Implementation](#deadlock)  
  
-   [Using join to Prevent Deadlock](#solution)  
  
##  <a name="problem"></a> The Dining Philosophers Problem  
 The dining philosophers problem illustrates how deadlock occurs in an application. In this problem, five philosophers sit at a round table. Every philosopher alternates between thinking and eating. Every philosopher must share a chopstick with the neighbor to the left and another chopstick with the neighbor to the right. The following illustration shows this layout.  
  
 ![The Dining Philosophers Problem](../VS_visualcpp/media/Dining_PhilosophersProblem.png "Dining_PhilosophersProblem")  
  
 To eat, a philosopher must hold two chopsticks. If every philosopher holds just one chopstick and is waiting for another one, then no philosopher can eat and all starve.  
  
 [[Top](#top)]  
  
##  <a name="deadlock"></a> A Naïve Implementation  
 The following example shows a naïve implementation of the dining philosophers problem. The `philosopher` class, which derives from [concurrency::agent](../VS_visualcpp/agent-Class.md), enables each philosopher to act independently. The example uses a shared array of [concurrency::critical_section](../VS_visualcpp/critical_section-Class.md) objects to give each `philosopher` object exclusive access to a pair of chopsticks.  
  
 To relate the implementation to the illustration, the `philosopher` class represents one philosopher. An `int` variable represents each chopstick. The `critical_section` objects serve as holders on which the chopsticks rest. The `run` method simulates the life of the philosopher. The `think` method simulates the act of thinking and the `eat` method simulates the act of eating.  
  
 A `philosopher` object locks both `critical_section` objects to simulate the removal of the chopsticks from the holders before it calls the `eat` method. After the call to `eat`, the `philosopher` object returns the chopsticks to the holders by setting the `critical_section` objects back to the unlocked state.  
  
 The `pickup_chopsticks` method illustrates where deadlock can occur. If every `philosopher` object gains access to one of the locks, then no `philosopher` object can continue because the other lock is controlled by another `philosopher` object.  
  
## Example  
  
### Description  
  
### Code  
 [!CODE [concrt-philosophers-deadlock#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-deadlock#1)]  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `philosophers-deadlock.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc philosophers-deadlock.cpp**  
  
 [[Top](#top)]  
  
##  <a name="solution"></a> Using join to Prevent Deadlock  
 This section shows how to use message buffers and message-passing functions to eliminate the chance of deadlock.  
  
 To relate this example to the earlier one, the `philosopher` class replaces each `critical_section` object by using a [concurrency::unbounded_buffer](../Topic/unbounded_buffer%20Class.md) object and a `join` object. The `join` object serves as an arbiter that provides the chopsticks to the philosopher.  
  
 This example uses the `unbounded_buffer` class because when a target receives a message from an `unbounded_buffer` object, the message is removed from the message queue. This enables an `unbounded_buffer` object that holds a message to indicate that the chopstick is available. An `unbounded_buffer` object that holds no message indicates that the chopstick is being used.  
  
 This example uses a non-greedy `join` object because a non-greedy join gives each `philosopher` object access to both chopsticks only when both `unbounded_buffer` objects contain a message. A greedy join would not prevent deadlock because a greedy join accepts messages as soon as they become available. Deadlock can occur if all greedy `join` objects receive one of the messages but wait forever for the other to become available.  
  
 For more information about greedy and non-greedy joins, and the differences between the various message buffer types, see [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md).  
  
#### To prevent deadlock in this example  
  
1.  Remove the following code from the example.  
  
     [!CODE [concrt-philosophers-deadlock#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-deadlock#2)]  
  
2.  Change the type of the `_left` and `_right` data members of the `philosopher` class to `unbounded_buffer`.  
  
     [!CODE [concrt-philosophers-join#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#2)]  
  
3.  Modify the `philosopher` constructor to take `unbounded_buffer` objects as its parameters.  
  
     [!CODE [concrt-philosophers-join#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#3)]  
  
4.  Modify the `pickup_chopsticks` method to use a non-greedy `join` object to receive messages from the message buffers for both chopsticks.  
  
     [!CODE [concrt-philosophers-join#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#4)]  
  
5.  Modify the `putdown_chopsticks` method to release access to the chopsticks by sending a message to the message buffers for both chopsticks.  
  
     [!CODE [concrt-philosophers-join#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#5)]  
  
6.  Modify the `run` method to hold the results of the `pickup_chopsticks` method and to pass those results to the `putdown_chopsticks` method.  
  
     [!CODE [concrt-philosophers-join#6](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#6)]  
  
7.  Modify the declaration of the `chopsticks` variable in the `wmain` function to be an array of `unbounded_buffer` objects that each hold one message.  
  
     [!CODE [concrt-philosophers-join#7](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#7)]  
  
## Example  
  
### Description  
 The following shows the completed example that uses non-greedy `join` objects to eliminate the risk of deadlock.  
  
### Code  
 [!CODE [concrt-philosophers-join#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-philosophers-join#1)]  
  
### Comments  
 This example produces the following output.  
  
 **aristotle ate 50 times.**  
**descartes ate 50 times.**  
**hobbes ate 50 times.**  
**socrates ate 50 times.**  
**plato ate 50 times.**   
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `philosophers-join.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc philosophers-join.cpp**  
  
 [[Top](#top)]  
  
## See Also  
 [Concurrency Runtime Walkthroughs](../VS_visualcpp/Concurrency-Runtime-Walkthroughs.md)   
 [Asynchronous Agents Library](../VS_visualcpp/Asynchronous-Agents-Library.md)   
 [Asynchronous Agents](../VS_visualcpp/Asynchronous-Agents.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)   
 [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)   
 [Synchronization Data Structures](../VS_visualcpp/Synchronization-Data-Structures.md)