        // Releases a previous message reservation.
        virtual void release_message(concurrency::runtime_object_identity msg_id)
        {
            // The head message must be the one that is reserved. 
            if (_output_messages.empty() || 
                _output_messages.front()->msg_id() != msg_id)
            {
                throw message_not_found();
            }
        }