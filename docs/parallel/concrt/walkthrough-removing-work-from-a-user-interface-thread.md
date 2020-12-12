---
description: "Learn more about: Walkthrough: Removing Work from a User-Interface Thread"
title: "Walkthrough: Removing Work from a User-Interface Thread"
ms.date: "08/19/2019"
helpviewer_keywords: ["user-interface threads, removing work from [Concurrency Runtime]", "removing work from user-interface threads [Concurrency Runtime]"]
ms.assetid: a4a65cc2-b3bc-4216-8fa8-90529491de02
---
# Walkthrough: Removing Work from a User-Interface Thread

This document demonstrates how to use the Concurrency Runtime to move the work that is performed by the user-interface (UI) thread in a Microsoft Foundation Classes (MFC) application to a worker thread. This document also demonstrates how to improve the performance of a lengthy drawing operation.

Removing work from the UI thread by offloading blocking operations, for example, drawing, to worker threads can improve the responsiveness of your application. This walkthrough uses a drawing routine that generates the Mandelbrot fractal to demonstrate a lengthy blocking operation. The generation of the Mandelbrot fractal is also a good candidate for parallelization because the computation of each pixel is independent of all other computations.

## Prerequisites

Read the following topics before you start this walkthrough:

- [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)

- [Message Passing Functions](../../parallel/concrt/message-passing-functions.md)

- [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)

- [Cancellation in the PPL](cancellation-in-the-ppl.md)

We also recommend that you understand the basics of MFC application development and GDI+ before you start this walkthrough. For more information about MFC, see [MFC Desktop Applications](../../mfc/mfc-desktop-applications.md). For more information about GDI+, see [GDI+](/windows/win32/gdiplus/-gdiplus-gdi-start).

## <a name="top"></a> Sections

This walkthrough contains the following sections:

