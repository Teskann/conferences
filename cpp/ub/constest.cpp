// Google Test example
TEST(example_tests, various_undefined_behavior) {
    CONSTEXPR_SECTION("Out of bounds") {
        std::vector vec = {1, 2, 3};
        CONSTEXPR_EXPECT_EQ(vec[3], 3); // ❌ compilation error
    };
        
    CONSTEXPR_SECTION("Double delete")
    {
        auto* const a = new int{ 10 };
        delete a;
        delete a; // ❌ compilation error
    };

    CONSTEXPR_SECTION("Use after free")
    {
        auto* const a = new int{ 10 };
        delete a;
        auto b = *a + 1; // ❌ compilation error
    };
}