auto f()
{
    auto a = std::make_shared<int>();
    return [a_weak = std::weak_ptr{a}]
    { 
        auto a = a_weak.lock();
        contract_assert(a != nullptr);

        std::print("a is not dangling here ! {}", *a);
    };
}