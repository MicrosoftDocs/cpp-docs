        // Propagates messages in priority order.
        void propagate_priority_order()
        {
            // Cancel propagation if another block reserves the head message.
            if (_M_pReservedFor != NULL)
            {
                return;
            }

            // Propagate out all output messages. 
            // Because this block preserves message ordering, stop propagation
            // if any of the messages are not accepted by a target block.
            while (!_output_messages.empty())
            {
                // Get the next message.
                concurrency::message<_Target_type> * message = _output_messages.front();

                concurrency::message_status status = declined;

                // Traverse each target in the order in which they are connected.
                for (target_iterator iter = _M_connectedTargets.begin(); 
                    *iter != NULL; 
                    ++iter)
                {
                    // Propagate the message to the target.
                    concurrency::ITarget<_Target_type>* target = *iter;
                    status = target->propagate(message, this);

                    // If the target accepts the message then ownership of message has 
                    // changed. Do not propagate this message to any other target.
                    if (status == accepted)
                    {
                        break;
                    }

                    // If the target only reserved this message, we must wait until the 
                    // target accepts the message.
                    if (_M_pReservedFor != NULL)
                    {
                        break;
                    }
                }

                // If status is anything other than accepted, then the head message
                // was not propagated out. To preserve the order in which output 
                // messages are propagated, we must stop propagation until the head 
                // message is accepted.
                if (status != accepted)
                {
                    break;
                }
            }
        }