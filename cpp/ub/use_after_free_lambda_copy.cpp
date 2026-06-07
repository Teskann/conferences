auto f()
{
    int a = 0;
    return [=] { std::print("a is not dangling here ! {}", a); }
}