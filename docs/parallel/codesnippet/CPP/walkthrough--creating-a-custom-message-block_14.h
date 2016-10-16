        // Resumes propagation after a reservation has been released.
        virtual void resume_propagation()
        {
            // Propagate out any messages in the output queue.
            if (_output_messages.size() > 0)
            {
                async_send(NULL);
            }
        }