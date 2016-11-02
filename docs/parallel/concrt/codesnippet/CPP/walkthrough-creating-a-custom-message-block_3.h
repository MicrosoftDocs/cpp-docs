namespace std 
{
    // A specialization of less that tests whether the priority element of a 
    // message is less than the priority element of another message.
    template<class Type, class PriorityType>
    struct less<concurrency::message<tuple<PriorityType,Type>>*> 
    {
        typedef concurrency::message<tuple<PriorityType, Type>> MessageType;

        bool operator()(const MessageType* left, const MessageType* right) const
        {
            // apply operator< to the first element (the priority) 
            // of the tuple payload.
            return (get<0>(left->payload) < get<0>(right->payload));
        }
    };

    // A specialization of less that tests whether the priority element of a 
    // message is greater than the priority element of another message.
    template<class Type, class PriorityType>
    struct greater<concurrency::message<tuple<PriorityType, Type>>*> 
    {
        typedef concurrency::message<std::tuple<PriorityType,Type>> MessageType;

        bool operator()(const MessageType* left, const MessageType* right) const
        {
            // apply operator> to the first element (the priority) 
            // of the tuple payload.
            return (get<0>(left->payload) > get<0>(right->payload));
        }
    };
}