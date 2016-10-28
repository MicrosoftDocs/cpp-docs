    auto t1 = create_task([]() -> int
    {
        // Cancel the task.
        cancel_current_task();
    });

    // Create a continuation that retrieves the value from the previous.
    auto t2 = t1.then([](int n)
    {
        wcout << L"The previous task returned " << n << L'.' << endl;
    });

    try
    {
        // Wait for all tasks to complete.
        t2.get();
    }
    catch (const task_canceled& e)
    {
        wcout << L"The task was canceled." << endl;
    }
    /* Output:
        The task was canceled.
    */