- [Creating the MFC Application](#application)

- [Implementing the Serial Version of the Mandelbrot Application](#serial)

- [Removing Work from the User-Interface Thread](#removing-work)

- [Improving Drawing Performance](#performance)

- [Adding Support for Cancellation](#cancellation)

## <a name="application"></a> Creating the MFC Application

This section describes how to create the basic MFC application.

### To create a Visual C++ MFC application

1. Use the **MFC Application Wizard** to create an MFC application with all the default settings. See [Walkthrough: Using the New MFC Shell Controls](../../mfc/walkthrough-using-the-new-mfc-shell-controls.md) for instructions on how to open the wizard for your version of Visual Studio.

1. Type a name for the project, for example, `Mandelbrot`, and then click **OK** to display the **MFC Application Wizard**.

1. In the **Application Type** pane, select **Single document**. Ensure that the **Document/View architecture support** check box is cleared.

1. Click **Finish** to create the project and close the **MFC Application Wizard**.

   Verify that the application was created successfully by building and running it. To build the application, on the **Build** menu, click **Build Solution**. If the application builds successfully, run the application by clicking **Start Debugging** on the **Debug** menu.

## <a name="serial"></a> Implementing the Serial Version of the Mandelbrot Application

This section describes how to draw the Mandelbrot fractal. This version draws the Mandelbrot fractal to a GDI+ [Bitmap](/windows/win32/api/gdiplusheaders/nl-gdiplusheaders-bitmap) object and then copies the contents of that bitmap to the client window.

#### To implement the serial version of the Mandelbrot application

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier), add the following `#include` directive:

   [!code-cpp[concrt-mandelbrot#1](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_1.h)]

1. In ChildView.h, after the `pragma` directive, define the `BitmapPtr` type. The `BitmapPtr` type enables a pointer to a `Bitmap` object to be shared by multiple components. The `Bitmap` object is deleted when it is no longer referenced by any component.

   [!code-cpp[concrt-mandelbrot#2](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_2.h)]

1. In ChildView.h, add the following code to the **`protected`** section of the `CChildView` class:

   [!code-cpp[concrt-mandelbrot#3](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_3.h)]

1. In ChildView.cpp, comment out or remove the following lines.

   [!code-cpp[concrt-mandelbrot#4](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_4.cpp)]

   In Debug builds, this step prevents the application from using the `DEBUG_NEW` allocator, which is incompatible with GDI+.

1. In ChildView.cpp, add a **`using`** directive to the `Gdiplus` namespace.

   [!code-cpp[concrt-mandelbrot#5](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_5.cpp)]

1. Add the following code to the constructor and destructor of the `CChildView` class to initialize and shut down GDI+.

   [!code-cpp[concrt-mandelbrot#6](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_6.cpp)]

1. Implement the `CChildView::DrawMandelbrot` method. This method draws the Mandelbrot fractal to the specified `Bitmap` object.

   [!code-cpp[concrt-mandelbrot#7](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_7.cpp)]

1. Implement the `CChildView::OnPaint` method. This method calls `CChildView::DrawMandelbrot` and then copies the contents of the `Bitmap` object to the window.

   [!code-cpp[concrt-mandelbrot#8](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_8.cpp)]

1. Verify that the application was updated successfully by building and running it.

The following illustration shows the results of the Mandelbrot application.

![The Mandelbrot Application](../../parallel/concrt/media/mandelbrot.png "The Mandelbrot Application")

Because the computation for each pixel is computationally expensive, the UI thread cannot process additional messages until the overall computation finishes. This could decrease responsiveness in the application. However, you can relieve this problem by removing work from the UI thread.

[[Top](#top)]

## <a name="removing-work"></a> Removing Work from the UI Thread

This section shows how to remove the drawing work from the UI thread in the Mandelbrot application. By moving drawing work from the UI thread to a worker thread, the UI thread can process messages as the worker thread generates the image in the background.

The Concurrency Runtime provides three ways to run tasks: [task groups](../../parallel/concrt/task-parallelism-concurrency-runtime.md), [asynchronous agents](../../parallel/concrt/asynchronous-agents.md), and [lightweight tasks](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Although you can use any one of these mechanisms to remove work from the UI thread, this example uses a [concurrency::task_group](reference/task-group-class.md) object because task groups support cancellation. This walkthrough later uses cancellation to reduce the amount of work that is performed when the client window is resized, and to perform cleanup when the window is destroyed.

This example also uses a [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) object to enable the UI thread and the worker thread to communicate with each other. After the worker thread produces the image, it sends a pointer to the `Bitmap` object to the `unbounded_buffer` object and then posts a paint message to the UI thread. The UI thread then receives from the `unbounded_buffer` object the `Bitmap` object and draws it to the client window.

#### To remove the drawing work from the UI thread

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier), add the following `#include` directives:

   [!code-cpp[concrt-mandelbrot#101](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_9.h)]

1. In ChildView.h, add `task_group` and `unbounded_buffer` member variables to the **`protected`** section of the `CChildView` class. The `task_group` object holds the tasks that perform drawing; the `unbounded_buffer` object holds the completed Mandelbrot image.

   [!code-cpp[concrt-mandelbrot#102](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_10.h)]

1. In ChildView.cpp, add a **`using`** directive to the `concurrency` namespace.

   [!code-cpp[concrt-mandelbrot#103](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_11.cpp)]

1. In the `CChildView::DrawMandelbrot` method, after the call to `Bitmap::UnlockBits`, call the [concurrency::send](reference/concurrency-namespace-functions.md#send) function to pass the `Bitmap` object to the UI thread. Then post a paint message to the UI thread and invalidate the client area.

   [!code-cpp[concrt-mandelbrot#104](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_12.cpp)]

1. Update the `CChildView::OnPaint` method to receive the updated `Bitmap` object and draw the image to the client window.

   [!code-cpp[concrt-mandelbrot#105](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_13.cpp)]

   The `CChildView::OnPaint` method creates a task to generate the Mandelbrot image if one does not exist in the message buffer. The message buffer will not contain a `Bitmap` object in cases such as the initial paint message and when another window is moved in front of the client window.

1. Verify that the application was updated successfully by building and running it.

The UI is now more responsive because the drawing work is performed in the background.

[[Top](#top)]

## <a name="performance"></a> Improving Drawing Performance

The generation of the Mandelbrot fractal is a good candidate for parallelization because the computation of each pixel is independent of all other computations. To parallelize the drawing procedure, convert the outer **`for`** loop in the `CChildView::DrawMandelbrot` method to a call to the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm, as follows.

[!code-cpp[concrt-mandelbrot#301](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_14.cpp)]

Because the computation of each bitmap element is independent, you do not have to synchronize the drawing operations that access the bitmap memory. This enables performance to scale as the number of available processors increases.

[[Top](#top)]

## <a name="cancellation"></a> Adding Support for Cancellation

This section describes how to handle window resizing and how to cancel any active drawing tasks when the window is destroyed.

The document [Cancellation in the PPL](cancellation-in-the-ppl.md) explains how cancellation works in the runtime. Cancellation is cooperative; therefore, it does not occur immediately. To stop a canceled task, the runtime throws an internal exception during a subsequent call from the task into the runtime. The previous section shows how to use the `parallel_for` algorithm to improve the performance of the drawing task. The call to `parallel_for` enables the runtime to stop the task, and therefore enables cancellation to work.

### Cancelling Active Tasks

The Mandelbrot application creates `Bitmap` objects whose dimensions match the size of the client window. Every time the client window is resized, the application creates an additional background task to generate an image for the new window size. The application does not require these intermediate images; it requires only the image for the final window size. To prevent the application from performing this additional work, you can cancel any active drawing tasks in the message handlers for the `WM_SIZE` and `WM_SIZING` messages and then reschedule drawing work after the window is resized.

To cancel active drawing tasks when the window is resized, the application calls the [concurrency::task_group::cancel](reference/task-group-class.md#cancel) method in the handlers for the `WM_SIZING` and `WM_SIZE` messages. The handler for the `WM_SIZE` message also calls the [concurrency::task_group::wait](reference/task-group-class.md#wait) method to wait for all active tasks to complete and then reschedules the drawing task for the updated window size.

When the client window is destroyed, it is good practice to cancel any active drawing tasks. Canceling any active drawing tasks makes sure that worker threads do not post messages to the UI thread after the client window is destroyed. The application cancels any active drawing tasks in the handler for the `WM_DESTROY` message.

### Responding to Cancellation

The `CChildView::DrawMandelbrot` method, which performs the drawing task, must respond to cancellation. Because the runtime uses exception handling to cancel tasks, the `CChildView::DrawMandelbrot` method must use an exception-safe mechanism to guarantee that all resources are correctly cleaned-up. This example uses the *Resource Acquisition Is Initialization* (RAII) pattern to guarantee that the bitmap bits are unlocked when the task is canceled.

##### To add support for cancellation in the Mandelbrot application

1. In ChildView.h, in the **`protected`** section of the `CChildView` class, add declarations for the `OnSize`, `OnSizing`, and `OnDestroy` message map functions.

   [!code-cpp[concrt-mandelbrot#201](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_15.h)]

1. In ChildView.cpp, modify the message map to contain handlers for the `WM_SIZE`, `WM_SIZING`, and `WM_DESTROY` messages.

   [!code-cpp[concrt-mandelbrot#202](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_16.cpp)]

1. Implement the `CChildView::OnSizing` method. This method cancels any existing drawing tasks.

   [!code-cpp[concrt-mandelbrot#203](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_17.cpp)]

1. Implement the `CChildView::OnSize` method. This method cancels any existing drawing tasks and creates a new drawing task for the updated client window size.

   [!code-cpp[concrt-mandelbrot#204](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_18.cpp)]

1. Implement the `CChildView::OnDestroy` method. This method cancels any existing drawing tasks.

   [!code-cpp[concrt-mandelbrot#205](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_19.cpp)]

1. In ChildView.cpp, define the `scope_guard` class, which implements the RAII pattern.

   [!code-cpp[concrt-mandelbrot#206](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_20.cpp)]

1. Add the following code to the `CChildView::DrawMandelbrot` method after the call to `Bitmap::LockBits`:

   [!code-cpp[concrt-mandelbrot#207](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_21.cpp)]

   This code handles cancellation by creating a `scope_guard` object. When the object leaves scope, it unlocks the bitmap bits.

1. Modify the end of the `CChildView::DrawMandelbrot` method to dismiss the `scope_guard` object after the bitmap bits are unlocked, but before any messages are sent to the UI thread. This ensures that the UI thread is not updated before the bitmap bits are unlocked.

   [!code-cpp[concrt-mandelbrot#208](../../parallel/concrt/codesnippet/cpp/walkthrough-removing-work-from-a-user-interface-thread_22.cpp)]

1. Verify that the application was updated successfully by building and running it.

When you resize the window, drawing work is performed only for the final window size. Any active drawing tasks are also canceled when the window is destroyed.

[[Top](#top)]

## See also

[Concurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Message Passing Functions](../../parallel/concrt/message-passing-functions.md)<br/>
[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br/>
[Cancellation in the PPL](cancellation-in-the-ppl.md)<br/>
[MFC Desktop Applications](../../mfc/mfc-desktop-applications.md)
