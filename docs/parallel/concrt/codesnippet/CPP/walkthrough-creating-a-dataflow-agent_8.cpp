// log-filter.cpp
// compile with: /EHsc 
#include <windows.h>
#include <agents.h>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace concurrency;
using namespace std;

// A synchronization primitive that is signaled when its 
// count reaches zero.
class countdown_event
{
public:
    countdown_event(unsigned int count = 0L)
        : _current(static_cast<long>(count)) 
    {
        // Set the event if the initial count is zero.
        if (_current == 0L)
        {
            _event.set();
        }
    }

    // Decrements the event counter.
    void signal()
    {
        if(InterlockedDecrement(&_current) == 0L)
        {
            _event.set();
        }
    }

    // Increments the event counter.
    void add_count()
    {
        if(InterlockedIncrement(&_current) == 1L)
        {
            _event.reset();
        }
    }

    // Blocks the current context until the event is set.
    void wait()
    {
        _event.wait();
    }

private:
    // The current count.
    volatile long _current;
    // The event that is set when the counter reaches zero.
    event _event;

    // Disable copy constructor.
    countdown_event(const countdown_event&);
    // Disable assignment.
    countdown_event const & operator=(countdown_event const&);
};

// Defines message types for the logger.
enum log_message_type
{
    log_info    = 0x1,
    log_warning = 0x2,
    log_error   = 0x4,
};

// An asynchronous logging agent that writes log messages to 
// file and to the console.
class log_agent : public agent
{
    // Holds a message string and its logging type.
    struct log_message
    {
        wstring message;
        log_message_type type;
    };

public:
    log_agent(const wstring& file_path, log_message_type file_messages, log_message_type console_messages)
        : _file(file_path)
        , _file_messages(file_messages)
        , _console_messages(console_messages)
        , _active(0)
    {
        if (_file.bad())
        {
            throw invalid_argument("Unable to open log file.");
        }
    }

    // Writes the provided message to the log.
    void log(const wstring& message, log_message_type type)
    {  
        // Increment the active message count.
        _active.add_count();

        // Send the message to the network.
        log_message msg = { message, type };
        send(_log_buffer, msg);
    }

    void close()
    {
        // Signal that the agent is now closed.
        _closed.set();
    }

protected:

    void run()
    {
        //
        // Create the dataflow network.
        //

        // Writes a log message to file.
        call<log_message> writer([this](log_message msg)
        {
            if ((msg.type & _file_messages) != 0)
            {
                // Write the message to the file.
                write_to_stream(msg, _file);
            }
            if ((msg.type & _console_messages) != 0)
            {
                // Write the message to the console.
                write_to_stream(msg, wcout);
            }
            // Decrement the active counter.
            _active.signal();
        });

        // Connect _log_buffer to the internal network to begin data flow.
        _log_buffer.link_target(&writer);

        // Wait for the closed event to be signaled.
        _closed.wait();

        // Wait for all messages to be processed.
        _active.wait();

        // Close the log file and flush the console.
        _file.close();
        wcout.flush();

        // Set the agent to the completed state.
        done();
    }

private:
    // Writes a logging message to the specified output stream.
    void write_to_stream(const log_message& msg, wostream& stream)
    {
        // Write the message to the stream.
        wstringstream ss;

        switch (msg.type)
        {
        case log_info:
            ss << L"info: ";
            break;
        case log_warning:
            ss << L"warning: ";
            break;
        case log_error:
            ss << L"error: ";
        }

        ss << msg.message << endl;
        stream << ss.str();
    }

private:   
    // The file stream to write messages to.
    wofstream _file;

    // The log message types that are written to file.
    log_message_type _file_messages;

    // The log message types that are written to the console.
    log_message_type _console_messages;

    // The head of the network. Propagates logging messages
    // to the rest of the network.
    unbounded_buffer<log_message> _log_buffer;

    // Counts the number of active messages in the network.
    countdown_event _active;

    // Signals that the agent has been closed.
    event _closed;
};

int wmain()
{
    // Union of all log message types.
    log_message_type log_all = log_message_type(log_info | log_warning  | log_error);

    // Create a logging agent that writes all log messages to file and error 
    // messages to the console.
    log_agent logger(L"log.txt", log_all, log_error);

    // Start the agent.
    logger.start();

    // Log a few messages.

    logger.log(L"===Logging started.===", log_info);

    logger.log(L"This is a sample warning message.", log_warning);
    logger.log(L"This is a sample error message.", log_error);

    logger.log(L"===Logging finished.===", log_info);

    // Close the logger and wait for the agent to finish.
    logger.close();
    agent::wait(&logger);
}