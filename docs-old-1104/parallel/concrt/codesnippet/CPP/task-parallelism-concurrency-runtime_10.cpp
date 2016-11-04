// Observes all exceptions that occurred in all tasks in the given range.
template<class T, class InIt> 
void observe_all_exceptions(InIt first, InIt last) 
{
    std::for_each(first, last, [](concurrency::task<T> t)
    {
        t.then([](concurrency::task<T> previousTask)
        {
            try
            {
                previousTask.get();
            }
            // Although you could catch (...), this demonstrates how to catch specific exceptions. Your app
            // might handle different exception types in different ways.
            catch (Platform::Exception^)
            {
                // Swallow the exception.
            }
            catch (const std::exception&)
            {
                // Swallow the exception.
            }
        });
    });
}