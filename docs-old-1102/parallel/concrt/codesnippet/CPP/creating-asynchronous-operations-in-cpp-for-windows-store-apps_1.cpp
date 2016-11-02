// Creates an IAsyncAction object and uses an implicit cancellation token.
auto op1 = create_async([]
{
    // Define work here.
});

// Creates an IAsyncAction object and uses no cancellation token.
auto op2 = create_async([]
{
    return create_task([]
    {
        // Define work here.
    });
});

// Creates an IAsyncAction object and uses an explicit cancellation token.
auto op3 = create_async([](cancellation_token ct)
{
    // Define work here.
});

// Creates an IAsyncAction object that runs another task and also uses an explicit cancellation token.
auto op4 = create_async([](cancellation_token ct)
{
    return create_task([ct]()
    {
        // Define work here.
    });
});