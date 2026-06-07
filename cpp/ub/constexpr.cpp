constexpr int f(int x)
{
    return x * x;
}

static_assert(f(2) == 4);