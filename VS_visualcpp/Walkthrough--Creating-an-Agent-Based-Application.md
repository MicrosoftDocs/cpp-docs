---
title: "Walkthrough: Creating an Agent-Based Application"
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
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
caps.latest.revision: 21
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
# Walkthrough: Creating an Agent-Based Application
This topic describes how to create a basic agent-based application. In this walkthrough, you can create an agent that reads data from a text file asynchronously. The application uses the Adler-32 checksum algorithm to calculate the checksum of the contents of that file.  
  
## Prerequisites  
 You must understand the following topics to complete this walkthrough:  
  
-   [Asynchronous Agents](../VS_visualcpp/Asynchronous-Agents.md)  
  
-   [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)  
  
-   [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)  
  
-   [Synchronization Data Structures](../VS_visualcpp/Synchronization-Data-Structures.md)  
  
##  <a name="top"></a> Sections  
 This walkthrough demonstrates how to perform the following tasks:  
  
-   [Creating the Console Application](#createApplication)  
  
-   [Creating the file_reader Class](#createAgentClass)  
  
-   [Using the file_reader Class in the Application](#useAgentClass)  
  
##  <a name="createApplication"></a> Creating the Console Application  
 This section shows how to create a Visual C++ console application that references the header files that the program will use.  
  
#### To create a Visual C++ application by using the Win32 Console Application Wizard  
  
1.  On the **File** menu, click **New**, and then click **Project** to display the **New Project** dialog box.  
  
2.  In the **New Project** dialog box, select the **Visual C++** node in the **Project types** pane and then select **Win32 Console Application** in the **Templates** pane. Type a name for the project, for example, `BasicAgent`, and then click **OK** to display the **Win32 Console Application Wizard**.  
  
3.  In the **Win32 Console Application Wizard** dialog box, click **Finish**.  
  
4.  In stdafx.h, add the following code.  
  
     [!CODE [concrt-basic-agent#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#1)]  
  
     The header file agents.h contains the functionality of the [concurrency::agent](../VS_visualcpp/agent-Class.md) class.  
  
5.  Verify that the application was created successfully by building and running it. To build the application, on the **Build** menu, click **Build Solution**. If the application builds successfully, run the application by clicking **Start Debugging** on the **Debug** menu.  
  
 [[Top](#top)]  
  
##  <a name="createAgentClass"></a> Creating the file_reader Class  
 This section shows how to create the `file_reader` class. The runtime schedules each agent to perform work in its own context. Therefore, you can create an agent that performs work synchronously, but interacts with other components asynchronously. The `file_reader` class reads data from a given input file and sends data from that file to a given target component.  
  
#### To create the file_reader class  
  
1.  Add a new C++ header file to your project. To do so, right-click the **Header Files** node in **Solution Explorer**, click **Add**, and then click **New Item**. In the **Templates** pane, select **Header File (.h)**. In the **Add New Item** dialog box, type `file_reader.h` in the **Name** box and then click **Add**.  
  
2.  In file_reader.h, add the following code.  
  
     [!CODE [concrt-basic-agent#17](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#17)]  
  
3.  In file_reader.h, create a class that is named `file_reader` that derives from `agent`.  
  
     [!CODE [concrt-basic-agent#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#2)]  
  
4.  Add the following data members to the `private` section of your class.  
  
     [!CODE [concrt-basic-agent#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#3)]  
  
     The `_file_name` member is the file name that the agent reads from. The `_target` member is a [concurrency::ITarget](../VS_visualcpp/ITarget-Class.md) object that the agent writes the contents of the file to. The `_error` member holds any error that occurs during the life of the agent.  
  
5.  Add the following code for the `file_reader` constructors to the `public` section of the `file_reader` class.  
  
     [!CODE [concrt-basic-agent#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#4)]  
  
     Each constructor overload sets the `file_reader` data members. The second and third constructor overload enables your application to use a specific scheduler with your agent. The first overload uses the default scheduler with your agent.  
  
6.  Add the `get_error` method to the public section of the `file_reader` class.  
  
     [!CODE [concrt-basic-agent#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#5)]  
  
     The `get_error` method retrieves any error that occurs during the life of the agent.  
  
7.  Implement the [concurrency::agent::run](../Topic/agent::run%20Method.md) method in the `protected` section of your class.  
  
     [!CODE [concrt-basic-agent#6](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#6)]  
  
     The `run` method opens the file and reads data from it. The `run` method uses exception handling to capture any errors that occur during file processing.  
  
     Each time this method reads data from the file, it calls the [concurrency::asend](../Topic/asend%20Function.md) function to send that data to the target buffer. It sends the empty string to its target buffer to indicate the end of processing.  
  
 The following example shows the complete contents of file_reader.h.  
  
 [!CODE [concrt-basic-agent#7](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#7)]  
  
 [[Top](#top)]  
  
##  <a name="useAgentClass"></a> Using the file_reader Class in the Application  
 This section shows how to use the `file_reader` class to read the contents of a text file. It also shows how to create a [concurrency::call](../VS_visualcpp/call-Class.md) object that receives this file data and calculates its Adler-32 checksum.  
  
#### To use the file_reader class in your application  
  
1.  In BasicAgent.cpp, add the following `#include` statement.  
  
     [!CODE [concrt-basic-agent#8](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#8)]  
  
2.  In BasicAgent.cpp, add the following `using` directives.  
  
     [!CODE [concrt-basic-agent#9](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#9)]  
  
3.  In the `_tmain` function, create a [concurrency::event](../VS_visualcpp/event-Class.md) object that signals the end of processing.  
  
     [!CODE [concrt-basic-agent#10](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#10)]  
  
4.  Create a `call` object that updates the checksum when it receives data.  
  
     [!CODE [concrt-basic-agent#11](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#11)]  
  
     This `call` object also sets the `event` object when it receives the empty string to signal the end of processing.  
  
5.  Create a `file_reader` object that reads from the file test.txt and writes the contents of that file to the `call` object.  
  
     [!CODE [concrt-basic-agent#12](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#12)]  
  
6.  Start the agent and wait for it to finish.  
  
     [!CODE [concrt-basic-agent#13](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#13)]  
  
7.  Wait for the `call` object to receive all data and finish.  
  
     [!CODE [concrt-basic-agent#14](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#14)]  
  
8.  Check the file reader for errors. If no error occurred, calculate the final Adler-32 sum and print the sum to the console.  
  
     [!CODE [concrt-basic-agent#15](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#15)]  
  
 The following example shows the complete BasicAgent.cpp file.  
  
 [!CODE [concrt-basic-agent#16](../CodeSnippet/VS_Snippets_ConcRT/concrt-basic-agent#16)]  
  
 [[Top](#top)]  
  
## Sample Input  
 This is the sample contents of the input file text.txt:  
  
 **The quick brown fox**  
**jumps**  
**over the lazy dog**   
## Sample Output  
 When used with the sample input, this program produces the following output:  
  
 **Adler-32 sum is fefb0d75**   
## Robust Programming  
 To prevent concurrent access to data members, we recommend that you add methods that perform work to the `protected` or `private` section of your class. Only add methods that send or receive messages to or from the agent to the `public` section of your class.  
  
 Always call the [concurrency::agent::done](../Topic/agent::done%20Method.md) method to move your agent to the completed state. You typically call this method before you return from the `run` method.  
  
## Next Steps  
 For another example of an agent-based application, see [Walkthrough: Using join to Prevent Deadlock](../VS_visualcpp/Walkthrough--Using-join-to-Prevent-Deadlock.md).  
  
## See Also  
 [Asynchronous Agents Library](../VS_visualcpp/Asynchronous-Agents-Library.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)   
 [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)   
 [Synchronization Data Structures](../VS_visualcpp/Synchronization-Data-Structures.md)   
 [Walkthrough: Using join to Prevent Deadlock](../VS_visualcpp/Walkthrough--Using-join-to-Prevent-Deadlock.md)