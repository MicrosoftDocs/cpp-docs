namespace concurrencyex 
{
    template<class Type,
        typename PriorityType = int,
        typename Pr = std::less<message<std::tuple<PriorityType, Type>>*>>
    class priority_buffer : public concurrency::propagator_block<concurrency::multi_link_registry<concurrency::ITarget<Type>>,
        concurrency::multi_link_registry<concurrency::ISource<std::tuple<PriorityType, Type>>>>
    {
    public:
    protected:
    private:
    };
}