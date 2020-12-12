---
description: "Learn more about: Walkthrough: Debugging a C++ AMP Application"
title: "Walkthrough: Debugging a C++ AMP Application"
ms.date: "04/23/2019"
helpviewer_keywords: ["debugging, C++ Accelerated Massive Parallelism", "C++ AMP, debugging", "C++ Accelerated Massive Parallelism, debugging", "debugging, C++ AMP"]
ms.assetid: 40e92ecc-f6ba-411c-960c-b3047b854fb5
---
# Walkthrough: Debugging a C++ AMP Application

This topic demonstrates how to debug an application that uses C++ Accelerated Massive Parallelism (C++ AMP) to take advantage of the graphics processing unit (GPU). It uses a parallel-reduction program that sums up a large array of integers. This walkthrough illustrates the following tasks:

- Launching the GPU debugger.

- Inspecting GPU threads in the GPU Threads window.

- Using the **Parallel Stacks** window to simultaneously observe the call stacks of multiple GPU threads.

- Using the **Parallel Watch** window to inspect values of a single expression across multiple threads at the same time.

- Flagging, freezing, thawing, and grouping GPU threads.

- Executing all the threads of a tile to a specific location in code.

## Prerequisites

Before you start this walkthrough:

- Read [C++ AMP Overview](../../parallel/amp/cpp-amp-overview.md).

- Make sure that line numbers are displayed in the text editor. For more information, see [How to: Display Line Numbers in the Editor](/visualstudio/ide/reference/how-to-display-line-numbers-in-the-editor).

- Make sure you are running at least Windows 8 or Windows Server 2012 to support debugging on the software emulator.

[!INCLUDE[note_settings_general](../../mfc/includes/note_settings_general_md.md)]

### To create the sample project

The instructions for creating a project vary depending on which version of Visual Studio you are using. Make sure you have the correct version selected in the upper left of this page.

::: moniker range="msvc-160"

### To create the sample project in Visual Studio 2019

1. On the menu bar, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set  **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Console**.

1. From the filtered list of project types, choose **Console App** then choose **Next**. In the next page, enter `AMPMapReduce` in the **Name** box to specify a name for the project, and specify the project location if desired.

   ![Name the project](../../build/media/mathclient-project-name-2019.png "Name the project")

1. Choose the **Create** button to create the client project.

::: moniker-end

::: moniker range="<=msvc-150"

### To create the sample project in Visual Studio 2017 or Visual Studio 2015

1. Start Visual Studio.

1. On the menu bar, choose **File** > **New** > **Project**.

1. Under **Installed** in the templates pane, choose **Visual C++**.

1. Choose **Win32 Console Application**, type `AMPMapReduce` in the **Name** box, and then choose the **OK** button.

1. Choose the **Next** button.

1. Clear the **Precompiled header** check box, and then choose the **Finish** button.

1. In **Solution Explorer**, delete *stdafx.h*, *targetver.h*, and *stdafx.cpp* from the project.

::: moniker-end

Next:

1. Open AMPMapReduce.cpp and replace its content with the following code.

```cpp
    // AMPMapReduce.cpp defines the entry point for the program.
    // The program performs a parallel-sum reduction that computes the sum of an array of integers.

    #include <stdio.h>
    #include <tchar.h>
    #include <amp.h>

    const int BLOCK_DIM = 32;

    using namespace concurrency;

    void sum_kernel_tiled(tiled_index<BLOCK_DIM> t_idx, array<int, 1> &A, int stride_size) restrict(amp)
    {
        tile_static int localA[BLOCK_DIM];

        index<1> globalIdx = t_idx.global * stride_size;
        index<1> localIdx = t_idx.local;

        localA[localIdx[0]] =  A[globalIdx];

        t_idx.barrier.wait();

        // Aggregate all elements in one tile into the first element.
        for (int i = BLOCK_DIM / 2; i > 0; i /= 2)
        {
            if (localIdx[0] < i)
            {

                localA[localIdx[0]] += localA[localIdx[0] + i];
            }

            t_idx.barrier.wait();
        }

        if (localIdx[0] == 0)
        {
            A[globalIdx] = localA[0];
        }
    }

    int size_after_padding(int n)
    {
        // The extent might have to be slightly bigger than num_stride to
        // be evenly divisible by BLOCK_DIM. You can do this by padding with zeros.
        // The calculation to do this is BLOCK_DIM * ceil(n / BLOCK_DIM)
        return ((n - 1) / BLOCK_DIM + 1) * BLOCK_DIM;
    }

    int reduction_sum_gpu_kernel(array<int, 1> input)
    {
        int len = input.extent[0];

        //Tree-based reduction control that uses the CPU.
        for (int stride_size = 1; stride_size < len; stride_size *= BLOCK_DIM)
        {
            // Number of useful values in the array, given the current
            // stride size.
            int num_strides = len / stride_size;

            extent<1> e(size_after_padding(num_strides));

            // The sum kernel that uses the GPU.
            parallel_for_each(extent<1>(e).tile<BLOCK_DIM>(), [&input, stride_size] (tiled_index<BLOCK_DIM> idx) restrict(amp)
            {
                sum_kernel_tiled(idx, input, stride_size);
            });
        }

        array_view<int, 1> output = input.section(extent<1>(1));
        return output[0];
    }

    int cpu_sum(const std::vector<int> &arr) {
        int sum = 0;
        for (size_t i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        return sum;
    }

    std::vector<int> rand_vector(unsigned int size) {
        srand(2011);

        std::vector<int> vec(size);
        for (size_t i = 0; i < size; i++) {
            vec[i] = rand();
        }
        return vec;
    }

    array<int, 1> vector_to_array(const std::vector<int> &vec) {
        array<int, 1> arr(vec.size());
        copy(vec.begin(), vec.end(), arr);
        return arr;
    }

    int _tmain(int argc, _TCHAR* argv[])
    {
        std::vector<int> vec = rand_vector(10000);
        array<int, 1> arr = vector_to_array(vec);

        int expected = cpu_sum(vec);
        int actual = reduction_sum_gpu_kernel(arr);

        bool passed = (expected == actual);
        if (!passed) {
            printf("Actual (GPU): %d, Expected (CPU): %d", actual, expected);
        }
        printf("sum: %s\n", passed  "Passed!" : "Failed!");

        getchar();

        return 0;
    }
```

