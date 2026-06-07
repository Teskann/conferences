bool table_contains(std::array<int, 4> table, int value)
{
    for (int i = 0; i <= 4; i++)
    {
        if (table[i] == value)
            return true;
    }
    return false;
}