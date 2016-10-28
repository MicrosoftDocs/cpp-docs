    // Start multiple tasks.
    array<task<int>, 3> tasks =
    {
        create_task([]() -> int { return 88; }),
        create_task([]() -> int { return 42; }),
        create_task([]() -> int { return 99; })
    };

    auto joinTask = when_all(begin(tasks), end(tasks)).then([](vector<int> results)
    {
        wcout << L"The sum is " 
              << accumulate(begin(results), end(results), 0)
              << L'.' << endl;
    });

    // Print a message from the joining thread.
    wcout << L"Hello from the joining thread." << endl;

    // Wait for the tasks to finish.
    joinTask.wait();

    /* Output:
        Hello from the joining thread.
        The sum is 229.
    */