1. On the menu bar, choose **File** > **Save All**.

1. In **Solution Explorer**, open the shortcut menu for **AMPMapReduce**, and then choose **Properties**.

1. In the **Property Pages** dialog box, under **Configuration Properties**, choose **C/C++** > **Precompiled Headers**.

1. For the **Precompiled Header** property, select **Not Using Precompiled Headers**, and then choose the **OK** button.

1. On the menu bar, choose **Build** > **Build Solution**.

## Debugging the CPU Code

In this procedure, you will use the Local Windows Debugger to make sure that the CPU code in this application is correct. The segment of the CPU code in this application that is especially interesting is the **`for`** loop in the `reduction_sum_gpu_kernel` function. It controls the tree-based parallel reduction that is run on the GPU.

### To debug the CPU code

1. In **Solution Explorer**, open the shortcut menu for **AMPMapReduce**, and then choose **Properties**.

2. In the **Property Pages** dialog box, under **Configuration Properties**, choose **Debugging**. Verify that **Local Windows Debugger** is selected in the **Debugger to launch** list.

3. Return to the **Code Editor**.

4. Set breakpoints on the lines of code shown in the following illustration (approximately lines 67 line 70).

   ![CPU breakpoints](../../parallel/amp/media/campcpubreakpoints.png "CPU breakpoints") <br/>
   CPU breakpoints

5. On the menu bar, choose **Debug** > **Start Debugging**.

6. In the **Locals** window, observe the value for `stride_size` until the breakpoint at line 70 is reached.

7. On the menu bar, choose **Debug** > **Stop Debugging**.

## Debugging the GPU Code

This section shows how to debug the GPU code, which is the code contained in the `sum_kernel_tiled` function. The GPU code computes the sum of integers for each "block" in parallel.

### To debug the GPU code

1. In **Solution Explorer**, open the shortcut menu for **AMPMapReduce**, and then choose **Properties**.

2. In the **Property Pages** dialog box, under **Configuration Properties**, choose **Debugging**.

3. In the **Debugger to launch** list, select **Local Windows Debugger**.

4. In the **Debugger Type** list, verify that **Auto** is selected.

    **Auto** is the default value. Prior to Windows 10, **GPU Only** is the required value instead of **Auto**.

5. Choose the **OK** button.

6. Set a breakpoint at line 30, as shown in the following illustration.

   ![GPU breakpoints](../../parallel/amp/media/campgpubreakpoints.png "GPU breakpoints") <br/>
   GPU breakpoint

7. On the menu bar, choose **Debug** > **Start Debugging**. The breakpoints in the CPU code at lines 67 and 70 are not executed during GPU debugging because those lines of code are executed on the CPU.

### To use the GPU Threads window

1. To open the **GPU Threads** window, on the menu bar, choose **Debug** > **Windows** > **GPU Threads**.

   You can inspect the state the GPU threads in the **GPU Threads** window that appears.

