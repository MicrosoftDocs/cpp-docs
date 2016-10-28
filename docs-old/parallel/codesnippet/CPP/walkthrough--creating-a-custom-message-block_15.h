        // Notifies this block that a new target has been linked to it.
        virtual void link_target_notification(concurrency::ITarget<_Target_type>*)
        {
            // Do not propagate messages if a target block reserves
            // the message at the front of the queue.
            if (_M_pReservedFor != NULL)
            {
                return;
            }

            // Propagate out any messages that are in the output queue.
            propagate_priority_order();
        }