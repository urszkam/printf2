#include <gtest/gtest.h>
#include <cstdio>
#include <string>
#include <limits.h>

using std::string;

extern "C" {
	int	ft_printf(const char *format, ...);
}

TEST(Flags, hashLowerHex)
{
	const char			*format = "%#x";
	const unsigned int	value = 48879u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, hashUpperHex)
{
	const char			*format = "%#X";
	const unsigned int	value = 48879u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, plusDecimalPositive)
{
	const char	*format = "%+d";
	const int	value = 42;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, plusIntPositive)
{
	const char	*format = "%+i";
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

TEST(Flags, plusDecimalZero)
{
	const char	*format = "%+d";
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

TEST(Flags, plusIntZero)
{
	const char	*format = "%+i";
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

TEST(Flags, plusIntNegative)
{
	const char	*format = "%+i";
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

TEST(MixedFlags, plusSpaceIntPositive)
{
	const char	*format = "%+ i";
	const int	value = 42;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, plusSpaceDecimalPositive)
{
	const char	*format = "%+ d";
	const int	value = 42;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, plusSpaceHashUpperHex)
{
	const char			*format = "%+ #X";
	const unsigned int	value = 48879u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, spaceHashUnsigned)
{
	const char			*format = "%+ #u";
	const unsigned int	value = 48879u;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, spaceHashDecimal)
{
	const char			*format = "% #d";
	const unsigned int	value = INT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, spaceHashPlusDecimal)
{
	const char			*format = "%+ #d";
	const unsigned int	value = INT_MAX;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, spaceHashDecimalNegative)
{
	const char			*format = "% #d";
	const unsigned int	value = INT_MIN;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, spaceHashPlusDecimalNegative)
{
	const char			*format = "%+ #d";
	const unsigned int	value = INT_MIN;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, plusSpaceHashUnsigned)
{
	const char			*format = "%+ #u";
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

TEST(Flags, hashPointer)
{
	const char	*format = "%#p";
	const char	*str = "String";
	const void	*value = (void *)str;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, plusPointer)
{
	const char	*format = "%+p";
	const char	*str = "String";
	const void	*value = (void *)str;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, spacePointer)
{
	const char	*format = "% p";
	const char	*str = "String";
	const void	*value = (void *)str;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, plusHashSpacePointer)
{
	const char	*format = "%+ #p";
	const char	*str = "String";
	const void	*value = (void *)str;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, String)
{
	const char	*format = "%#+ s";
	const char	*value = "String";

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(Flags, Char)
{
	const char	*format = "%#+ c";
	const char	value = '\t';

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}

TEST(MixedFlags, flagRepetitions)
{
	const char	*format = "%++  ## p";
	const char	*str = "String";
	const void	*value = (void *)str;

	testing::internal::CaptureStdout();
	int ret = ft_printf(format, value);
	string out = testing::internal::GetCapturedStdout();
	testing::internal::CaptureStdout();
	int expected_ret = printf(format, value);
	string expected_out = testing::internal::GetCapturedStdout();

	EXPECT_EQ(out, expected_out);
	EXPECT_EQ(ret, expected_ret);
}