2. Dock the **GPU Threads** window at the bottom of Visual Studio. Choose the **Expand Thread Switch** button to display the tile and thread text boxes. The **GPU Threads** window shows the total number of active and blocked GPU threads, as shown in the following illustration.

   ![GPU Threads window with 4 active threads](../../parallel/amp/media/campc.png "GPU Threads window with 4 active threads") <br/>
   GPU Threads window

   There are 313 tiles allocated for this computation. Each tile contains 32 threads. Because local GPU debugging occurs on a software emulator, there are four active GPU threads. The four threads execute the instructions simultaneously and then move on together to the next instruction.

   In the **GPU Threads** window, there are four GPU threads active and 28 GPU threads blocked at the [tile_barrier::wait](reference/tile-barrier-class.md#wait) statement defined at about line 21 (`t_idx.barrier.wait();`). All 32 GPU threads belong to the first tile, `tile[0]`. An arrow points to the row that includes the current thread. To switch to a different thread, use one of the following methods:

    - In the row for the thread to switch to in the **GPU Threads** window, open the shortcut menu and choose **Switch To Thread**. If the row represents more than one thread, you will switch to the first thread according to the thread coordinates.

    - Enter the tile and thread values of the thread in the corresponding text boxes and then choose the **Switch Thread** button.

   The **Call Stack** window displays the call stack of the current GPU thread.

### To use the Parallel Stacks window

1. To open the **Parallel Stacks** window, on the menu bar, choose **Debug** > **Windows** > **Parallel Stacks**.

   You can use the **Parallel Stacks** window to simultaneously inspect the stack frames of multiple GPU threads.

2. Dock the **Parallel Stacks** window at the bottom of Visual Studio.

3. Make sure that **Threads** is selected in the list in the upper-left corner. In the following illustration, the **Parallel Stacks** window shows a call-stack focused view of the GPU threads that you saw in the **GPU Threads** window.

   ![Parallel Stacks window with 4 active threads](../../parallel/amp/media/campd.png "Parallel Stacks window with 4 active threads") <br/>
   Parallel Stacks window

   32 threads went from `_kernel_stub` to the lambda statement in the `parallel_for_each` function call and then to the `sum_kernel_tiled` function, where the parallel reduction occurs. 28 out of the 32 threads have progressed to the [tile_barrier::wait](reference/tile-barrier-class.md#wait) statement and remain blocked at line 22, whereas the other 4 threads remain active in the `sum_kernel_tiled` function at line 30.

   You can inspect the properties of a GPU thread that are available in the **GPU Threads** window in the rich DataTip of the **Parallel Stacks** window. To do this, rest the mouse pointer on the stack frame of **sum_kernel_tiled**. The following illustration shows the DataTip.

   ![DataTip for Parallel Stacks window](../../parallel/amp/media/campe.png "DataTip for Parallel Stacks window") <br/>
   GPU thread DataTip

   For more information about the **Parallel Stacks** window, see [Using the Parallel Stacks Window](/visualstudio/debugger/using-the-parallel-stacks-window).

### To use the Parallel Watch window

1. To open the **Parallel Watch** window, on the menu bar, choose **Debug** > **Windows** > **Parallel Watch** > **Parallel Watch 1**.

   You can use the **Parallel Watch** window to inspect the values of an expression across multiple threads.

2. Dock the **Parallel Watch 1** window to the bottom of Visual Studio. There are 32 rows in the table of the **Parallel Watch** window. Each corresponds to a GPU thread that appeared in both the GPU Threads window and the **Parallel Stacks** window. Now, you can enter expressions whose values you want to inspect across all 32 GPU threads.

3. Select the **Add Watch** column header, enter `localIdx`, and then choose the **Enter** key.

4. Select the **Add Watch** column header again, type `globalIdx`, and then choose the **Enter** key.

5. Select the **Add Watch** column header again, type `localA[localIdx[0]]`, and then choose the **Enter** key.

   You can sort by a specified expression by selecting its corresponding column header.

   Select the **localA[localIdx[0]]** column header to sort the column. The following illustration shows the results of sorting by **localA[localIdx[0]]**.

   ![Parallel Watch window with sorted results](../../parallel/amp/media/campf.png "Parallel Watch window with sorted results") <br/>
   Results of sort

   You can export the content in the **Parallel Watch** window to Excel by choosing the **Excel** button and then choosing **Open in Excel**. If you have Excel installed on your development computer, this opens an Excel worksheet that contains the content.

6. In the upper-right corner of the **Parallel Watch** window, there's a filter control that you can use to filter the content by using Boolean expressions. Enter `localA[localIdx[0]] > 20000` in the filter control text box and then choose the **Enter** key.

   The window now contains only threads on which the `localA[localIdx[0]]` value is greater than 20000. The content is still sorted by the `localA[localIdx[0]]` column, which is the sorting action you performed earlier.

## Flagging GPU Threads

You can mark specific GPU threads by flagging them in the **GPU Threads** window, the **Parallel Watch** window, or the DataTip in the **Parallel Stacks** window. If a row in the GPU Threads window contains more than one thread, flagging that row flags all threads that are contained in the row.

### To flag GPU threads

1. Select the **[Thread]** column header in the **Parallel Watch 1** window to sort by tile index and thread index.

2. On the menu bar, choose **Debug** > **Continue**, which causes the four threads that were active to progress to the next barrier (defined at line 32 of AMPMapReduce.cpp).

3. Choose the flag symbol on the left side of the row that contains the four threads that are now active.

   The following illustration shows the four active flagged threads in the **GPU Threads** window.

   ![GPU Threads window with flagged threads](../../parallel/amp/media/campg.png "GPU Threads window with flagged threads") <br/>
   Active threads in the GPU Threads window

   The **Parallel Watch** window and the DataTip of the **Parallel Stacks** window both indicate the flagged threads.

4. If you want to focus on the four threads that you flagged, you can choose to show, in the **GPU Threads**, **Parallel Watch**, and **Parallel Stacks** windows, only the flagged threads.

   Choose the **Show Flagged Only** button on any of the windows or on the **Debug Location** toolbar. The following illustration shows the **Show Flagged Only** button on the **Debug Location** toolbar.

   ![Debug Location toolbar with Show Only Flagged icon](../../parallel/amp/media/camph.png "Debug Location toolbar with Show Only Flagged icon") <br/>
   **Show Flagged Only** button

   Now the **GPU Threads**, **Parallel Watch**, and **Parallel Stacks** windows display only the flagged threads.

## Freezing and Thawing GPU Threads

You can freeze (suspend) and thaw (resume) GPU threads from either the **GPU Threads** window or the **Parallel Watch** window. You can freeze and thaw CPU threads the same way; for information, see [How to: Use the Threads Window](/visualstudio/debugger/how-to-use-the-threads-window).

### To freeze and thaw GPU threads

1. Choose the **Show Flagged Only** button to display all the threads.

2. On the menu bar, choose **Debug** > **Continue**.

3. Open the shortcut menu for the active row and then choose **Freeze**.

   The following illustration of the **GPU Threads** window shows that all four threads are frozen.

   ![GPU Threads windows showing frozen threads](../../parallel/amp/media/campk.png "GPU Threads windows showing frozen threads") <br/>
   Frozen threads in the **GPU Threads** window

   Similarly, the **Parallel Watch** window shows that all four threads are frozen.

4. On the menu bar, choose **Debug** > **Continue** to allow the next four GPU threads to progress past the barrier at line 22 and to reach the breakpoint at line 30. The **GPU Threads** window shows that the four previously frozen threads remain frozen and in the active state.

5. On the menu bar, choose **Debug**, **Continue**.

6. From the **Parallel Watch** window, you can also thaw individual or multiple GPU threads.

### To group GPU threads

1. On the shortcut menu for one of the threads in the **GPU Threads** window, choose **Group By**, **Address**.

   The threads in the **GPU Threads** window are grouped by address. The address corresponds to the instruction in disassembly where each group of threads is located. 24 threads are at line 22 where the [tile_barrier::wait Method](reference/tile-barrier-class.md#wait) is executed. 12 threads are at the instruction for the barrier at line 32. Four of these threads are flagged. Eight threads are at the breakpoint at line 30. Four of these threads are frozen. The following illustration shows the grouped threads in the **GPU Threads** window.

   ![GPU Threads window with threads grouped by Address](../../parallel/amp/media/campl.png "GPU Threads window with threads grouped by Address") <br/>
   Grouped threads in the **GPU Threads** window

2. You can also perform the **Group By** operation by opening the shortcut menu for the data grid of the **Parallel Watch** window, choosing **Group By**, and then choosing the menu item that corresponds to how you want to group the threads.

## Running All Threads to a Specific Location in Code

You run all the threads in a given tile to the line that contains the cursor by using **Run Current Tile To Cursor**.

### To run all threads to the location marked by the cursor

1. On the shortcut menu for the frozen threads, choose **Thaw**.

2. In the **Code Editor**, put the cursor in line 30.

3. On the shortcut menu for the **Code Editor**, choose **Run Current Tile To Cursor**.

   The 24 threads that were previously blocked at the barrier at line 21 have progressed to line 32. This is shown in the **GPU Threads** window.

## See also

[C++ AMP Overview](../../parallel/amp/cpp-amp-overview.md)<br/>
[Debugging GPU Code](/visualstudio/debugger/debugging-gpu-code)<br/>
[How to: Use the GPU Threads Window](/visualstudio/debugger/how-to-use-the-gpu-threads-window)<br/>
[How to: Use the Parallel Watch Window](/visualstudio/debugger/how-to-use-the-parallel-watch-window)<br/>
[Analyzing C++ AMP Code with the Concurrency Visualizer](/archive/blogs/nativeconcurrency/analyzing-c-amp-code-with-the-concurrency-visualizer)
