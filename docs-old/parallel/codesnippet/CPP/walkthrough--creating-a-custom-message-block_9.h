        // Transfers the message at the front of the input queue to the output queue
        // and propagates out all messages in the output queue.
        virtual void propagate_to_any_targets(concurrency::message<_Target_type>*)
        {
            // Retrieve the message from the front of the input queue.
            concurrency::message<_Source_type>* input_message = NULL;
            {
                concurrency::critical_section::scoped_lock lock(_input_lock);
                if (_input_messages.size() > 0)
                {
                    input_message = _input_messages.top();
                    _input_messages.pop();
                }
            }

            // Move the message to the output queue.
            if (input_message != NULL)
            {
                // The payload of the output message does not contain the 
                // priority of the message.
                concurrency::message<_Target_type>* output_message = 
                    new concurrency::message<_Target_type>(get<1>(input_message->payload));
                _output_messages.push(output_message);

                // Free the memory for the input message.
                delete input_message;

                // Do not propagate messages if the new message is not the head message.
                // In this case, the head message is reserved by another message block.
                if (_output_messages.front()->msg_id() != output_message->msg_id())
                {
                    return;
                }
            }

            // Propagate out the output messages.
            propagate_priority_order();
        }