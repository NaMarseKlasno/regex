#include "greatest-master/greatest.h"
#include "zadanie1.h"



TEST check_true_1(void) {
    ASSERT_EQ(1, isAccepted("aaab"));
    PASS();
}
TEST check_true_2(void) {
    ASSERT_EQ(1, isAccepted("bcab"));
    PASS();
}
TEST check_true_3(void) {
    ASSERT_EQ(1, isAccepted("aabcab"));
    PASS();
}
TEST check_true_4(void) {
    ASSERT_EQ(1, isAccepted("bcaaab"));
    PASS();
}
TEST check_true_5(void) {
    ASSERT_EQ(1, isAccepted("aabcabc"));
    PASS();
}
TEST check_true_6(void) {
    ASSERT_EQ(1, isAccepted("bcaaaaabc"));
    PASS();
}
TEST check_true_7(void) {
    ASSERT_EQ(1, isAccepted("aaaabcbcbcaaaabcbcabc"));
    PASS();
}
TEST check_true_8(void) {
    ASSERT_EQ(1, isAccepted("aabcbcbcbcbcbcbcbcbcbcbcaaaaaaaaaaaaaaaaaabcaabcbcbcaaaabcbcabc"));
    PASS();
}
TEST check_true_9(void) {
    ASSERT_EQ(1, isAccepted("bcaabcbcbcbcbcbcbcaaaaaaaabcbcbcbcbcbcbcbcaabcbcbcaaaabcbcab"));
    PASS();
}
TEST check_true_10(void) {
    ASSERT_EQ(1, isAccepted("bcaabcbcbcbcbcbcbcaaaabcbcbcbcbcbcbcbcaabcbcbcaaaabcbcaaaaaaabc"));
    PASS();
}



TEST check_false_1(void) {
    ASSERT_EQ(-1, isAccepted("a"));
    PASS();
}
TEST check_false_2(void) {
    ASSERT_EQ(-1, isAccepted("b"));
    PASS();
}
TEST check_false_3(void) {
    ASSERT_EQ(-1, isAccepted("aabc"));
    PASS();
}
TEST check_false_4(void) {
    ASSERT_EQ(-1, isAccepted("bcbcaac"));
    PASS();
}
TEST check_false_5(void) {
    ASSERT_EQ(-1, isAccepted("cababababcaa"));
    PASS();
}
TEST check_false_6(void) {
    ASSERT_EQ(-1, isAccepted("dfvjnelckxnvoe"));
    PASS();
}
TEST check_false_7(void) {
    ASSERT_EQ(-1, isAccepted("aaaaaabcbcbcbcac"));
    PASS();
}
TEST check_false_8(void) {
    ASSERT_EQ(-1, isAccepted("ccccaaaaaabcbcbcbcbcccccccaabcbcc"));
    PASS();
}
TEST check_false_9(void) {
    ASSERT_EQ(-1, isAccepted("aaaaaaaaabababababcababababbaababababababcbbcbcbcbcbcbcaa"));
    PASS();
}
TEST check_false_10(void) {
    ASSERT_EQ(-1, isAccepted("bcaabcbcbcbcbcbcbcaaaaabcbcbcbcbcbcbcbcaabcbcbcaaaabcbcaaaaaaabc"));
    PASS();
}










GREATEST_MAIN_DEFS();

int main(int argc, char **argv)
{
    GREATEST_MAIN_BEGIN();

    RUN_TEST(check_true_1);
    RUN_TEST(check_true_2);
    RUN_TEST(check_true_3);
    RUN_TEST(check_true_4);
    RUN_TEST(check_true_5);
    RUN_TEST(check_true_6);
    RUN_TEST(check_true_7);
    RUN_TEST(check_true_8);
    RUN_TEST(check_true_9);
    RUN_TEST(check_true_10);

    RUN_TEST(check_false_1);
    RUN_TEST(check_false_2);
    RUN_TEST(check_false_3);
    RUN_TEST(check_false_4);
    RUN_TEST(check_false_5);
    RUN_TEST(check_false_6);
    RUN_TEST(check_false_7);
    RUN_TEST(check_false_8);
    RUN_TEST(check_false_9);
    RUN_TEST(check_false_10);

    GREATEST_MAIN_END();
}