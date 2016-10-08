---
title: "Walkthrough: Removing Work from a User-Interface Thread"
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
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Walkthrough: Removing Work from a User-Interface Thread
This document demonstrates how to use the Concurrency Runtime to move the work that is performed by the user-interface (UI) thread in a Microsoft Foundation Classes (MFC) application to a worker thread. This document also demonstrates how to improve the performance of a lengthy drawing operation.  
  
 Removing work from the UI thread by offloading blocking operations, for example, drawing, to worker threads can improve the responsiveness of your application. This walkthrough uses a drawing routine that generates the Mandelbrot fractal to demonstrate a lengthy blocking operation. The generation of the Mandelbrot fractal is also a good candidate for parallelization because the computation of each pixel is independent of all other computations.  
  
## Prerequisites  
 Read the following topics before you start this walkthrough:  
  
-   [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)  
  
-   [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)  
  
-   [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)  
  
-   [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)  
  
-   [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)  
  
 We also recommend that you understand the basics of MFC application development and [!INCLUDE[ndptecgdiplus](../Token/ndptecgdiplus_md.md)] before you start this walkthrough. For more information about MFC, see [MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md). For more information about [!INCLUDE[ndptecgdiplus](../Token/ndptecgdiplus_md.md)], see [GDI+](_gdiplus_GDI_start_cpp).  
  
##  <a name="top"></a> Sections  
 This walkthrough contains the following sections:  
  
