        // Transfers the message that was previously offered by this block 
        // to the caller. The caller of this method is the target block that 
        // reserved the message.
        virtual concurrency::message<Type>* consume_message(concurrency::runtime_object_identity msg_id)
        {
            // Transfer ownership of the message to the caller.
            return accept_message(msg_id);
        }