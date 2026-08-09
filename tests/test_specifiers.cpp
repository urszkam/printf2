#include <gtest/gtest.h>
#include <cstdio>
#include <string>
#include <limits.h>

using std::string;

extern "C" {
	int	ft_printf(const char *format, ...);
}

TEST(specifiers, cA)
{
	const char	*format = "%c";
	const char	value = 'A';

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, cZero)
{
	const char	*format = "%c";
	const char	value = 0;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, sHello)
{
	const char	*format = "%s";
	const char	*value = "hello";

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, sEmpty)
{
	const char	*format = "%s";
	const char	*value = "";

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, sNull)
{
	const char	*format = "%s";
	const char	*value = NULL;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, pNumber)
{
	const char	*format = "%p";
	int			value = 42;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, &value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, &value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, pString)
{
	const char	*format = "%p";
	const char	*value = "hello";

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, &value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, &value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, pNull)
{
	const char	*format = "%p";
	int			*value = NULL;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, dNegative)
{
	const char	*format = "%d";
	const int	value = -42;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, dZero)
{
	const char	*format = "%d";
	const int	value = 0;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, dPositive)
{
	const char	*format = "%d";
	const int	value = 34549;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, iMin)
{
	const char	*format = "%i";
	const int	value = INT_MIN;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, iMax)
{
	const char	*format = "%i";
	const int	value = INT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, uMax)
{
	const char			*format = "%u";
	const unsigned int	value = UINT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, uZero)
{
	const char			*format = "%u";
	const unsigned int	value = 0u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, xMax)
{
	const char			*format = "%x";
	const unsigned int	value = UINT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, xZero)
{
	const char			*format = "%x";
	const unsigned int	value = 0;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, X)
{
	const char			*format = "%X";
	const unsigned int	value = UINT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, XZero)
{
	const char			*format = "%X";
	const unsigned int	value = 0;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, percent)
{
	testing::internal::CaptureStdout();
	int ret = ft_printf("%%");
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf("%%");
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, specifierAfterPercent)
{
	const char	*format = "%%%s";
	const char	*s = "hello";

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, s);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, s);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, pointerAndPercent)
{
	const char	*format = "ptr=%p percent=%%";
	const char		*text = "Hello";
	void		*ptr = (void *)text;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, ptr);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, ptr);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(specifiers, textBetweenSpecifiers)
{
	const char			*format = "c:%c s:%s d:%d u:%u x:%x X:%X";
	const char			letter = 'Z';
	const char			*text = "text";
	const int			decimal = -1;
	const unsigned int	unsigned_value = 0u;
	const unsigned int	lower_hex = 16u;
	const unsigned int	upper_hex = 255u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, letter, text, decimal, unsigned_value,
			lower_hex, upper_hex);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, letter, text, decimal, unsigned_value,
			lower_hex, upper_hex);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}
