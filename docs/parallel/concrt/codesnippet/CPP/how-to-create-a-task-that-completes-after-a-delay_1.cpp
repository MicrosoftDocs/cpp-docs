// Creates a task that completes after the specified delay.
task<void> complete_after(unsigned int timeout)
{
    // A task completion event that is set when a timer fires.
    task_completion_event<void> tce;

    // Create a non-repeating timer.
    auto fire_once = new timer<int>(timeout, 0, nullptr, false);
    // Create a call object that sets the completion event after the timer fires.
    auto callback = new call<int>([tce](int)
    {
        tce.set();
    });

    // Connect the timer to the callback and start the timer.
    fire_once->link_target(callback);
    fire_once->start();

    // Create a task that completes after the completion event is set.
    task<void> event_set(tce);

    // Create a continuation task that cleans up resources and
    // and return that continuation task.
    return event_set.then([callback, fire_once]()
    {
        delete callback;
        delete fire_once;
    });
}

// Cancels the provided task after the specifed delay, if the task
// did not complete.
template<typename T>
task<T> cancel_after_timeout(task<T> t, cancellation_token_source cts, unsigned int timeout)
{
    // Create a task that returns true after the specified task completes.
    task<bool> success_task = t.then([](T)
    {
        return true;
    });
    // Create a task that returns false after the specified timeout.
    task<bool> failure_task = complete_after(timeout).then([]
    {
        return false;
    });

    // Create a continuation task that cancels the overall task 
    // if the timeout task finishes first.
    return (failure_task || success_task).then([t, cts](bool success)
    {
        if(!success)
        {
            // Set the cancellation token. The task that is passed as the
            // t parameter should respond to the cancellation and stop
            // as soon as it can.
            cts.cancel();
        }

        // Return the original task.
        return t;
    });
}