// Google Test example
TEST(example_tests, transient_constexpr_evaluation)
{
    CONSTEXPR_SECTION("std::sort and std::find")
    {
        std::vector vec = {5, 2, 8, 1, 9};
        std::ranges::sort(vec);

        CONSTEXPR_EXPECT_EQ(vec[0], 1);
        CONSTEXPR_EXPECT_EQ(vec[4], 9);

        auto it = std::ranges::find(vec, 8);
        CONSTEXPR_ASSERT_TRUE(it != vec.end());
    };
}