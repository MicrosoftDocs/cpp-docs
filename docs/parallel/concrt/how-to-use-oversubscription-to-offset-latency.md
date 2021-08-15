---
description: "Learn more about: How to: Use Oversubscription to Offset Latency"
title: "How to: Use Oversubscription to Offset Latency"
ms.date: "11/04/2016"
helpviewer_keywords: ["oversubscription, using [Concurrency Runtime]", "using oversubscription [Concurrency Runtime]"]
ms.assetid: a1011329-2f0a-4afb-b599-dd4043009a10
---
# How to: Use Oversubscription to Offset Latency

Oversubscription can improve the overall efficiency of some applications that contain tasks that have a high amount of latency. This topic illustrates how to use oversubscription to offset the latency that is caused by reading data from a network connection.

## Example

This example uses the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) to download files from HTTP servers. The `http_reader` class derives from [concurrency::agent](../../parallel/concrt/reference/agent-class.md) and uses message passing to asynchronously read which URL names to download.

The `http_reader` class uses the [concurrency::task_group](reference/task-group-class.md) class to concurrently read each file. Each task calls the [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) method with the `_BeginOversubscription` parameter set to **`true`** to enable oversubscription in the current context. Each task then uses the Microsoft Foundation Classes (MFC) [CInternetSession](../../mfc/reference/cinternetsession-class.md) and [CHttpFile](../../mfc/reference/chttpfile-class.md) classes to download the file. Finally, each task calls `Context::Oversubscribe` with the `_BeginOversubscription` parameter set to **`false`** to disable oversubscription.

When oversubscription is enabled, the runtime creates one additional thread in which to run tasks. Each of these threads can also oversubscribe the current context and thereby create additional threads. The `http_reader` class uses a [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) object to limit the number of threads that the application uses. The agent initializes the buffer with a fixed number of token values. For each download operation, the agent reads a token value from the buffer before the operation starts and then writes that value back to the buffer after the operation finishes. When the buffer is empty, the agent waits for one of the download operations to write a value back to the buffer.

The following example limits the number of simultaneous tasks to two times the number of available hardware threads. This value is a good starting point to use when you experiment with oversubscription. You can use a value that fits a particular processing environment or dynamically change this value to respond to the actual workload.

[!code-cpp[concrt-download-oversubscription#1](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_1.cpp)]

This example produces the following output on a computer that has four processors:

```Output
Downloading http://www.adatum.com/...
Downloading http://www.adventure-works.com/...
Downloading http://www.alpineskihouse.com/...
Downloading http://www.cpandl.com/...
Downloading http://www.cohovineyard.com/...
Downloading http://www.cohowinery.com/...
Downloading http://www.cohovineyardandwinery.com/...
Downloading http://www.contoso.com/...
Downloading http://www.consolidatedmessenger.com/...
Downloading http://www.fabrikam.com/...
Downloading http://www.fourthcoffee.com/...
Downloading http://www.graphicdesigninstitute.com/...
Downloading http://www.humongousinsurance.com/...
Downloading http://www.litwareinc.com/...
Downloading http://www.lucernepublishing.com/...
Downloading http://www.margiestravel.com/...
Downloading http://www.northwindtraders.com/...
Downloading http://www.proseware.com/...
Downloading http://www.fineartschool.net...
Downloading http://www.tailspintoys.com/...
Downloaded 1801040 bytes in 3276 ms.
```

The example can run faster when oversubscription is enabled because additional tasks run while other tasks wait for a latent operation to finish.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `download-oversubscription.cpp` and then run one of the following commands in a **Visual Studio Command Prompt** window.

```cmd
cl.exe /EHsc /MD /D "_AFXDLL" download-oversubscription.cpp
cl.exe /EHsc /MT download-oversubscription.cpp
```

## Robust Programming

Always disable oversubscription after you no longer require it. Consider a function that does not handle an exception that is thrown by another function. If you do not disable oversubscription before the function returns, any additional parallel work will also oversubscribe the current context.

You can use the *Resource Acquisition Is Initialization* (RAII) pattern to limit oversubscription to a given scope. Under the RAII pattern, a data structure is allocated on the stack. That data structure initializes or acquires a resource when it is created and destroys or releases that resource when the data structure is destroyed. The RAII pattern guarantees that the destructor is called before the enclosing scope exits. Therefore, the resource is correctly managed when an exception is thrown or when a function contains multiple **`return`** statements.

The following example defines a structure that is named `scoped_blocking_signal`. The constructor of the `scoped_blocking_signal` structure enables oversubscription and the destructor disables oversubscription.

[!code-cpp[concrt-download-oversubscription#2](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_2.cpp)]

The following example modifies the body of the `download` method to use RAII to ensure that oversubscription is disabled before the function returns. This technique ensures that the `download` method is exception-safe.

[!code-cpp[concrt-download-oversubscription#3](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_3.cpp)]

## See also

[Contexts](../../parallel/concrt/contexts.md)<br/>
[Context::Oversubscribe Method](reference/context-class.md#oversubscribe)
