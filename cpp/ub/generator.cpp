template <typename Container>
std::generator</* ... */> enumerate(const Container& container)
{
    size_t i = 0;
    for (auto it = begin(container); it != end(container); ++it)
        co_yield {i++, *it};
}