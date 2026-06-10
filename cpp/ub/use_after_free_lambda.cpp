auto f()
{
    int a = 0;
    return [&] { std::print("a is dangling here ! {}", a); }
}

int main()
{
    auto callback = f();
    callback();  // UB : a est dangling !
}