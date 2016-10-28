        // Synchronously passes a message from an ISource block to this block.
        // This method is typically called by propagator_block::send.
        virtual concurrency::message_status send_message(concurrency::message<_Source_type>* message,
            concurrency::ISource<_Source_type>* source)
        {
            // Accept the message from the source block.
            message = source->accept(message->msg_id(), this);

            if (message != NULL)
            {
                // Insert the message into the input queue. The type parameter Pr
                // defines how to order messages by priority.
                {
                    concurrency::critical_section::scoped_lock lock(_input_lock);
                    _input_messages.push(message);
                }

                // Synchronously send the message to the target blocks.
                sync_send(NULL);
                return accepted;
            }
            else
            {
                return missed;
            }
        }