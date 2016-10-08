---
title: "Walkthrough: Creating a Dataflow Agent"
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
ms.assetid: 9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130
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
# Walkthrough: Creating a Dataflow Agent
This document demonstrates how to create agent-based applications that are based on dataflow, instead of control flow.  
  
 *Control flow* refers to the execution order of operations in a program. Control flow is regulated by using control structures such as conditional statements, loops, and so on. Alternatively, *dataflow* refers to a programming model in which computations are made only when all required data is available. The dataflow programming model is related to the concept of message passing, in which independent components of a program communicate with one another by sending messages.  
  
 Asynchronous agents support both the control-flow and dataflow programming models. Although the control-flow model is appropriate in many cases, the dataflow model is appropriate in others, for example, when an agent receives data and performs an action that is based on the payload of that data.  
  
## Prerequisites  
 Read the following documents before you start this walkthrough:  
  
-   [Asynchronous Agents](../VS_visualcpp/Asynchronous-Agents.md)  
  
-   [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)  
  
-   [How to: Use a Message Block Filter](../VS_visualcpp/How-to--Use-a-Message-Block-Filter.md)  
  
##  <a name="top"></a> Sections  
 This walkthrough contains the following sections:  
  
-   [Creating a Basic Control-Flow Agent](#control-flow)  
  
-   [Creating a Basic Dataflow Agent](#dataflow)  
  
-   [Creating a Message-Logging Agent](#logging)  
  
##  <a name="control-flow"></a> Creating a Basic Control-Flow Agent  
 Consider the following example that defines the `control_flow_agent` class. The `control_flow_agent` class acts on three message buffers: one input buffer and two output buffers. The `run` method reads from the source message buffer in a loop and uses a conditional statement to direct the flow of program execution. The agent increments one counter for non-zero, negative values and increments another counter for non-zero, positive values. After the agent receives the sentinel value of zero, it sends the values of the counters to the output message buffers. The `negatives` and `positives` methods enable the application to read the counts of negative and positive values from the agent.  
  
 [!CODE [concrt-dataflow-agent#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#1)]  
  
 Although this example makes basic use of control flow in an agent, it demonstrates the serial nature of control-flow-based programming. Each message must be processed sequentially, even though multiple messages might be available in the input message buffer. The dataflow model enables both branches of the conditional statement to evaluate concurrently. The dataflow model also enables you to create more complex messaging networks that act on data as it becomes available.  
  
 [[Top](#top)]  
  
##  <a name="dataflow"></a> Creating a Basic Dataflow Agent  
 This section shows how to convert the `control_flow_agent` class to use the dataflow model to perform the same task.  
  
 The dataflow agent works by creating a network of message buffers, each of which serves a specific purpose. Certain message blocks use a filter function to accept or reject a message on the basis of its payload. A filter function ensures that a message block receives only certain values.  
  
#### To convert the control-flow agent to a dataflow agent  
  
1.  Copy the body of the `control_flow_agent` class to another class, for example, `dataflow_agent`. Alternatively, you can rename the `control_flow_agent` class.  
  
2.  Remove the body of the loop that calls `receive` from the `run` method.  
  
     [!CODE [concrt-dataflow-agent#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#2)]  
  
3.  In the `run` method, after the initialization of the variables `negative_count` and `positive_count`, add a `countdown_event` object that tracks the count of active operations.  
  
     [!CODE [concrt-dataflow-agent#6](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#6)]  
  
     The `countdown_event` class is shown later in this topic.  
  
4.  Create the message buffer objects that will participate in the dataflow network.  
  
     [!CODE [concrt-dataflow-agent#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#3)]  
  
5.  Connect the message buffers to form a network.  
  
     [!CODE [concrt-dataflow-agent#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#4)]  
  
6.  Wait for the `event` and `countdown event` objects to be set. These events signal that that the agent has received the sentinel value and that all operations have finished.  
  
     [!CODE [concrt-dataflow-agent#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#5)]  
  
 The following diagram shows the complete dataflow network for the `dataflow_agent` class:  
  
 ![The dataflow network](../VS_visualcpp/media/ConcRT_Dataflow.png "ConcRT_Dataflow")  
  
 The following table describes the members of the network.  
  
|Member|Description|  
|------------|-----------------|  
|`increment_active`|A [concurrency::transformer](../VS_visualcpp/transformer-Class.md) object that increments the active event counter and passes the input value to the rest of the network.|  
|`negatives`, `positives`|[concurrency::call](../VS_visualcpp/call-Class.md) objects that increment the count of numbers and decrements the active event counter. The objects each use a filter to accept either negative numbers or positive numbers.|  
|`sentinel`|A [concurrency::call](../VS_visualcpp/call-Class.md) object that accepts only the sentinel value of zero and decrements the active event counter.|  
|`connector`|A [concurrency::unbounded_buffer](../Topic/unbounded_buffer%20Class.md) object that connects the source message buffer to the internal network.|  
  
 Because the `run` method is called on a separate thread, other threads can send messages to the network before the network is fully connected. The `_source` data member is an `unbounded_buffer` object that buffers all input that is sent from the application to the agent. To make sure that the network processes all input messages, the agent first links the internal nodes of the network and then links the start of that network, `connector`, to the `_source` data member. This guarantees that messages do not get processed as the network is being formed.  
  
 Because the network in this example is based on dataflow, rather than on control-flow, the network must communicate to the agent that it has finished processing each input value and that the sentinel node has received its value. This example uses a `countdown_event` object to signal that all input values have been processed and a [concurrency::event](../VS_visualcpp/event-Class.md) object to indicate that the sentinel node has received its value. The `countdown_event` class uses an `event` object to signal when a counter value reaches zero. The head of the dataflow network increments the counter every time that it receives a value. Every terminal node of the network decrements the counter after it processes the input value. After the agent forms the dataflow network, it waits for the sentinel node to set the `event` object and for the `countdown_event` object to signal that its counter has reached zero.  
  
 The following example shows the `control_flow_agent`, `dataflow_agent`, and `countdown_event` classes. The `wmain` function creates a `control_flow_agent` and a `dataflow_agent` object and uses the `send_values` function to send a series of random values to the agents.  
  
 [!CODE [concrt-dataflow-agent#7](../CodeSnippet/VS_Snippets_ConcRT/concrt-dataflow-agent#7)]  
  
 This example produces the following sample output:  
  
 **Control-flow agent:**  
**There are 500523 negative numbers.**  
**There are 499477 positive numbers.**  
**Dataflow agent:**  
**There are 500523 negative numbers.**  
**There are 499477 positive numbers.**   
### Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `dataflow-agent.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc dataflow-agent.cpp**  
  
 [[Top](#top)]  
  
##  <a name="logging"></a> Creating a Message-Logging Agent  
 The following example shows the `log_agent` class, which resembles the `dataflow_agent` class. The `log_agent` class implements an asynchronous logging agent that writes log messages to a file and to the console. The `log_agent` class enables the application to categorize messages as informational, warning, or error. It also enables the application to specify whether each log category is written to a file, the console, or both. This example writes all log messages to a file and only error messages to the console.  
  
 [!CODE [concrt-log-filter#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-log-filter#1)]  
  
 This example writes the following output to the console.  
  
 **error: This is a sample error message.** This example also produces the log.txt file, which contains the following text.  
  
 **info: ===Logging started.===**  
**warning: This is a sample warning message.**  
**error: This is a sample error message.**  
**info: ===Logging finished.===**   
### Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `log-filter.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc log-filter.cpp**  
  
 [[Top](#top)]  
  
## See Also  
 [Concurrency Runtime Walkthroughs](../VS_visualcpp/Concurrency-Runtime-Walkthroughs.md)