        // Accepts a message that was offered by this block by transferring ownership
        // to the caller.
        virtual concurrency::message<_Target_type>* accept_message(concurrency::runtime_object_identity msg_id)
        {
            concurrency::message<_Target_type>* message = NULL;

            // Transfer ownership if the provided message identifier matches
            // the identifier of the front of the output message queue.
            if (!_output_messages.empty() && 
                _output_messages.front()->msg_id() == msg_id)
            {
                message = _output_messages.front();
                _output_messages.pop();
            }

            return message;
        }