auto f()
{
    int a = 0;
    return [&] { std::print("a is dangling here ! {}", a); }
}