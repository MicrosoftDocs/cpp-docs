        // Reserves a message that was previously offered by this block.
        virtual bool reserve_message(concurrency::runtime_object_identity msg_id)
        {
            // Allow the message to be reserved if the provided message identifier
            // is the message identifier of the front of the message queue.
            return (!_output_messages.empty() && 
                _output_messages.front()->msg_id() == msg_id);
        }