        // Sends an item to the message block.
        bool enqueue(Type const& item)
        {
            return concurrency::asend<Type>(this, item);
        }

        // Receives an item from the message block.
        Type dequeue()
        {
            return receive<Type>(this);
        }