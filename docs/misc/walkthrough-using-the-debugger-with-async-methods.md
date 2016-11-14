---
title: "Walkthrough: Using the Debugger with Async Methods | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "await operator, using the debugger"
  - "async feature, using the debugger"
  - "Step Into command, at await operator"
  - "Step Over command, at await operator"
  - "Step Out command, within async method"
ms.assetid: 5adb2531-3f09-4b7e-8baa-29de80abee6e
caps.latest.revision: 23
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Walkthrough: Using the Debugger with Async Methods
By using the Async feature, you can call into asynchronous methods without using callbacks or splitting your code across multiple methods or lambda expressions. To make synchronous code asynchronous, you call an asynchronous method instead of a synchronous method and add a few keywords to the code. For more information, see [Asynchronous Programming with Async and Await](../Topic/Asynchronous%20Programming%20with%20Async%20and%20Await%20\(C%23%20and%20Visual%20Basic\).md).  
  
 In the Visual Studio debugger, you can use the **Step Into**, **Step Over**, and **Step Out** commands with the `Async` feature. You can also continue to use breakpoints, particularly to view the control flow at a statement that contains an await operator. In this walkthrough, you'll complete the following tasks, which you can run in any order.  
  
-   Demonstrate the control flow at an await statement by using breakpoints.  
  
-   Understand the behavior of the **Step Into** and **Step Over** commands at statements that contain an await operator.  
  
-   Understand the behavior of the **Step Out** command when you use it from within an async method.  
  
