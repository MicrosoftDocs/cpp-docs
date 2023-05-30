void use_shared_ptr_by_value(shared_ptr<int> sp);

void use_shared_ptr_by_reference(shared_ptr<int>& sp);
void use_shared_ptr_by_const_reference(const shared_ptr<int>& sp);

void use_raw_pointer(int* p);
void use_reference(int& r);

void test() {
    auto sp = make_shared<int>(5);

    // Pass the shared_ptr by value.
    // This invokes the copy constructor, increments the reference count, and makes the callee an owner.
    use_shared_ptr_by_value(sp);

    // Pass the shared_ptr by reference or const reference.
    // In this case, the reference count isn't incremented.
    use_shared_ptr_by_reference(sp);
    use_shared_ptr_by_const_reference(sp);

    // Pass the underlying pointer or a reference to the underlying object.
    use_raw_pointer(sp.get());
    use_reference(*sp);

    // Pass the shared_ptr by value.
    // This invokes the move constructor, which doesn't increment the reference count
    // but in fact transfers ownership to the callee.
    use_shared_ptr_by_value(move(sp));
}
