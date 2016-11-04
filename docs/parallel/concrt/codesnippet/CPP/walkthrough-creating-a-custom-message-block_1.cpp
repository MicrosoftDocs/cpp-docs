template<
   class _Input,
   class _Output
>
class transformer : public propagator_block<
   single_link_registry<ITarget<_Output>>, 
   multi_link_registry<ISource<_Input>>
>;