---
description: "Learn more about: Memory Management: Frame Allocation"
title: "Memory Management: Frame Allocation"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory leaks [MFC], frame allocation", "memory [MFC], detecting leaks", "memory [MFC], reclaiming", "memory allocation [MFC], frames", "frame variables [MFC], automatic deletion of", "scope [MFC], frame variables", "heap allocation [MFC], vs. frame allocation", "variables [MFC], frame variables", "memory leaks [MFC], detecting", "memory, releasing [MFC]", "stack frames [MFC]", "memory leaks [MFC], allocating objects on the frame", "detecting memory leaks [MFC]", "frame allocation [MFC]", "frame variables [MFC]"]
ms.assetid: 945a211a-6f4f-4679-bb6a-b0f2a0d4a6c1
---
# Memory Management: Frame Allocation

Allocation on the frame takes its name from the "stack frame" that is set up whenever a function is called. The stack frame is an area of memory that temporarily holds the arguments to the function as well as any variables that are defined local to the function. Frame variables are often called "automatic" variables because the compiler automatically allocates the space for them.

There are two key characteristics of frame allocations. First, when you define a local variable, enough space is allocated on the stack frame to hold the entire variable, even if it is a large array or data structure. Second, frame variables are automatically deleted when they go out of scope:

[!code-cpp[NVC_MFC_Utilities#10](codesnippet/cpp/memory-management-frame-allocation_1.cpp)]

For local function variables, this scope transition happens when the function exits, but the scope of a frame variable can be smaller than a function if nested braces are used. This automatic deletion of frame variables is very important. In the case of simple primitive types (such as **`int`** or **byte**), arrays, or data structures, the automatic deletion simply reclaims the memory used by the variable. Since the variable has gone out of scope, it cannot be accessed anyway. In the case of C++ objects, however, the process of automatic deletion is a bit more complicated.

When an object is defined as a frame variable, its constructor is automatically invoked at the point where the definition is encountered. When the object goes out of scope, its destructor is automatically invoked before the memory for the object is reclaimed. This automatic construction and destruction can be very handy, but you must be aware of the automatic calls, especially to the destructor.

The key advantage of allocating objects on the frame is that they are automatically deleted. When you allocate your objects on the frame, you don't have to worry about forgotten objects causing memory leaks. (For details on memory leaks, see the article [Detecting Memory Leaks in MFC](/previous-versions/visualstudio/visual-studio-2010/c99kz476(v=vs.100)).) A disadvantage of frame allocation is that frame variables cannot be used outside their scope. Another factor in choosing frame allocation versus heap allocation is that for large structures and objects, it is often better to use the heap instead of the stack for storage since stack space is often limited.

## See also

[Memory Management](memory-management.md)
