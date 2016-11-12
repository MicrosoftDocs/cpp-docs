        // Stores incoming messages.
        // The type parameter Pr specifies how to order messages by priority.
        std::priority_queue<
            concurrency::message<_Source_type>*,
            std::vector<concurrency::message<_Source_type>*>,
            Pr
        > _input_messages;

        // Synchronizes access to the input message queue.
        concurrency::critical_section _input_lock;

        // Stores outgoing messages.
        std::queue<concurrency::message<_Target_type>*> _output_messages;