-   [Creating the MFC Application](#application)  
  
-   [Implementing the Serial Version of the Mandelbrot Application](#serial)  
  
-   [Removing Work from the User-Interface Thread](#removing-work)  
  
-   [Improving Drawing Performance](#performance)  
  
-   [Adding Support for Cancellation](#cancellation)  
  
##  <a name="application"></a> Creating the MFC Application  
 This section describes how to create the basic MFC application.  
  
### To create a Visual C++ MFC application  
  
1.  On the **File** menu, click **New**, and then click **Project**.  
  
2.  In the **New Project** dialog box, in the **Installed Templates** pane, select **Visual C++**, and then, in the **Templates** pane, select **MFC Application**. Type a name for the project, for example, `Mandelbrot`, and then click **OK** to display the **MFC Application Wizard**.  
  
3.  In the **Application Type** pane, select **Single document**. Ensure that the **Document/View architecture support** check box is cleared.  
  
4.  Click **Finish** to create the project and close the **MFC Application Wizard**.  
  
     Verify that the application was created successfully by building and running it. To build the application, on the **Build** menu, click **Build Solution**. If the application builds successfully, run the application by clicking **Start Debugging** on the **Debug** menu.  
  
##  <a name="serial"></a> Implementing the Serial Version of the Mandelbrot Application  
 This section describes how to draw the Mandelbrot fractal. This version draws the Mandelbrot fractal to a [!INCLUDE[ndptecgdiplus](../Token/ndptecgdiplus_md.md)] [Bitmap](https://msdn.microsoft.com/en-us/library/ms534420.aspx) object and then copies the contents of that bitmap to the client window.  
  
#### To implement the serial version of the Mandelbrot application  
  
1.  In stdafx.h, add the following `#include` directive:  
  
     [!CODE [concrt-mandelbrot#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#1)]  
  
2.  In ChildView.h, after the `pragma` directive, define the `BitmapPtr` type. The `BitmapPtr` type enables a pointer to a `Bitmap` object to be shared by multiple components. The `Bitmap` object is deleted when it is no longer referenced by any component.  
  
     [!CODE [concrt-mandelbrot#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#2)]  
  
3.  In ChildView.h, add the following code to the `protected` section of the `CChildView` class:  
  
     [!CODE [concrt-mandelbrot#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#3)]  
  
4.  In ChildView.cpp, comment out or remove the following lines.  
  
     [!CODE [concrt-mandelbrot#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#4)]  
  
     In Debug builds, this step prevents the application from using the `DEBUG_NEW` allocator, which is incompatible with [!INCLUDE[ndptecgdiplus](../Token/ndptecgdiplus_md.md)].  
  
5.  In ChildView.cpp, add a `using` directive to the `Gdiplus` namespace.  
  
     [!CODE [concrt-mandelbrot#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#5)]  
  
6.  Add the following code to the constructor and destructor of the `CChildView` class to initialize and shut down [!INCLUDE[ndptecgdiplus](../Token/ndptecgdiplus_md.md)].  
  
     [!CODE [concrt-mandelbrot#6](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#6)]  
  
7.  Implement the `CChildView::DrawMandelbrot` method. This method draws the Mandelbrot fractal to the specified `Bitmap` object.  
  
     [!CODE [concrt-mandelbrot#7](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#7)]  
  
8.  Implement the `CChildView::OnPaint` method. This method calls `CChildView::DrawMandelbrot` and then copies the contents of the `Bitmap` object to the window.  
  
     [!CODE [concrt-mandelbrot#8](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#8)]  
  
9. Verify that the application was updated successfully by building and running it.  
  
 The following illustration shows the results of the Mandelbrot application.  
  
 ![The Mandelbrot Application](../VS_visualcpp/media/Mandelbrot.png "Mandelbrot")  
  
 Because the computation for each pixel is computationally expensive, the UI thread cannot process additional messages until the overall computation finishes. This could decrease responsiveness in the application. However, you can relieve this problem by removing work from the UI thread.  
  
 [[Top](#top)]  
  
##  <a name="removing-work"></a> Removing Work from the UI Thread  
 This section shows how to remove the drawing work from the UI thread in the Mandelbrot application. By moving drawing work from the UI thread to a worker thread, the UI thread can process messages as the worker thread generates the image in the background.  
  
 The Concurrency Runtime provides three ways to run tasks: [task groups](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md), [asynchronous agents](../VS_visualcpp/Asynchronous-Agents.md), and [lightweight tasks](../VS_visualcpp/Task-Scheduler--Concurrency-Runtime-.md). Although you can use any one of these mechanisms to remove work from the UI thread, this example uses a [concurrency::task_group](../Topic/task_group%20Class.md) object because task groups support cancellation. This walkthrough later uses cancellation to reduce the amount of work that is performed when the client window is resized, and to perform cleanup when the window is destroyed.  
  
 This example also uses a [concurrency::unbounded_buffer](../Topic/unbounded_buffer%20Class.md) object to enable the UI thread and the worker thread to communicate with each other. After the worker thread produces the image, it sends a pointer to the `Bitmap` object to the `unbounded_buffer` object and then posts a paint message to the UI thread. The UI thread then receives from the `unbounded_buffer` object the `Bitmap` object and draws it to the client window.  
  
#### To remove the drawing work from the UI thread  
  
1.  In stdafx.h, add the following `#include` directives:  
  
     [!CODE [concrt-mandelbrot#101](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#101)]  
  
2.  In ChildView.h, add `task_group` and `unbounded_buffer` member variables to the `protected` section of the `CChildView` class. The `task_group` object holds the tasks that perform drawing; the `unbounded_buffer` object holds the completed Mandelbrot image.  
  
     [!CODE [concrt-mandelbrot#102](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#102)]  
  
3.  In ChildView.cpp, add a `using` directive to the `concurrency` namespace.  
  
     [!CODE [concrt-mandelbrot#103](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#103)]  
  
4.  In the `CChildView::DrawMandelbrot` method, after the call to `Bitmap::UnlockBits`, call the [concurrency::send](../Topic/send%20Function.md) function to pass the `Bitmap` object to the UI thread. Then post a paint message to the UI thread and invalidate the client area.  
  
     [!CODE [concrt-mandelbrot#104](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#104)]  
  
5.  Update the `CChildView::OnPaint` method to receive the updated `Bitmap` object and draw the image to the client window.  
  
     [!CODE [concrt-mandelbrot#105](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#105)]  
  
     The `CChildView::OnPaint` method creates a task to generate the Mandelbrot image if one does not exist in the message buffer. The message buffer will not contain a `Bitmap` object in cases such as the initial paint message and when another window is moved in front of the client window.  
  
6.  Verify that the application was updated successfully by building and running it.  
  
 The UI is now more responsive because the drawing work is performed in the background.  
  
 [[Top](#top)]  
  
##  <a name="performance"></a> Improving Drawing Performance  
 The generation of the Mandelbrot fractal is a good candidate for parallelization because the computation of each pixel is independent of all other computations. To parallelize the drawing procedure, convert the outer `for` loop in the `CChildView::DrawMandelbrot` method to a call to the [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm, as follows.  
  
 [!CODE [concrt-mandelbrot#301](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#301)]  
  
 Because the computation of each bitmap element is independent, you do not have to synchronize the drawing operations that access the bitmap memory. This enables performance to scale as the number of available processors increases.  
  
 [[Top](#top)]  
  
##  <a name="cancellation"></a> Adding Support for Cancellation  
 This section describes how to handle window resizing and how to cancel any active drawing tasks when the window is destroyed.  
  
 The document [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md) explains how cancellation works in the runtime. Cancellation is cooperative; therefore, it does not occur immediately. To stop a canceled task, the runtime throws an internal exception during a subsequent call from the task into the runtime. The previous section shows how to use the `parallel_for` algorithm to improve the performance of the drawing task. The call to `parallel_for` enables the runtime to stop the task, and therefore enables cancellation to work.  
  
### Cancelling Active Tasks  
 The Mandelbrot application creates `Bitmap` objects whose dimensions match the size of the client window. Every time the client window is resized, the application creates an additional background task to generate an image for the new window size. The application does not require these intermediate images; it requires only the image for the final window size. To prevent the application from performing this additional work, you can cancel any active drawing tasks in the message handlers for the `WM_SIZE` and `WM_SIZING` messages and then reschedule drawing work after the window is resized.  
  
 To cancel active drawing tasks when the window is resized, the application calls the [concurrency::task_group::cancel](../Topic/task_group::cancel%20Method.md) method in the handlers for the `WM_SIZING` and `WM_SIZE` messages. The handler for the `WM_SIZE` message also calls the [concurrency::task_group::wait](../Topic/task_group::wait%20Method.md) method to wait for all active tasks to complete and then reschedules the drawing task for the updated window size.  
  
 When the client window is destroyed, it is good practice to cancel any active drawing tasks. Canceling any active drawing tasks makes sure that worker threads do not post messages to the UI thread after the client window is destroyed. The application cancels any active drawing tasks in the handler for the `WM_DESTROY` message.  
  
### Responding to Cancellation  
 The `CChildView::DrawMandelbrot` method, which performs the drawing task, must respond to cancellation. Because the runtime uses exception handling to cancel tasks, the `CChildView::DrawMandelbrot` method must use an exception-safe mechanism to guarantee that all resources are correctly cleaned-up. This example uses the *Resource Acquisition Is Initialization* (RAII) pattern to guarantee that the bitmap bits are unlocked when the task is canceled.  
  
##### To add support for cancellation in the Mandelbrot application  
  
1.  In ChildView.h, in the `protected` section of the `CChildView` class, add declarations for the `OnSize`, `OnSizing`, and `OnDestroy` message map functions.  
  
     [!CODE [concrt-mandelbrot#201](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#201)]  
  
2.  In ChildView.cpp, modify the message map to contain handlers for the `WM_SIZE`, `WM_SIZING`, and `WM_DESTROY` messages.  
  
     [!CODE [concrt-mandelbrot#202](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#202)]  
  
3.  Implement the `CChildView::OnSizing` method. This method cancels any existing drawing tasks.  
  
     [!CODE [concrt-mandelbrot#203](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#203)]  
  
4.  Implement the `CChildView::OnSize` method. This method cancels any existing drawing tasks and creates a new drawing task for the updated client window size.  
  
     [!CODE [concrt-mandelbrot#204](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#204)]  
  
5.  Implement the `CChildView::OnDestroy` method. This method cancels any existing drawing tasks.  
  
     [!CODE [concrt-mandelbrot#205](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#205)]  
  
6.  In ChildView.cpp, define the `scope_guard` class, which implements the RAII pattern.  
  
     [!CODE [concrt-mandelbrot#206](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#206)]  
  
7.  Add the following code to the `CChildView::DrawMandelbrot` method after the call to `Bitmap::LockBits`:  
  
     [!CODE [concrt-mandelbrot#207](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#207)]  
  
     This code handles cancellation by creating a `scope_guard` object. When the object leaves scope, it unlocks the bitmap bits.  
  
8.  Modify the end of the `CChildView::DrawMandelbrot` method to dismiss the `scope_guard` object after the bitmap bits are unlocked, but before any messages are sent to the UI thread. This ensures that the UI thread is not updated before the bitmap bits are unlocked.  
  
     [!CODE [concrt-mandelbrot#208](../CodeSnippet/VS_Snippets_ConcRT/concrt-mandelbrot#208)]  
  
9. Verify that the application was updated successfully by building and running it.  
  
 When you resize the window, drawing work is performed only for the final window size. Any active drawing tasks are also canceled when the window is destroyed.  
  
 [[Top](#top)]  
  
## See Also  
 [Concurrency Runtime Walkthroughs](../VS_visualcpp/Concurrency-Runtime-Walkthroughs.md)   
 [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)   
 [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)   
 [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)   
 [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)   
 [MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md)