## Breakpoints to Show Control Flow  
 If you mark a method with the [Async](/dotnet/visual-basic/language-reference/modifiers/async) (Visual Basic) or [async](/dotnet/csharp/language-reference/keywords/async) (C#) modifier, you can use the [Await](/dotnet/visual-basic/language-reference/modifiers/async) (Visual Basic) or [await](/dotnet/csharp/language-reference/keywords/await) (C#) operator in the method. To create an await expression, you associate the await operator with a task. When an await expression is called for the task, the current method exits immediately and returns a different task. When the task that's associated with the await operator finishes, execution resumes in the same method. For more information, see [Control Flow in Async Programs](../Topic/Control%20Flow%20in%20Async%20Programs%20\(C%23%20and%20Visual%20Basic\).md).  
  
> [!NOTE]
>  An async method returns to the caller when either it encounters the first awaited object that’s not yet complete or it reaches the end of the async method, whichever occurs first.  
  
> [!NOTE]
>  The console apps in these examples use <xref:System.Threading.Tasks.Task.Wait%2A> method to prevent the application from terminating in `Main`. You shouldn’t use the <xref:System.Threading.Tasks.Task.Wait%2A> method outside of console applications  because a deadlock situation can occur.  
  
 The following procedure sets breakpoints to demonstrate what happens when the application reaches an await statement. You can also demonstrate the control flow by adding `Debug.WriteLine` statements.  
  
1.  Create a console application, and then paste the following code into it:  
  
     [!code-cs[csAsyncDebugging#1](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_1.cs)]
     [!code-vb[csAsyncDebugging#1](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_1.vb)]  
  
2.  Set debugging breakpoints on the three lines that end with a "set breakpoint" comment.  
  
3.  Choose the F5 key, or choose **Debug**, **Start Debugging** on the menu bar to run the application.  
  
     The application goes into the `ProcessAsync` method and breaks on the line that contains the await operator.  
  
4.  Choose the F5 key again.  
  
     Because the application stopped on a statement that contains an await operator, the application immediately exits the async method and returns a task. Therefore, the application exits the `ProcessAsync` method and breaks at the breakpoint in the calling method (`Main`).  
  
5.  Choose the F5 key again.  
  
     When the `DoSomethingAsync` method completes, the code resumes after the await statement in the calling method. Therefore, the application breaks at the breakpoint in the `ProcessAsync` method.  
  
     When `DoSomethingAsync` was initially awaited, the `ProcessAsync` method exited and returned a task. When the awaited `DoSomethingAsync` method then completed, the evaluation of the await statement produced the return value of `DoSomethingAsync`. The `DoSomethingAsync` method is defined to return a `Task (Of Integer)` in Visual Basic or `Task<int>` in C#, so the value in its return statement is an integer. For more information, see [Async Return Types](../Topic/Async%20Return%20Types%20\(C%23%20and%20Visual%20Basic\).md).  
  
### Obtaining and then awaiting a task  
 In the `ProcessAsync` method, the statement `Dim result = Await DoSomethingAsync()` (Visual Basic) or `var result = await DoSomethingAsync();` (C#) is a contraction of the following two statements:  
  
 [!code-cs[csAsyncDebugging#2](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_2.cs)]
 [!code-vb[csAsyncDebugging#2](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_2.vb)]  
  
 The first line of code calls the async method and returns a task. That task is associated with the await operator in the next line of code. The await statement exits the method (`ProcessAsync`) and returns a different task. When the task that’s associated with the await operator is complete, code resumes in the method (`ProcessAsync`) after the await statement.  
  
 When the await statement immediately returns a different task, that task is the returned argument of the async method that contains the await operator (`ProcessAsync`). The task that’s returned by the await includes code execution that occurs after the await in the same method, which is why that task is different from the task that’s associated with the await.  
  
## Step Into and Step Over  
 The **Step Into** command steps into a method, but the **Step Over** command executes the method call and then breaks on the next line of the calling method. For more information, see [Step into, over, or out of the code](/visual-studio/debugger/navigating-through-code-with-the-debugger).  
  
 The following procedure shows what occurs when you choose the **Step Into** or **Step Over** commands at an await statement.  
  
1.  Replace the code in the console application with the following code.  
  
     [!code-cs[csAsyncDebugging#3](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_3.cs)]
     [!code-vb[csAsyncDebugging#3](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_3.vb)]  
  
2.  Choose the F11 key, or choose **Debug**, **Step Into** on the menu bar to start a demonstration of the `Step Into` command at a statement that contains an await operator.  
  
     The application starts and breaks on the first line, which is `Sub Main()` in Visual Basic or the opening curly brace of the `Main` method in C#.  
  
3.  Choose the F11 key three more times.  
  
     The application should now be at the await statement in the `ProcessAsync` method.  
  
4.  Choose the F11 key.  
  
     The application goes into the `DoSomethingAsync` method and breaks on the first line. This behavior occurs even though, at the `await` statement, the application immediately returns to the calling method (`Main`).  
  
5.  Keep choosing the F11 key until the application returns to the await statement in the `ProcessAsync` method.  
  
6.  Choose the F11 key.  
  
     The application breaks on the line that follows the await statement.  
  
7.  On the menu bar, choose **Debug**, **Stop Debugging** to stop execution of the application.  
  
     The next steps demonstrate the **Step Over** command at an await statement.  
  
8.  Choose the F11 key four times, or choose **Debug**, **Step Into** on the menu bar four times.  
  
     The application should now be at the await statement in the `ProcessAsync` method.  
  
9. Choose the F10 key, or choose **Debug**, **Step Over** on the menu bar.  
  
     Execution breaks at the line that follows the await statement. This behavior occurs even though the application returns immediately to the calling method (`Main`) at the await statement. The `Step Over` command also steps over execution of the `DoSomethingAsync` method, as expected.  
  
10. On the menu bar, choose **Debug**, **Stop Debugging** to stop execution of the application.  
  
     As the following steps show, the behavior of the **Step Into** and **Step Over** commands differs slightly when the await operator is on a different line from the call to the async method.  
  
11. In the `ProcessAsync` method, replace the await statement with the following code. The original await statement is a contraction of the following two statements.  
  
     [!code-cs[csAsyncDebugging#2](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_2.cs)]
     [!code-vb[csAsyncDebugging#2](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_2.vb)]  
  
12. Choose the F11 key or choose **Debug**, **Step Into** on the menu bar multiple times to start execution and step through the code.  
  
     At the call to `DoSomethingAsync`, the **Step Into** command breaks in the `DoSomethingAsync` method, while the **Step Over** command goes to the next statement, as expected. At the await statement, both commands break at the statement that follows the await.  
  
## Step Out  
 In methods that aren't async, the **Step Out** command breaks in the calling method on the code that follows the method call. For async methods, the logic for where the execution breaks in the calling method is more complex, and that logic depends on whether the **Step Out** command is on the first line of the async method.  
  
1.  Replace the code in the console application with the following code.  
  
     [!code-cs[csAsyncDebugging#4](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_4.cs)]
     [!code-vb[csAsyncDebugging#4](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_4.vb)]  
  
2.  Set a breakpoint on the `Debug.WriteLine("before")` line in the `DoSomethingAsync` method.  
  
     This is to demonstrate the behavior of the **Step Out** command from a line in an async method that isn't the first line.  
  
3.  Choose the F5 key or choose **Debug**, **Start Debugging** on the menu bar to start the application.  
  
     The code breaks on `Debug.WriteLine("before")` in the `DoSomethingAsync` method.  
  
4.  Choose the Shift+F11 keys, or choose **Debug**, **Step Out** on the menu bar.  
  
     The application breaks in the calling method at the await statement for the task that’s associated with the current method. As a result, the application breaks on the await statement in the `ProcessAsync` method. The application doesn’t break on `Dim z = 0` (Visual Basic) or `int z = 0;` (C#), which is the code that follows the call to the `DoSomethingAsync` method.  
  
5.  Choose **Debug**, **Stop Debugging** on the menu bar to stop execution of the application.  
  
     The next steps demonstrate what happens when you **Step Out** from the first line of an async method.  
  
6.  Remove the existing breakpoint, and add a breakpoint on the first line of the `DoSomethingAsync` method.  
  
     In C#, add the breakpoint on the opening curly brace of the `DoSomethingAsync` method. In Visual Basic, add the breakpoint on the line that contains `Async Function DoSomethingAsync() As Task(Of Integer)`.  
  
7.  Choose the F5 key to start the application.  
  
     The code breaks on the first line of the `DoSomethingAsync` method.  
  
8.  On the menu bar, choose **Debug**, **Windows**, **Output**.  
  
     The **Output** window opens.  
  
9. Choose the Shift+F11 keys, or choose **Debug**, **Step Out** on the menu bar.  
  
     The application resumes until the async method reaches its first await, and then the application breaks at the calling statement. As a result, the application breaks on `Dim the Task = DoSomethingAsync()` (Visual Basic) or `var theTask = DoSomethingAsync();` (C#). The "before" message has appeared in the Output window, but the "after" message hasn't yet appeared.  
  
10. Choose the F5 key to continue to run the application.  
  
     The application continues with the statement that follows the await statement in the called async function (`DoSomethingAsync`). The "after" message appears in the Output window.  
  
## See Also  
 [Navigating through Code with the Debugger](/visual-studio/debugger/navigating-through-code-with-the-debugger)