struct scoped_blocking_signal
{
    scoped_blocking_signal()
    {
        concurrency::Context::Oversubscribe(true);
    }
    ~scoped_blocking_signal()
    {
        concurrency::Context::Oversubscribe(false);
    }
};